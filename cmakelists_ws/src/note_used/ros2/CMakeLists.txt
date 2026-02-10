cmake_minimum_required(VERSION 3.5)
project(my_ros2_node)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 引入 ROS 2 构建系统
find_package(ament_cmake REQUIRED)

# 引入 ROS 2 依赖
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# 添加可执行文件
add_executable(my_node
  src/my_node.cpp
)

# 声明依赖关系
ament_target_dependencies(my_node
  rclcpp
  std_msgs
)

# 安装规则：让 ros2 run 能找到
install(TARGETS
  my_node
  DESTINATION lib/${PROJECT_NAME}
)

# 导出包信息
ament_package()
