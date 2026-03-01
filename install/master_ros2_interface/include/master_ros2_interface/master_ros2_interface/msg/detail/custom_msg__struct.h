// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "master_ros2_interface/msg/custom_msg.h"


#ifndef MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_
#define MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomMsg in the package master_ros2_interface.
typedef struct master_ros2_interface__msg__CustomMsg
{
  rosidl_runtime_c__String data;
  int32_t number;
} master_ros2_interface__msg__CustomMsg;

// Struct for a sequence of master_ros2_interface__msg__CustomMsg.
typedef struct master_ros2_interface__msg__CustomMsg__Sequence
{
  master_ros2_interface__msg__CustomMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} master_ros2_interface__msg__CustomMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__STRUCT_H_
