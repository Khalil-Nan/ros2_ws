// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graphnav_msgs:msg/EdgeTraversability.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge_traversability.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__STRUCT_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graphnav_msgs__msg__EdgeTraversability __attribute__((deprecated))
#else
# define DEPRECATED__graphnav_msgs__msg__EdgeTraversability __declspec(deprecated)
#endif

namespace graphnav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeTraversability_
{
  using Type = EdgeTraversability_<ContainerAllocator>;

  explicit EdgeTraversability_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traversability_cost = 0.0f;
    }
  }

  explicit EdgeTraversability_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traversability_cost = 0.0f;
    }
  }

  // field types and members
  using _traversability_cost_type =
    float;
  _traversability_cost_type traversability_cost;
  using _properties_type =
    std::vector<graphnav_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__traversability_cost(
    const float & _arg)
  {
    this->traversability_cost = _arg;
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
    graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator> *;
  using ConstRawPtr =
    const graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graphnav_msgs__msg__EdgeTraversability
    std::shared_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graphnav_msgs__msg__EdgeTraversability
    std::shared_ptr<graphnav_msgs::msg::EdgeTraversability_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeTraversability_ & other) const
  {
    if (this->traversability_cost != other.traversability_cost) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeTraversability_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeTraversability_

// alias to use template instance with default allocator
using EdgeTraversability =
  graphnav_msgs::msg::EdgeTraversability_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE_TRAVERSABILITY__STRUCT_HPP_
