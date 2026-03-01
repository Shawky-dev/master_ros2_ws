// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "master_ros2_interface/msg/custom_msg.hpp"


#ifndef MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
#define MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "master_ros2_interface/msg/detail/custom_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace master_ros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << ", ";
  }

  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace master_ros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use master_ros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const master_ros2_interface::msg::CustomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  master_ros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use master_ros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const master_ros2_interface::msg::CustomMsg & msg)
{
  return master_ros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<master_ros2_interface::msg::CustomMsg>()
{
  return "master_ros2_interface::msg::CustomMsg";
}

template<>
inline const char * name<master_ros2_interface::msg::CustomMsg>()
{
  return "master_ros2_interface/msg/CustomMsg";
}

template<>
struct has_fixed_size<master_ros2_interface::msg::CustomMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<master_ros2_interface::msg::CustomMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<master_ros2_interface::msg::CustomMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
