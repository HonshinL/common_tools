// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cad_convert_msgs:srv/DxfToXml.idl
// generated code does not contain a copyright notice

#ifndef CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__TRAITS_HPP_
#define CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cad_convert_msgs/srv/detail/dxf_to_xml__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cad_convert_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DxfToXml_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DxfToXml_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DxfToXml_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cad_convert_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cad_convert_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cad_convert_msgs::srv::DxfToXml_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cad_convert_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cad_convert_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cad_convert_msgs::srv::DxfToXml_Request & msg)
{
  return cad_convert_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cad_convert_msgs::srv::DxfToXml_Request>()
{
  return "cad_convert_msgs::srv::DxfToXml_Request";
}

template<>
inline const char * name<cad_convert_msgs::srv::DxfToXml_Request>()
{
  return "cad_convert_msgs/srv/DxfToXml_Request";
}

template<>
struct has_fixed_size<cad_convert_msgs::srv::DxfToXml_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cad_convert_msgs::srv::DxfToXml_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cad_convert_msgs::srv::DxfToXml_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cad_convert_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DxfToXml_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: xml_output
  {
    out << "xml_output: ";
    rosidl_generator_traits::value_to_yaml(msg.xml_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DxfToXml_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: xml_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xml_output: ";
    rosidl_generator_traits::value_to_yaml(msg.xml_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DxfToXml_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cad_convert_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cad_convert_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cad_convert_msgs::srv::DxfToXml_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cad_convert_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cad_convert_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cad_convert_msgs::srv::DxfToXml_Response & msg)
{
  return cad_convert_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cad_convert_msgs::srv::DxfToXml_Response>()
{
  return "cad_convert_msgs::srv::DxfToXml_Response";
}

template<>
inline const char * name<cad_convert_msgs::srv::DxfToXml_Response>()
{
  return "cad_convert_msgs/srv/DxfToXml_Response";
}

template<>
struct has_fixed_size<cad_convert_msgs::srv::DxfToXml_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cad_convert_msgs::srv::DxfToXml_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cad_convert_msgs::srv::DxfToXml_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cad_convert_msgs::srv::DxfToXml>()
{
  return "cad_convert_msgs::srv::DxfToXml";
}

template<>
inline const char * name<cad_convert_msgs::srv::DxfToXml>()
{
  return "cad_convert_msgs/srv/DxfToXml";
}

template<>
struct has_fixed_size<cad_convert_msgs::srv::DxfToXml>
  : std::integral_constant<
    bool,
    has_fixed_size<cad_convert_msgs::srv::DxfToXml_Request>::value &&
    has_fixed_size<cad_convert_msgs::srv::DxfToXml_Response>::value
  >
{
};

template<>
struct has_bounded_size<cad_convert_msgs::srv::DxfToXml>
  : std::integral_constant<
    bool,
    has_bounded_size<cad_convert_msgs::srv::DxfToXml_Request>::value &&
    has_bounded_size<cad_convert_msgs::srv::DxfToXml_Response>::value
  >
{
};

template<>
struct is_service<cad_convert_msgs::srv::DxfToXml>
  : std::true_type
{
};

template<>
struct is_service_request<cad_convert_msgs::srv::DxfToXml_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cad_convert_msgs::srv::DxfToXml_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__TRAITS_HPP_
