// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/navigation_graph.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__STRUCT_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'nodes'
#include "graphnav_msgs/msg/detail/node__struct.hpp"
// Member 'edges'
#include "graphnav_msgs/msg/detail/edge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graphnav_msgs__msg__NavigationGraph __attribute__((deprecated))
#else
# define DEPRECATED__graphnav_msgs__msg__NavigationGraph __declspec(deprecated)
#endif

namespace graphnav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationGraph_
{
  using Type = NavigationGraph_<ContainerAllocator>;

  explicit NavigationGraph_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_node_idx = 0ul;
    }
  }

  explicit NavigationGraph_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_node_idx = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _trav_classes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _trav_classes_type trav_classes;
  using _nodes_type =
    std::vector<graphnav_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::Node_<ContainerAllocator>>>;
  _nodes_type nodes;
  using _edges_type =
    std::vector<graphnav_msgs::msg::Edge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::Edge_<ContainerAllocator>>>;
  _edges_type edges;
  using _current_node_idx_type =
    uint32_t;
  _current_node_idx_type current_node_idx;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__trav_classes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->trav_classes = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<graphnav_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__edges(
    const std::vector<graphnav_msgs::msg::Edge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::Edge_<ContainerAllocator>>> & _arg)
  {
    this->edges = _arg;
    return *this;
  }
  Type & set__current_node_idx(
    const uint32_t & _arg)
  {
    this->current_node_idx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graphnav_msgs::msg::NavigationGraph_<ContainerAllocator> *;
  using ConstRawPtr =
    const graphnav_msgs::msg::NavigationGraph_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::NavigationGraph_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::NavigationGraph_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graphnav_msgs__msg__NavigationGraph
    std::shared_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graphnav_msgs__msg__NavigationGraph
    std::shared_ptr<graphnav_msgs::msg::NavigationGraph_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationGraph_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->trav_classes != other.trav_classes) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->edges != other.edges) {
      return false;
    }
    if (this->current_node_idx != other.current_node_idx) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationGraph_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationGraph_

// alias to use template instance with default allocator
using NavigationGraph =
  graphnav_msgs::msg::NavigationGraph_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__STRUCT_HPP_
