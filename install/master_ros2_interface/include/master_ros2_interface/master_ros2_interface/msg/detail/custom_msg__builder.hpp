// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "master_ros2_interface/msg/custom_msg.hpp"


#ifndef MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
#define MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "master_ros2_interface/msg/detail/custom_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace master_ros2_interface
{

namespace msg
{

namespace builder
{

class Init_CustomMsg_number
{
public:
  explicit Init_CustomMsg_number(::master_ros2_interface::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  ::master_ros2_interface::msg::CustomMsg number(::master_ros2_interface::msg::CustomMsg::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::master_ros2_interface::msg::CustomMsg msg_;
};

class Init_CustomMsg_data
{
public:
  Init_CustomMsg_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMsg_number data(::master_ros2_interface::msg::CustomMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CustomMsg_number(msg_);
  }

private:
  ::master_ros2_interface::msg::CustomMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::master_ros2_interface::msg::CustomMsg>()
{
  return master_ros2_interface::msg::builder::Init_CustomMsg_data();
}

}  // namespace master_ros2_interface

#endif  // MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
