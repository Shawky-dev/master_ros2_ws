// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice
#include "master_ros2_interface/msg/detail/custom_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/string_functions.h"

bool
master_ros2_interface__msg__CustomMsg__init(master_ros2_interface__msg__CustomMsg * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__init(&msg->data)) {
    master_ros2_interface__msg__CustomMsg__fini(msg);
    return false;
  }
  // number
  return true;
}

void
master_ros2_interface__msg__CustomMsg__fini(master_ros2_interface__msg__CustomMsg * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__String__fini(&msg->data);
  // number
}

bool
master_ros2_interface__msg__CustomMsg__are_equal(const master_ros2_interface__msg__CustomMsg * lhs, const master_ros2_interface__msg__CustomMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
master_ros2_interface__msg__CustomMsg__copy(
  const master_ros2_interface__msg__CustomMsg * input,
  master_ros2_interface__msg__CustomMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__String__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

master_ros2_interface__msg__CustomMsg *
master_ros2_interface__msg__CustomMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  master_ros2_interface__msg__CustomMsg * msg = (master_ros2_interface__msg__CustomMsg *)allocator.allocate(sizeof(master_ros2_interface__msg__CustomMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(master_ros2_interface__msg__CustomMsg));
  bool success = master_ros2_interface__msg__CustomMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
master_ros2_interface__msg__CustomMsg__destroy(master_ros2_interface__msg__CustomMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    master_ros2_interface__msg__CustomMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
master_ros2_interface__msg__CustomMsg__Sequence__init(master_ros2_interface__msg__CustomMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  master_ros2_interface__msg__CustomMsg * data = NULL;

  if (size) {
    data = (master_ros2_interface__msg__CustomMsg *)allocator.zero_allocate(size, sizeof(master_ros2_interface__msg__CustomMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = master_ros2_interface__msg__CustomMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        master_ros2_interface__msg__CustomMsg__fini(&data[i - 1]);
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
master_ros2_interface__msg__CustomMsg__Sequence__fini(master_ros2_interface__msg__CustomMsg__Sequence * array)
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
      master_ros2_interface__msg__CustomMsg__fini(&array->data[i]);
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

master_ros2_interface__msg__CustomMsg__Sequence *
master_ros2_interface__msg__CustomMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  master_ros2_interface__msg__CustomMsg__Sequence * array = (master_ros2_interface__msg__CustomMsg__Sequence *)allocator.allocate(sizeof(master_ros2_interface__msg__CustomMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = master_ros2_interface__msg__CustomMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
master_ros2_interface__msg__CustomMsg__Sequence__destroy(master_ros2_interface__msg__CustomMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    master_ros2_interface__msg__CustomMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
master_ros2_interface__msg__CustomMsg__Sequence__are_equal(const master_ros2_interface__msg__CustomMsg__Sequence * lhs, const master_ros2_interface__msg__CustomMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!master_ros2_interface__msg__CustomMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
master_ros2_interface__msg__CustomMsg__Sequence__copy(
  const master_ros2_interface__msg__CustomMsg__Sequence * input,
  master_ros2_interface__msg__CustomMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(master_ros2_interface__msg__CustomMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    master_ros2_interface__msg__CustomMsg * data =
      (master_ros2_interface__msg__CustomMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!master_ros2_interface__msg__CustomMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          master_ros2_interface__msg__CustomMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!master_ros2_interface__msg__CustomMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
