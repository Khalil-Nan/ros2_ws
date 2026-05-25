// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graphnav_msgs:msg/EdgeTraversability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge_traversability.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__BUILDER_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graphnav_msgs/msg/detail/edge_traversability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graphnav_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeTraversability_properties
{
public:
  explicit Init_EdgeTraversability_properties(::graphnav_msgs::msg::EdgeTraversability & msg)
  : msg_(msg)
  {}
  ::graphnav_msgs::msg::EdgeTraversability properties(::graphnav_msgs::msg::EdgeTraversability::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graphnav_msgs::msg::EdgeTraversability msg_;
};

class Init_EdgeTraversability_traversability_cost
{
public:
  Init_EdgeTraversability_traversability_cost()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeTraversability_properties traversability_cost(::graphnav_msgs::msg::EdgeTraversability::_traversability_cost_type arg)
  {
    msg_.traversability_cost = std::move(arg);
    return Init_EdgeTraversability_properties(msg_);
  }

private:
  ::graphnav_msgs::msg::EdgeTraversability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graphnav_msgs::msg::EdgeTraversability>()
{
  return graphnav_msgs::msg::builder::Init_EdgeTraversability_traversability_cost();
}

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__BUILDER_HPP_
