import rclpy
from rclpy.node import Node
from cad_convert_msgs.srv import DxfToXml
import argparse

class DxfToXmlClient(Node):
    def __init__(self):
        super().__init__('dxf_to_xml_client')
        self.cli = self.create_client(DxfToXml, 'convert_dxf_to_xml')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

    def send_request(self, file_path):
        req = DxfToXml.Request()
        req.file_path = file_path
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()

def main(args=None):
    parser = argparse.ArgumentParser(description="DXF to XML client")
    parser.add_argument("--file-path", required=True, help="Path to DXF file")
    cli_args, ros_args = parser.parse_known_args()

    rclpy.init(args=ros_args)
    client = DxfToXmlClient()
    response = client.send_request(cli_args.file_path)
    if response is not None:
        print("程序暂停，按回车继续...")
        input()
        print("XML Output:\n", response.xml_output)
    else:
        print("Service call failed")
    rclpy.shutdown()

if __name__ == '__main__':
    main()
