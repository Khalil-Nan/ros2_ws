// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/navigation_graph.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__BUILDER_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "graphnav_msgs/msg/detail/navigation_graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace graphnav_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationGraph_current_node_idx
{
public:
  explicit Init_NavigationGraph_current_node_idx(::graphnav_msgs::msg::NavigationGraph & msg)
  : msg_(msg)
  {}
  ::graphnav_msgs::msg::NavigationGraph current_node_idx(::graphnav_msgs::msg::NavigationGraph::_current_node_idx_type arg)
  {
    msg_.current_node_idx = std::move(arg);
    return std::move(msg_);
  }

private:
  ::graphnav_msgs::msg::NavigationGraph msg_;
};

class Init_NavigationGraph_edges
{
public:
  explicit Init_NavigationGraph_edges(::graphnav_msgs::msg::NavigationGraph & msg)
  : msg_(msg)
  {}
  Init_NavigationGraph_current_node_idx edges(::graphnav_msgs::msg::NavigationGraph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return Init_NavigationGraph_current_node_idx(msg_);
  }

private:
  ::graphnav_msgs::msg::NavigationGraph msg_;
};

class Init_NavigationGraph_nodes
{
public:
  explicit Init_NavigationGraph_nodes(::graphnav_msgs::msg::NavigationGraph & msg)
  : msg_(msg)
  {}
  Init_NavigationGraph_edges nodes(::graphnav_msgs::msg::NavigationGraph::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_NavigationGraph_edges(msg_);
  }

private:
  ::graphnav_msgs::msg::NavigationGraph msg_;
};

class Init_NavigationGraph_trav_classes
{
public:
  explicit Init_NavigationGraph_trav_classes(::graphnav_msgs::msg::NavigationGraph & msg)
  : msg_(msg)
  {}
  Init_NavigationGraph_nodes trav_classes(::graphnav_msgs::msg::NavigationGraph::_trav_classes_type arg)
  {
    msg_.trav_classes = std::move(arg);
    return Init_NavigationGraph_nodes(msg_);
  }

private:
  ::graphnav_msgs::msg::NavigationGraph msg_;
};

class Init_NavigationGraph_header
{
public:
  Init_NavigationGraph_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationGraph_trav_classes header(::graphnav_msgs::msg::NavigationGraph::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NavigationGraph_trav_classes(msg_);
  }

private:
  ::graphnav_msgs::msg::NavigationGraph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::graphnav_msgs::msg::NavigationGraph>()
{
  return graphnav_msgs::msg::builder::Init_NavigationGraph_header();
}

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__BUILDER_HPP_
