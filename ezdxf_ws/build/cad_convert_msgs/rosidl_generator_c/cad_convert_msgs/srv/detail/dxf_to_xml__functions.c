// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cad_convert_msgs:srv/DxfToXml.idl
// generated code does not contain a copyright notice
#include "cad_convert_msgs/srv/detail/dxf_to_xml__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `file_path`
#include "rosidl_runtime_c/string_functions.h"

bool
cad_convert_msgs__srv__DxfToXml_Request__init(cad_convert_msgs__srv__DxfToXml_Request * msg)
{
  if (!msg) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__init(&msg->file_path)) {
    cad_convert_msgs__srv__DxfToXml_Request__fini(msg);
    return false;
  }
  return true;
}

void
cad_convert_msgs__srv__DxfToXml_Request__fini(cad_convert_msgs__srv__DxfToXml_Request * msg)
{
  if (!msg) {
    return;
  }
  // file_path
  rosidl_runtime_c__String__fini(&msg->file_path);
}

bool
cad_convert_msgs__srv__DxfToXml_Request__are_equal(const cad_convert_msgs__srv__DxfToXml_Request * lhs, const cad_convert_msgs__srv__DxfToXml_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->file_path), &(rhs->file_path)))
  {
    return false;
  }
  return true;
}

bool
cad_convert_msgs__srv__DxfToXml_Request__copy(
  const cad_convert_msgs__srv__DxfToXml_Request * input,
  cad_convert_msgs__srv__DxfToXml_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // file_path
  if (!rosidl_runtime_c__String__copy(
      &(input->file_path), &(output->file_path)))
  {
    return false;
  }
  return true;
}

cad_convert_msgs__srv__DxfToXml_Request *
cad_convert_msgs__srv__DxfToXml_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cad_convert_msgs__srv__DxfToXml_Request * msg = (cad_convert_msgs__srv__DxfToXml_Request *)allocator.allocate(sizeof(cad_convert_msgs__srv__DxfToXml_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cad_convert_msgs__srv__DxfToXml_Request));
  bool success = cad_convert_msgs__srv__DxfToXml_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cad_convert_msgs__srv__DxfToXml_Request__destroy(cad_convert_msgs__srv__DxfToXml_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cad_convert_msgs__srv__DxfToXml_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cad_convert_msgs__srv__DxfToXml_Request__Sequence__init(cad_convert_msgs__srv__DxfToXml_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cad_convert_msgs__srv__DxfToXml_Request * data = NULL;

  if (size) {
    data = (cad_convert_msgs__srv__DxfToXml_Request *)allocator.zero_allocate(size, sizeof(cad_convert_msgs__srv__DxfToXml_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cad_convert_msgs__srv__DxfToXml_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cad_convert_msgs__srv__DxfToXml_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cad_convert_msgs__srv__DxfToXml_Request__Sequence__fini(cad_convert_msgs__srv__DxfToXml_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cad_convert_msgs__srv__DxfToXml_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cad_convert_msgs__srv__DxfToXml_Request__Sequence *
cad_convert_msgs__srv__DxfToXml_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cad_convert_msgs__srv__DxfToXml_Request__Sequence * array = (cad_convert_msgs__srv__DxfToXml_Request__Sequence *)allocator.allocate(sizeof(cad_convert_msgs__srv__DxfToXml_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cad_convert_msgs__srv__DxfToXml_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cad_convert_msgs__srv__DxfToXml_Request__Sequence__destroy(cad_convert_msgs__srv__DxfToXml_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cad_convert_msgs__srv__DxfToXml_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cad_convert_msgs__srv__DxfToXml_Request__Sequence__are_equal(const cad_convert_msgs__srv__DxfToXml_Request__Sequence * lhs, const cad_convert_msgs__srv__DxfToXml_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cad_convert_msgs__srv__DxfToXml_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cad_convert_msgs__srv__DxfToXml_Request__Sequence__copy(
  const cad_convert_msgs__srv__DxfToXml_Request__Sequence * input,
  cad_convert_msgs__srv__DxfToXml_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cad_convert_msgs__srv__DxfToXml_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cad_convert_msgs__srv__DxfToXml_Request * data =
      (cad_convert_msgs__srv__DxfToXml_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cad_convert_msgs__srv__DxfToXml_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cad_convert_msgs__srv__DxfToXml_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cad_convert_msgs__srv__DxfToXml_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `xml_output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
cad_convert_msgs__srv__DxfToXml_Response__init(cad_convert_msgs__srv__DxfToXml_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // xml_output
  if (!rosidl_runtime_c__String__init(&msg->xml_output)) {
    cad_convert_msgs__srv__DxfToXml_Response__fini(msg);
    return false;
  }
  return true;
}

void
cad_convert_msgs__srv__DxfToXml_Response__fini(cad_convert_msgs__srv__DxfToXml_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // xml_output
  rosidl_runtime_c__String__fini(&msg->xml_output);
}

bool
cad_convert_msgs__srv__DxfToXml_Response__are_equal(const cad_convert_msgs__srv__DxfToXml_Response * lhs, const cad_convert_msgs__srv__DxfToXml_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // xml_output
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->xml_output), &(rhs->xml_output)))
  {
    return false;
  }
  return true;
}

bool
cad_convert_msgs__srv__DxfToXml_Response__copy(
  const cad_convert_msgs__srv__DxfToXml_Response * input,
  cad_convert_msgs__srv__DxfToXml_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // xml_output
  if (!rosidl_runtime_c__String__copy(
      &(input->xml_output), &(output->xml_output)))
  {
    return false;
  }
  return true;
}

cad_convert_msgs__srv__DxfToXml_Response *
cad_convert_msgs__srv__DxfToXml_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cad_convert_msgs__srv__DxfToXml_Response * msg = (cad_convert_msgs__srv__DxfToXml_Response *)allocator.allocate(sizeof(cad_convert_msgs__srv__DxfToXml_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cad_convert_msgs__srv__DxfToXml_Response));
  bool success = cad_convert_msgs__srv__DxfToXml_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cad_convert_msgs__srv__DxfToXml_Response__destroy(cad_convert_msgs__srv__DxfToXml_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cad_convert_msgs__srv__DxfToXml_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cad_convert_msgs__srv__DxfToXml_Response__Sequence__init(cad_convert_msgs__srv__DxfToXml_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cad_convert_msgs__srv__DxfToXml_Response * data = NULL;

  if (size) {
    data = (cad_convert_msgs__srv__DxfToXml_Response *)allocator.zero_allocate(size, sizeof(cad_convert_msgs__srv__DxfToXml_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cad_convert_msgs__srv__DxfToXml_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cad_convert_msgs__srv__DxfToXml_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cad_convert_msgs__srv__DxfToXml_Response__Sequence__fini(cad_convert_msgs__srv__DxfToXml_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cad_convert_msgs__srv__DxfToXml_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cad_convert_msgs__srv__DxfToXml_Response__Sequence *
cad_convert_msgs__srv__DxfToXml_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cad_convert_msgs__srv__DxfToXml_Response__Sequence * array = (cad_convert_msgs__srv__DxfToXml_Response__Sequence *)allocator.allocate(sizeof(cad_convert_msgs__srv__DxfToXml_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cad_convert_msgs__srv__DxfToXml_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cad_convert_msgs__srv__DxfToXml_Response__Sequence__destroy(cad_convert_msgs__srv__DxfToXml_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cad_convert_msgs__srv__DxfToXml_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cad_convert_msgs__srv__DxfToXml_Response__Sequence__are_equal(const cad_convert_msgs__srv__DxfToXml_Response__Sequence * lhs, const cad_convert_msgs__srv__DxfToXml_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cad_convert_msgs__srv__DxfToXml_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cad_convert_msgs__srv__DxfToXml_Response__Sequence__copy(
  const cad_convert_msgs__srv__DxfToXml_Response__Sequence * input,
  cad_convert_msgs__srv__DxfToXml_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cad_convert_msgs__srv__DxfToXml_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cad_convert_msgs__srv__DxfToXml_Response * data =
      (cad_convert_msgs__srv__DxfToXml_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cad_convert_msgs__srv__DxfToXml_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cad_convert_msgs__srv__DxfToXml_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cad_convert_msgs__srv__DxfToXml_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
