// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cad_convert_msgs:srv/DxfToXml.idl
// generated code does not contain a copyright notice

#ifndef CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__BUILDER_HPP_
#define CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cad_convert_msgs/srv/detail/dxf_to_xml__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cad_convert_msgs
{

namespace srv
{

namespace builder
{

class Init_DxfToXml_Request_file_path
{
public:
  Init_DxfToXml_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cad_convert_msgs::srv::DxfToXml_Request file_path(::cad_convert_msgs::srv::DxfToXml_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cad_convert_msgs::srv::DxfToXml_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cad_convert_msgs::srv::DxfToXml_Request>()
{
  return cad_convert_msgs::srv::builder::Init_DxfToXml_Request_file_path();
}

}  // namespace cad_convert_msgs


namespace cad_convert_msgs
{

namespace srv
{

namespace builder
{

class Init_DxfToXml_Response_xml_output
{
public:
  explicit Init_DxfToXml_Response_xml_output(::cad_convert_msgs::srv::DxfToXml_Response & msg)
  : msg_(msg)
  {}
  ::cad_convert_msgs::srv::DxfToXml_Response xml_output(::cad_convert_msgs::srv::DxfToXml_Response::_xml_output_type arg)
  {
    msg_.xml_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cad_convert_msgs::srv::DxfToXml_Response msg_;
};

class Init_DxfToXml_Response_success
{
public:
  Init_DxfToXml_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DxfToXml_Response_xml_output success(::cad_convert_msgs::srv::DxfToXml_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DxfToXml_Response_xml_output(msg_);
  }

private:
  ::cad_convert_msgs::srv::DxfToXml_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cad_convert_msgs::srv::DxfToXml_Response>()
{
  return cad_convert_msgs::srv::builder::Init_DxfToXml_Response_success();
}

}  // namespace cad_convert_msgs

#endif  // CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__BUILDER_HPP_
