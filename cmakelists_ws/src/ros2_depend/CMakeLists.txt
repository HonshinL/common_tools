cmake_minimum_required(VERSION 3.8) 
project(ros2_depend) 

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang") 
  add_compile_options(-Wall -Wextra -Wpedantic) 
endif() 

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON) 

# Find dependencies 
find_package(ament_cmake REQUIRED) 
find_package(rclcpp REQUIRED) 
find_package(std_msgs REQUIRED) 
find_package(OpenCV REQUIRED) 

# Add local custom library 
add_library(my_utils src/my_utils.cpp) 

# Include directories for your headers 
target_include_directories(my_utils PUBLIC 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> 
  $<INSTALL_INTERFACE:include> 
) 

# Add ROS 2 node executable 
add_executable(my_node src/my_node.cpp) 

# Include directories for node 
target_include_directories(my_node PUBLIC 
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> 
  $<INSTALL_INTERFACE:include> 
) 

# Ament dependencies (adds include/link as needed) 
ament_target_dependencies(my_node 
  rclcpp 
  std_msgs 
) 

# Link libraries 
target_link_libraries(my_node 
  ${OpenCV_LIBRARIES} 
  my_utils 
) 

# Install the executable 
install(TARGETS my_node 
  DESTINATION lib/${PROJECT_NAME} 
) 

# Install the library 
install(TARGETS my_utils 
  DESTINATION lib/${PROJECT_NAME} 
) 

# Install header files 
install(DIRECTORY include/ 
  DESTINATION include/${PROJECT_NAME} 
) 

# Export dependency information 
ament_export_dependencies(rclcpp std_msgs) 

# Export include directories (for other packages using this package) 
ament_export_include_directories(include) 

# Export library targets (for other packages linking to this package) 
ament_export_libraries(my_utils) 

# Export package information 
ament_package()