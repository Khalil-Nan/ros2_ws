// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node_traversability_properties.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__BUILDER_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graphnav_msgs/msg/detail/node_traversability_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graphnav_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeTraversabilityProperties_properties
{
public:
  explicit Init_NodeTraversabilityProperties_properties(::graphnav_msgs::msg::NodeTraversabilityProperties & msg)
  : msg_(msg)
  {}
  ::graphnav_msgs::msg::NodeTraversabilityProperties properties(::graphnav_msgs::msg::NodeTraversabilityProperties::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graphnav_msgs::msg::NodeTraversabilityProperties msg_;
};

class Init_NodeTraversabilityProperties_free_radius
{
public:
  explicit Init_NodeTraversabilityProperties_free_radius(::graphnav_msgs::msg::NodeTraversabilityProperties & msg)
  : msg_(msg)
  {}
  Init_NodeTraversabilityProperties_properties free_radius(::graphnav_msgs::msg::NodeTraversabilityProperties::_free_radius_type arg)
  {
    msg_.free_radius = std::move(arg);
    return Init_NodeTraversabilityProperties_properties(msg_);
  }

private:
  ::graphnav_msgs::msg::NodeTraversabilityProperties msg_;
};

class Init_NodeTraversabilityProperties_explored_radius
{
public:
  explicit Init_NodeTraversabilityProperties_explored_radius(::graphnav_msgs::msg::NodeTraversabilityProperties & msg)
  : msg_(msg)
  {}
  Init_NodeTraversabilityProperties_free_radius explored_radius(::graphnav_msgs::msg::NodeTraversabilityProperties::_explored_radius_type arg)
  {
    msg_.explored_radius = std::move(arg);
    return Init_NodeTraversabilityProperties_free_radius(msg_);
  }

private:
  ::graphnav_msgs::msg::NodeTraversabilityProperties msg_;
};

class Init_NodeTraversabilityProperties_frontier_points
{
public:
  explicit Init_NodeTraversabilityProperties_frontier_points(::graphnav_msgs::msg::NodeTraversabilityProperties & msg)
  : msg_(msg)
  {}
  Init_NodeTraversabilityProperties_explored_radius frontier_points(::graphnav_msgs::msg::NodeTraversabilityProperties::_frontier_points_type arg)
  {
    msg_.frontier_points = std::move(arg);
    return Init_NodeTraversabilityProperties_explored_radius(msg_);
  }

private:
  ::graphnav_msgs::msg::NodeTraversabilityProperties msg_;
};

class Init_NodeTraversabilityProperties_is_frontier
{
public:
  Init_NodeTraversabilityProperties_is_frontier()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeTraversabilityProperties_frontier_points is_frontier(::graphnav_msgs::msg::NodeTraversabilityProperties::_is_frontier_type arg)
  {
    msg_.is_frontier = std::move(arg);
    return Init_NodeTraversabilityProperties_frontier_points(msg_);
  }

private:
  ::graphnav_msgs::msg::NodeTraversabilityProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graphnav_msgs::msg::NodeTraversabilityProperties>()
{
  return graphnav_msgs::msg::builder::Init_NodeTraversabilityProperties_is_frontier();
}

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__BUILDER_HPP_
