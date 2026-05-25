// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node.hpp"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uuid'
#include "graphnav_msgs/msg/detail/uuid__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'trav_properties'
#include "graphnav_msgs/msg/detail/node_traversability_properties__struct.hpp"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__graphnav_msgs__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__graphnav_msgs__msg__Node __declspec(deprecated)
#endif

namespace graphnav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _uuid_type =
    graphnav_msgs::msg::UUID_<ContainerAllocator>;
  _uuid_type uuid;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _trav_properties_type =
    std::vector<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>>;
  _trav_properties_type trav_properties;
  using _properties_type =
    std::vector<graphnav_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _properties_type properties;

  // setters for named parameter idiom
  Type & set__uuid(
    const graphnav_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__trav_properties(
    const std::vector<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<graphnav_msgs::msg::NodeTraversabilityProperties_<ContainerAllocator>>> & _arg)
  {
    this->trav_properties = _arg;
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
    graphnav_msgs::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const graphnav_msgs::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<graphnav_msgs::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<graphnav_msgs::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      graphnav_msgs::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<graphnav_msgs::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<graphnav_msgs::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<graphnav_msgs::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__graphnav_msgs__msg__Node
    std::shared_ptr<graphnav_msgs::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__graphnav_msgs__msg__Node
    std::shared_ptr<graphnav_msgs::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->trav_properties != other.trav_properties) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  graphnav_msgs::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace graphnav_msgs

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
