cmake_minimum_required(VERSION 3.5)
project(my_program)

# 使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加可执行文件
add_executable(my_program
  src/main.cpp
)

# 链接依赖库（如果有）
target_link_libraries(my_program
  PRIVATE
  pthread
)
