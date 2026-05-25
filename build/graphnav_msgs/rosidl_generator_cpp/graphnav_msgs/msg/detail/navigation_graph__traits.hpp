// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/navigation_graph.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__TRAITS_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graphnav_msgs/msg/detail/navigation_graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'nodes'
#include "graphnav_msgs/msg/detail/node__traits.hpp"
// Member 'edges'
#include "graphnav_msgs/msg/detail/edge__traits.hpp"

namespace graphnav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigationGraph & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: trav_classes
  {
    if (msg.trav_classes.size() == 0) {
      out << "trav_classes: []";
    } else {
      out << "trav_classes: [";
      size_t pending_items = msg.trav_classes.size();
      for (auto item : msg.trav_classes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edges
  {
    if (msg.edges.size() == 0) {
      out << "edges: []";
    } else {
      out << "edges: [";
      size_t pending_items = msg.edges.size();
      for (auto item : msg.edges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_node_idx
  {
    out << "current_node_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.current_node_idx, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigationGraph & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: trav_classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trav_classes.size() == 0) {
      out << "trav_classes: []\n";
    } else {
      out << "trav_classes:\n";
      for (auto item : msg.trav_classes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edges.size() == 0) {
      out << "edges: []\n";
    } else {
      out << "edges:\n";
      for (auto item : msg.edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: current_node_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_node_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.current_node_idx, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigationGraph & msg, bool use_flow_style = false)
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

}  // namespace graphnav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use graphnav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const graphnav_msgs::msg::NavigationGraph & msg,
  std::ostream & out, size_t indentation = 0)
{
  graphnav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graphnav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graphnav_msgs::msg::NavigationGraph & msg)
{
  return graphnav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graphnav_msgs::msg::NavigationGraph>()
{
  return "graphnav_msgs::msg::NavigationGraph";
}

template<>
inline const char * name<graphnav_msgs::msg::NavigationGraph>()
{
  return "graphnav_msgs/msg/NavigationGraph";
}

template<>
struct has_fixed_size<graphnav_msgs::msg::NavigationGraph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graphnav_msgs::msg::NavigationGraph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graphnav_msgs::msg::NavigationGraph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__TRAITS_HPP_
