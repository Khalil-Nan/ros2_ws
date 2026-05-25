// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graphnav_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/uuid.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__UUID__BUILDER_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__UUID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graphnav_msgs/msg/detail/uuid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graphnav_msgs
{

namespace msg
{

namespace builder
{

class Init_UUID_id
{
public:
  Init_UUID_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::graphnav_msgs::msg::UUID id(::graphnav_msgs::msg::UUID::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graphnav_msgs::msg::UUID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graphnav_msgs::msg::UUID>()
{
  return graphnav_msgs::msg::builder::Init_UUID_id();
}

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__UUID__BUILDER_HPP_
