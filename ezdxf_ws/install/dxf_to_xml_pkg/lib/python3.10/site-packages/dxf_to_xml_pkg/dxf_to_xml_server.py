import rclpy
from rclpy.node import Node
from dxf_to_xml_pkg.srv import DxfToXml
import ezdxf
import xml.etree.ElementTree as ET
import math

class DxfToXmlService(Node):
    def __init__(self):
        super().__init__('dxf_to_xml_service')
        self.srv = self.create_service(DxfToXml, 'convert_dxf_to_xml', self.convert_callback)

    def convert_callback(self, request, response):
        try:
            doc = ezdxf.readfile(request.filename)
            msp = doc.modelspace()

            root = ET.Element("shapes")
            index = 0

            # 直线
            for line in msp.query("LINE"):
                start, end = line.dxf.start, line.dxf.end
                ET.SubElement(root, "line",
                              index=str(index),
                              x1=str(start.x), y1=str(start.y),
                              x2=str(end.x), y2=str(end.y))
                index += 1

            # 圆
            for circle in msp.query("CIRCLE"):
                center = circle.dxf.center
                radius = circle.dxf.radius
                ET.SubElement(root, "circle",
                              index=str(index),
                              cx=str(center.x), cy=str(center.y),
                              r=str(radius))
                index += 1

            # 圆弧（始终按 DXF CCW 方向）
            for arc in msp.query("ARC"):
                center = arc.dxf.center
                radius = arc.dxf.radius
                start_angle = math.radians(arc.dxf.start_angle)
                end_angle = math.radians(arc.dxf.end_angle)
                span = (end_angle - start_angle) % (2 * math.pi)
                angles = [start_angle + span * i / 20 for i in range(21)]  # 采样 20 段
                arc_elem = ET.SubElement(root, "arc",
                                         index=str(index),
                                         cx=str(center.x), cy=str(center.y),
                                         r=str(radius),
                                         start_angle=str(arc.dxf.start_angle),
                                         end_angle=str(arc.dxf.end_angle))
                for j, theta in enumerate(angles):
                    x = center.x + radius * math.cos(theta)
                    y = center.y + radius * math.sin(theta)
                    ET.SubElement(arc_elem, "point",
                                  id=str(j), x=str(x), y=str(y))
                index += 1

            # 样条曲线
            for spline in msp.query("SPLINE"):
                bspline = spline.construction_tool()
                points = [(p.x, p.y) for p in bspline.approximate(50)]
                spline_elem = ET.SubElement(root, "spline", index=str(index))
                for j, (x, y) in enumerate(points):
                    ET.SubElement(spline_elem, "point",
                                  id=str(j), x=str(x), y=str(y))
                # 控制点
                for j, cp in enumerate(spline.control_points):
                    ET.SubElement(spline_elem, "control_point",
                                  id=str(j), x=str(cp[0]), y=str(cp[1]))
                # 拟合点
                for j, fp in enumerate(spline.fit_points):
                    ET.SubElement(spline_elem, "fit_point",
                                  id=str(j), x=str(fp[0]), y=str(fp[1]))
                index += 1

            # 转换为字符串
            xml_str = ET.tostring(root, encoding="unicode")
            response.xml_content = xml_str

            # 保存到文件
            with open("output.xml", "w") as f:
                f.write(xml_str)

        except Exception as e:
            self.get_logger().error(f"Failed to convert DXF: {e}")
            response.xml_content = "<error>DXF parsing failed</error>"
        return response


def main(args=None):
    rclpy.init(args=args)
    node = DxfToXmlService()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()