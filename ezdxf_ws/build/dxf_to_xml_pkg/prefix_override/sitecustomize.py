import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hongxin/Projects/10_Github/common_tools/ezdxf_ws/install/dxf_to_xml_pkg'
