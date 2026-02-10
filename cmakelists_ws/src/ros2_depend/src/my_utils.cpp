#include "ros2_depend/my_utils.hpp"

namespace my_utils {
  std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
  }
}