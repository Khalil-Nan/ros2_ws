// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node_traversability_properties.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__TRAITS_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graphnav_msgs/msg/detail/node_traversability_properties__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'frontier_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__traits.hpp"

namespace graphnav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeTraversabilityProperties & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_frontier
  {
    out << "is_frontier: ";
    rosidl_generator_traits::value_to_yaml(msg.is_frontier, out);
    out << ", ";
  }

  // member: frontier_points
  {
    if (msg.frontier_points.size() == 0) {
      out << "frontier_points: []";
    } else {
      out << "frontier_points: [";
      size_t pending_items = msg.frontier_points.size();
      for (auto item : msg.frontier_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: explored_radius
  {
    out << "explored_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.explored_radius, out);
    out << ", ";
  }

  // member: free_radius
  {
    out << "free_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.free_radius, out);
    out << ", ";
  }

  // member: properties
  {
    if (msg.properties.size() == 0) {
      out << "properties: []";
    } else {
      out << "properties: [";
      size_t pending_items = msg.properties.size();
      for (auto item : msg.properties) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeTraversabilityProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_frontier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_frontier: ";
    rosidl_generator_traits::value_to_yaml(msg.is_frontier, out);
    out << "\n";
  }

  // member: frontier_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frontier_points.size() == 0) {
      out << "frontier_points: []\n";
    } else {
      out << "frontier_points:\n";
      for (auto item : msg.frontier_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: explored_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "explored_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.explored_radius, out);
    out << "\n";
  }

  // member: free_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.free_radius, out);
    out << "\n";
  }

  // member: properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.properties.size() == 0) {
      out << "properties: []\n";
    } else {
      out << "properties:\n";
      for (auto item : msg.properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeTraversabilityProperties & msg, bool use_flow_style = false)
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
  const graphnav_msgs::msg::NodeTraversabilityProperties & msg,
  std::ostream & out, size_t indentation = 0)
{
  graphnav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graphnav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graphnav_msgs::msg::NodeTraversabilityProperties & msg)
{
  return graphnav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graphnav_msgs::msg::NodeTraversabilityProperties>()
{
  return "graphnav_msgs::msg::NodeTraversabilityProperties";
}

template<>
inline const char * name<graphnav_msgs::msg::NodeTraversabilityProperties>()
{
  return "graphnav_msgs/msg/NodeTraversabilityProperties";
}

template<>
struct has_fixed_size<graphnav_msgs::msg::NodeTraversabilityProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graphnav_msgs::msg::NodeTraversabilityProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graphnav_msgs::msg::NodeTraversabilityProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__TRAITS_HPP_
