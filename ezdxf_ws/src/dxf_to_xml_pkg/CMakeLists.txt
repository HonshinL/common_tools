cmake_minimum_required(VERSION 3.5)
project(dxf_to_xml_pkg)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 生成接口
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/DxfToXml.srv"
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
