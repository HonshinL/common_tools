// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cad_convert_msgs:srv/DxfToXml.idl
// generated code does not contain a copyright notice

#ifndef CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__STRUCT_H_
#define CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'file_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DxfToXml in the package cad_convert_msgs.
typedef struct cad_convert_msgs__srv__DxfToXml_Request
{
  rosidl_runtime_c__String file_path;
} cad_convert_msgs__srv__DxfToXml_Request;

// Struct for a sequence of cad_convert_msgs__srv__DxfToXml_Request.
typedef struct cad_convert_msgs__srv__DxfToXml_Request__Sequence
{
  cad_convert_msgs__srv__DxfToXml_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cad_convert_msgs__srv__DxfToXml_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'xml_output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DxfToXml in the package cad_convert_msgs.
typedef struct cad_convert_msgs__srv__DxfToXml_Response
{
  bool success;
  rosidl_runtime_c__String xml_output;
} cad_convert_msgs__srv__DxfToXml_Response;

// Struct for a sequence of cad_convert_msgs__srv__DxfToXml_Response.
typedef struct cad_convert_msgs__srv__DxfToXml_Response__Sequence
{
  cad_convert_msgs__srv__DxfToXml_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cad_convert_msgs__srv__DxfToXml_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__STRUCT_H_
