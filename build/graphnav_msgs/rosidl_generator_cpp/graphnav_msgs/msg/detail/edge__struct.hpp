// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'traversability'
#include "graphnav_msgs/msg/detail/edge_traversability__struct.hpp"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graphnav_msgs__msg__Edge __attribute__((deprecated))
#else
# define DEPRECATED__graphnav_msgs__msg__Edge __declspec(deprecated)
#endif

namespace graphnav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Edge_
{
  using Type = Edge_<ContainerAllocator>;

  explicit Edge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->to_idx = 0ul;
      this->from_idx = 0ul;
    }
  }

  explicit Edge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->to_idx = 0ul;
      this->from_idx = 0ul;
    }
  }

  // field types and members
  using _to_idx_type =
    uint32_t;
  _to_idx_type to_idx;
  using _from_idx_type =
    uint32_t;
  _from_idx_type from_idx;
  using _traversability_type =
    std::vector<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>>;
  _traversability_type traversability;
  using _properties_type =
    std::vector<graphnav_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__to_idx(
    const uint32_t & _arg)
  {
    this->to_idx = _arg;
    return *this;
  }
  Type & set__from_idx(
    const uint32_t & _arg)
  {
    this->from_idx = _arg;
    return *this;
  }
  Type & set__traversability(
    const std::vector<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>> & _arg)
  {
    this->traversability = _arg;
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
    graphnav_msgs::msg::Edge_<ContainerAllocator> *;
  using ConstRawPtr =
    const graphnav_msgs::msg::Edge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::Edge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::Edge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graphnav_msgs__msg__Edge
    std::shared_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graphnav_msgs__msg__Edge
    std::shared_ptr<graphnav_msgs::msg::Edge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Edge_ & other) const
  {
    if (this->to_idx != other.to_idx) {
      return false;
    }
    if (this->from_idx != other.from_idx) {
      return false;
    }
    if (this->traversability != other.traversability) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Edge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Edge_

// alias to use template instance with default allocator
using Edge =
  graphnav_msgs::msg::Edge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE__STRUCT_HPP_
