// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graphnav_msgs/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graphnav_msgs
{

namespace msg
{

namespace builder
{

class Init_Node_properties
{
public:
  explicit Init_Node_properties(::graphnav_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  ::graphnav_msgs::msg::Node properties(::graphnav_msgs::msg::Node::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graphnav_msgs::msg::Node msg_;
};

class Init_Node_trav_properties
{
public:
  explicit Init_Node_trav_properties(::graphnav_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_properties trav_properties(::graphnav_msgs::msg::Node::_trav_properties_type arg)
  {
    msg_.trav_properties = std::move(arg);
    return Init_Node_properties(msg_);
  }

private:
  ::graphnav_msgs::msg::Node msg_;
};

class Init_Node_pose
{
public:
  explicit Init_Node_pose(::graphnav_msgs::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_trav_properties pose(::graphnav_msgs::msg::Node::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Node_trav_properties(msg_);
  }

private:
  ::graphnav_msgs::msg::Node msg_;
};

class Init_Node_uuid
{
public:
  Init_Node_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_pose uuid(::graphnav_msgs::msg::Node::_uuid_type arg)
  {
    msg_.uuid = std::move(arg);
    return Init_Node_pose(msg_);
  }

private:
  ::graphnav_msgs::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graphnav_msgs::msg::Node>()
{
  return graphnav_msgs::msg::builder::Init_Node_uuid();
}

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE__BUILDER_HPP_
