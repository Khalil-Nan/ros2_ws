// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from graphnav_msgs:msg/EdgeTraversability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge_traversability.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__TRAITS_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "graphnav_msgs/msg/detail/edge_traversability__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__traits.hpp"

namespace graphnav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EdgeTraversability & msg,
  std::ostream & out)
{
  out << "{";
  // member: traversability_cost
  {
    out << "traversability_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.traversability_cost, out);
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
  const EdgeTraversability & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traversability_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traversability_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.traversability_cost, out);
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

inline std::string to_yaml(const EdgeTraversability & msg, bool use_flow_style = false)
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
  const graphnav_msgs::msg::EdgeTraversability & msg,
  std::ostream & out, size_t indentation = 0)
{
  graphnav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use graphnav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const graphnav_msgs::msg::EdgeTraversability & msg)
{
  return graphnav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<graphnav_msgs::msg::EdgeTraversability>()
{
  return "graphnav_msgs::msg::EdgeTraversability";
}

template<>
inline const char * name<graphnav_msgs::msg::EdgeTraversability>()
{
  return "graphnav_msgs/msg/EdgeTraversability";
}

template<>
struct has_fixed_size<graphnav_msgs::msg::EdgeTraversability>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<graphnav_msgs::msg::EdgeTraversability>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<graphnav_msgs::msg::EdgeTraversability>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__TRAITS_HPP_
