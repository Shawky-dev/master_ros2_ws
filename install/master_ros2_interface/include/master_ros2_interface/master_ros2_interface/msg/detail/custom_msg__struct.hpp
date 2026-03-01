// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "master_ros2_interface/msg/custom_msg.hpp"


#ifndef MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
#define MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__master_ros2_interface__msg__CustomMsg __attribute__((deprecated))
#else
# define DEPRECATED__master_ros2_interface__msg__CustomMsg __declspec(deprecated)
#endif

namespace master_ros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMsg_
{
  using Type = CustomMsg_<ContainerAllocator>;

  explicit CustomMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->number = 0l;
    }
  }

  explicit CustomMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->number = 0l;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _data_type data;
  using _number_type =
    int32_t;
  _number_type number;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__number(
    const int32_t & _arg)
  {
    this->number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    master_ros2_interface::msg::CustomMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const master_ros2_interface::msg::CustomMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      master_ros2_interface::msg::CustomMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      master_ros2_interface::msg::CustomMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__master_ros2_interface__msg__CustomMsg
    std::shared_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__master_ros2_interface__msg__CustomMsg
    std::shared_ptr<master_ros2_interface::msg::CustomMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMsg_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMsg_

// alias to use template instance with default allocator
using CustomMsg =
  master_ros2_interface::msg::CustomMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace master_ros2_interface

#endif  // MASTER_ROS2_INTERFACE__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
