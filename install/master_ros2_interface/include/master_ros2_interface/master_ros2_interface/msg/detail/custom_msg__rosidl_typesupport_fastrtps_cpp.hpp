// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "master_ros2_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "master_ros2_interface/msg/detail/custom_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace master_ros2_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
cdr_serialize(
  const master_ros2_interface::msg::CustomMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  master_ros2_interface::msg::CustomMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
get_serialized_size(
  const master_ros2_interface::msg::CustomMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
max_serialized_size_CustomMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
cdr_serialize_key(
  const master_ros2_interface::msg::CustomMsg & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
get_serialized_size_key(
  const master_ros2_interface::msg::CustomMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
max_serialized_size_key_CustomMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace master_ros2_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_master_ros2_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, master_ros2_interface, msg, CustomMsg)();

#ifdef __cplusplus
}
#endif

#endif  // MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
