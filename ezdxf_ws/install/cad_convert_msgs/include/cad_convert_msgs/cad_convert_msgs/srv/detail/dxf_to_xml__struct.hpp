// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cad_convert_msgs:srv/DxfToXml.idl
// generated code does not contain a copyright notice

#ifndef CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__STRUCT_HPP_
#define CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cad_convert_msgs__srv__DxfToXml_Request __attribute__((deprecated))
#else
# define DEPRECATED__cad_convert_msgs__srv__DxfToXml_Request __declspec(deprecated)
#endif

namespace cad_convert_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DxfToXml_Request_
{
  using Type = DxfToXml_Request_<ContainerAllocator>;

  explicit DxfToXml_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  explicit DxfToXml_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  // field types and members
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_path_type file_path;

  // setters for named parameter idiom
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cad_convert_msgs__srv__DxfToXml_Request
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cad_convert_msgs__srv__DxfToXml_Request
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DxfToXml_Request_ & other) const
  {
    if (this->file_path != other.file_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const DxfToXml_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DxfToXml_Request_

// alias to use template instance with default allocator
using DxfToXml_Request =
  cad_convert_msgs::srv::DxfToXml_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cad_convert_msgs


#ifndef _WIN32
# define DEPRECATED__cad_convert_msgs__srv__DxfToXml_Response __attribute__((deprecated))
#else
# define DEPRECATED__cad_convert_msgs__srv__DxfToXml_Response __declspec(deprecated)
#endif

namespace cad_convert_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DxfToXml_Response_
{
  using Type = DxfToXml_Response_<ContainerAllocator>;

  explicit DxfToXml_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->xml_output = "";
    }
  }

  explicit DxfToXml_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : xml_output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->xml_output = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _xml_output_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _xml_output_type xml_output;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__xml_output(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->xml_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cad_convert_msgs__srv__DxfToXml_Response
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cad_convert_msgs__srv__DxfToXml_Response
    std::shared_ptr<cad_convert_msgs::srv::DxfToXml_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DxfToXml_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->xml_output != other.xml_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const DxfToXml_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DxfToXml_Response_

// alias to use template instance with default allocator
using DxfToXml_Response =
  cad_convert_msgs::srv::DxfToXml_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cad_convert_msgs

namespace cad_convert_msgs
{

namespace srv
{

struct DxfToXml
{
  using Request = cad_convert_msgs::srv::DxfToXml_Request;
  using Response = cad_convert_msgs::srv::DxfToXml_Response;
};

}  // namespace srv

}  // namespace cad_convert_msgs

#endif  // CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__STRUCT_HPP_
