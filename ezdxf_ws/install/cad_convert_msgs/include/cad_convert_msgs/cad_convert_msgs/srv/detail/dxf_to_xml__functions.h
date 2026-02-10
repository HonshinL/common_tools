// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cad_convert_msgs:srv/DxfToXml.idl
// generated code does not contain a copyright notice

#ifndef CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__FUNCTIONS_H_
#define CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cad_convert_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cad_convert_msgs/srv/detail/dxf_to_xml__struct.h"

/// Initialize srv/DxfToXml message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cad_convert_msgs__srv__DxfToXml_Request
 * )) before or use
 * cad_convert_msgs__srv__DxfToXml_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Request__init(cad_convert_msgs__srv__DxfToXml_Request * msg);

/// Finalize srv/DxfToXml message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Request__fini(cad_convert_msgs__srv__DxfToXml_Request * msg);

/// Create srv/DxfToXml message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cad_convert_msgs__srv__DxfToXml_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
cad_convert_msgs__srv__DxfToXml_Request *
cad_convert_msgs__srv__DxfToXml_Request__create();

/// Destroy srv/DxfToXml message.
/**
 * It calls
 * cad_convert_msgs__srv__DxfToXml_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Request__destroy(cad_convert_msgs__srv__DxfToXml_Request * msg);

/// Check for srv/DxfToXml message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Request__are_equal(const cad_convert_msgs__srv__DxfToXml_Request * lhs, const cad_convert_msgs__srv__DxfToXml_Request * rhs);

/// Copy a srv/DxfToXml message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Request__copy(
  const cad_convert_msgs__srv__DxfToXml_Request * input,
  cad_convert_msgs__srv__DxfToXml_Request * output);

/// Initialize array of srv/DxfToXml messages.
/**
 * It allocates the memory for the number of elements and calls
 * cad_convert_msgs__srv__DxfToXml_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Request__Sequence__init(cad_convert_msgs__srv__DxfToXml_Request__Sequence * array, size_t size);

/// Finalize array of srv/DxfToXml messages.
/**
 * It calls
 * cad_convert_msgs__srv__DxfToXml_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Request__Sequence__fini(cad_convert_msgs__srv__DxfToXml_Request__Sequence * array);

/// Create array of srv/DxfToXml messages.
/**
 * It allocates the memory for the array and calls
 * cad_convert_msgs__srv__DxfToXml_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
cad_convert_msgs__srv__DxfToXml_Request__Sequence *
cad_convert_msgs__srv__DxfToXml_Request__Sequence__create(size_t size);

/// Destroy array of srv/DxfToXml messages.
/**
 * It calls
 * cad_convert_msgs__srv__DxfToXml_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Request__Sequence__destroy(cad_convert_msgs__srv__DxfToXml_Request__Sequence * array);

/// Check for srv/DxfToXml message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Request__Sequence__are_equal(const cad_convert_msgs__srv__DxfToXml_Request__Sequence * lhs, const cad_convert_msgs__srv__DxfToXml_Request__Sequence * rhs);

/// Copy an array of srv/DxfToXml messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Request__Sequence__copy(
  const cad_convert_msgs__srv__DxfToXml_Request__Sequence * input,
  cad_convert_msgs__srv__DxfToXml_Request__Sequence * output);

/// Initialize srv/DxfToXml message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cad_convert_msgs__srv__DxfToXml_Response
 * )) before or use
 * cad_convert_msgs__srv__DxfToXml_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Response__init(cad_convert_msgs__srv__DxfToXml_Response * msg);

/// Finalize srv/DxfToXml message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Response__fini(cad_convert_msgs__srv__DxfToXml_Response * msg);

/// Create srv/DxfToXml message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cad_convert_msgs__srv__DxfToXml_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
cad_convert_msgs__srv__DxfToXml_Response *
cad_convert_msgs__srv__DxfToXml_Response__create();

/// Destroy srv/DxfToXml message.
/**
 * It calls
 * cad_convert_msgs__srv__DxfToXml_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Response__destroy(cad_convert_msgs__srv__DxfToXml_Response * msg);

/// Check for srv/DxfToXml message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Response__are_equal(const cad_convert_msgs__srv__DxfToXml_Response * lhs, const cad_convert_msgs__srv__DxfToXml_Response * rhs);

/// Copy a srv/DxfToXml message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Response__copy(
  const cad_convert_msgs__srv__DxfToXml_Response * input,
  cad_convert_msgs__srv__DxfToXml_Response * output);

/// Initialize array of srv/DxfToXml messages.
/**
 * It allocates the memory for the number of elements and calls
 * cad_convert_msgs__srv__DxfToXml_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Response__Sequence__init(cad_convert_msgs__srv__DxfToXml_Response__Sequence * array, size_t size);

/// Finalize array of srv/DxfToXml messages.
/**
 * It calls
 * cad_convert_msgs__srv__DxfToXml_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Response__Sequence__fini(cad_convert_msgs__srv__DxfToXml_Response__Sequence * array);

/// Create array of srv/DxfToXml messages.
/**
 * It allocates the memory for the array and calls
 * cad_convert_msgs__srv__DxfToXml_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
cad_convert_msgs__srv__DxfToXml_Response__Sequence *
cad_convert_msgs__srv__DxfToXml_Response__Sequence__create(size_t size);

/// Destroy array of srv/DxfToXml messages.
/**
 * It calls
 * cad_convert_msgs__srv__DxfToXml_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
void
cad_convert_msgs__srv__DxfToXml_Response__Sequence__destroy(cad_convert_msgs__srv__DxfToXml_Response__Sequence * array);

/// Check for srv/DxfToXml message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Response__Sequence__are_equal(const cad_convert_msgs__srv__DxfToXml_Response__Sequence * lhs, const cad_convert_msgs__srv__DxfToXml_Response__Sequence * rhs);

/// Copy an array of srv/DxfToXml messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cad_convert_msgs
bool
cad_convert_msgs__srv__DxfToXml_Response__Sequence__copy(
  const cad_convert_msgs__srv__DxfToXml_Response__Sequence * input,
  cad_convert_msgs__srv__DxfToXml_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAD_CONVERT_MSGS__SRV__DETAIL__DXF_TO_XML__FUNCTIONS_H_
