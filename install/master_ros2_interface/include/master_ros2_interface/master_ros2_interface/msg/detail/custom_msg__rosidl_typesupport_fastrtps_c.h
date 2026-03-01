// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice
#ifndef MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "master_ros2_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "master_ros2_interface/msg/detail/custom_msg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
bool cdr_serialize_master_ros2_interface__msg__CustomMsg(
  const master_ros2_interface__msg__CustomMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
bool cdr_deserialize_master_ros2_interface__msg__CustomMsg(
  eprosima::fastcdr::Cdr &,
  master_ros2_interface__msg__CustomMsg * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
size_t get_serialized_size_master_ros2_interface__msg__CustomMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
size_t max_serialized_size_master_ros2_interface__msg__CustomMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
bool cdr_serialize_key_master_ros2_interface__msg__CustomMsg(
  const master_ros2_interface__msg__CustomMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
size_t get_serialized_size_key_master_ros2_interface__msg__CustomMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
size_t max_serialized_size_key_master_ros2_interface__msg__CustomMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_master_ros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, master_ros2_interface, msg, CustomMsg)();

#ifdef __cplusplus
}
#endif

#endif  // MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
