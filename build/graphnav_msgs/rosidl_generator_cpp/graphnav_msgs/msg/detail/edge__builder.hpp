// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graphnav_msgs/msg/detail/edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graphnav_msgs
{

namespace msg
{

namespace builder
{

class Init_Edge_properties
{
public:
  explicit Init_Edge_properties(::graphnav_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  ::graphnav_msgs::msg::Edge properties(::graphnav_msgs::msg::Edge::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graphnav_msgs::msg::Edge msg_;
};

class Init_Edge_traversability
{
public:
  explicit Init_Edge_traversability(::graphnav_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_properties traversability(::graphnav_msgs::msg::Edge::_traversability_type arg)
  {
    msg_.traversability = std::move(arg);
    return Init_Edge_properties(msg_);
  }

private:
  ::graphnav_msgs::msg::Edge msg_;
};

class Init_Edge_from_idx
{
public:
  explicit Init_Edge_from_idx(::graphnav_msgs::msg::Edge & msg)
  : msg_(msg)
  {}
  Init_Edge_traversability from_idx(::graphnav_msgs::msg::Edge::_from_idx_type arg)
  {
    msg_.from_idx = std::move(arg);
    return Init_Edge_traversability(msg_);
  }

private:
  ::graphnav_msgs::msg::Edge msg_;
};

class Init_Edge_to_idx
{
public:
  Init_Edge_to_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Edge_from_idx to_idx(::graphnav_msgs::msg::Edge::_to_idx_type arg)
  {
    msg_.to_idx = std::move(arg);
    return Init_Edge_from_idx(msg_);
  }

private:
  ::graphnav_msgs::msg::Edge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graphnav_msgs::msg::Edge>()
{
  return graphnav_msgs::msg::builder::Init_Edge_to_idx();
}

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE__BUILDER_HPP_
