// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE__TRAITS_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graphnav_msgs/msg/detail/edge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'traversability'
#include "graphnav_msgs/msg/detail/edge_traversability__traits.hpp"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__traits.hpp"

namespace graphnav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Edge & msg,
  std::ostream & out)
{
  out << "{";
  // member: to_idx
  {
    out << "to_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.to_idx, out);
    out << ", ";
  }

  // member: from_idx
  {
    out << "from_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.from_idx, out);
    out << ", ";
  }

  // member: traversability
  {
    if (msg.traversability.size() == 0) {
      out << "traversability: []";
    } else {
      out << "traversability: [";
      size_t pending_items = msg.traversability.size();
      for (auto item : msg.traversability) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Edge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: to_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "to_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.to_idx, out);
    out << "\n";
  }

  // member: from_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.from_idx, out);
    out << "\n";
  }

  // member: traversability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traversability.size() == 0) {
      out << "traversability: []\n";
    } else {
      out << "traversability:\n";
      for (auto item : msg.traversability) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Edge & msg, bool use_flow_style = false)
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
  const graphnav_msgs::msg::Edge & msg,
  std::ostream & out, size_t indentation = 0)
{
  graphnav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graphnav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graphnav_msgs::msg::Edge & msg)
{
  return graphnav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graphnav_msgs::msg::Edge>()
{
  return "graphnav_msgs::msg::Edge";
}

template<>
inline const char * name<graphnav_msgs::msg::Edge>()
{
  return "graphnav_msgs/msg/Edge";
}

template<>
struct has_fixed_size<graphnav_msgs::msg::Edge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graphnav_msgs::msg::Edge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graphnav_msgs::msg::Edge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE__TRAITS_HPP_
