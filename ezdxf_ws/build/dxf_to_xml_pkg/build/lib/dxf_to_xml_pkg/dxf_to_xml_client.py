import rclpy
from rclpy.node import Node
from cad_convert_msgs.srv import DxfToXml

class DxfToXmlClient(Node):
    def __init__(self):
        super().__init__('dxf_to_xml_client')
        self.cli = self.create_client(DxfToXml, 'convert_dxf_to_xml')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

    def send_request(self, filename):
        req = DxfToXml.Request()
        req.filename = filename
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    client = DxfToXmlClient()
    response = client.send_request("/home/hongxin/Projects/10_Github/common_tools/ezdxf_ws/src/dxf_to_xml/dxf/arc.dxf")
    print("XML Output:\n", response.xml_content)
    rclpy.shutdown()
