// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node_traversability_properties.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__STRUCT_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frontier_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graphnav_msgs__msg__NodeTraversabilityProperties __attribute__((deprecated))
#else
# define DEPRECATED__graphnav_msgs__msg__NodeTraversabilityProperties __declspec(deprecated)
#endif

namespace graphnav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeTraversabilityProperties_
{
  using Type = NodeTraversabilityProperties_<ContainerAllocator>;

  explicit NodeTraversabilityProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_frontier = false;
      this->explored_radius = 0.0f;
      this->free_radius = 0.0f;
    }
  }

  explicit NodeTraversabilityProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_frontier = false;
      this->explored_radius = 0.0f;
      this->free_radius = 0.0f;
    }
  }

  // field types and members
  using _is_frontier_type =
    bool;
  _is_frontier_type is_frontier;
  using _frontier_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _frontier_points_type frontier_points;
  using _explored_radius_type =
    float;
  _explored_radius_type explored_radius;
  using _free_radius_type =
    float;
  _free_radius_type free_radius;
  using _properties_type =
    std::vector<graphnav_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__is_frontier(
    const bool & _arg)
  {
    this->is_frontier = _arg;
    return *this;
  }
  Type & set__frontier_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->frontier_points = _arg;
    return *this;
  }
  Type & set__explored_radius(
    const float & _arg)
  {
    this->explored_radius = _arg;
    return *this;
  }
  Type & set__free_radius(
    const float & _arg)
  {
    this->free_radius = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<graphnav_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->properties = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graphnav_msgs__msg__NodeTraversabilityProperties
    std::shared_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graphnav_msgs__msg__NodeTraversabilityProperties
    std::shared_ptr<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeTraversabilityProperties_ & other) const
  {
    if (this->is_frontier != other.is_frontier) {
      return false;
    }
    if (this->frontier_points != other.frontier_points) {
      return false;
    }
    if (this->explored_radius != other.explored_radius) {
      return false;
    }
    if (this->free_radius != other.free_radius) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeTraversabilityProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeTraversabilityProperties_

// alias to use template instance with default allocator
using NodeTraversabilityProperties =
  graphnav_msgs::msg::NodeTraversabilityProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__STRUCT_HPP_
