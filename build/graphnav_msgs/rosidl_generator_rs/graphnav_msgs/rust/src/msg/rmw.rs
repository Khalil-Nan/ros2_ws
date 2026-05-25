#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__NavigationGraph() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__NavigationGraph__init(msg: *mut NavigationGraph) -> bool;
    fn graphnav_msgs__msg__NavigationGraph__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigationGraph>, size: usize) -> bool;
    fn graphnav_msgs__msg__NavigationGraph__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigationGraph>);
    fn graphnav_msgs__msg__NavigationGraph__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigationGraph>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigationGraph>) -> bool;
}

// Corresponds to graphnav_msgs__msg__NavigationGraph
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationGraph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trav_classes: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Node>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Edge>,

    /// the node that the robot is currently at
    pub current_node_idx: u32,

}



impl Default for NavigationGraph {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__NavigationGraph__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__NavigationGraph__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigationGraph {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__NavigationGraph__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__NavigationGraph__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__NavigationGraph__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigationGraph {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigationGraph where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/NavigationGraph";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__NavigationGraph() }
  }
}


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__Node() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__Node__init(msg: *mut Node) -> bool;
    fn graphnav_msgs__msg__Node__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Node>, size: usize) -> bool;
    fn graphnav_msgs__msg__Node__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Node>);
    fn graphnav_msgs__msg__Node__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Node>, out_seq: *mut rosidl_runtime_rs::Sequence<Node>) -> bool;
}

// Corresponds to graphnav_msgs__msg__Node
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Node {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: super::super::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

    /// same order as NavigationGraph::trav_classes
    pub trav_properties: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NodeTraversabilityProperties>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KeyValue>,

}



impl Default for Node {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__Node__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__Node__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Node {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__Node__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__Node__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__Node__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Node {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Node where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/Node";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__Node() }
  }
}


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__NodeTraversabilityProperties() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__NodeTraversabilityProperties__init(msg: *mut NodeTraversabilityProperties) -> bool;
    fn graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeTraversabilityProperties>, size: usize) -> bool;
    fn graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeTraversabilityProperties>);
    fn graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeTraversabilityProperties>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeTraversabilityProperties>) -> bool;
}

// Corresponds to graphnav_msgs__msg__NodeTraversabilityProperties
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeTraversabilityProperties {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_frontier: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frontier_points: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub explored_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub free_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KeyValue>,

}



impl Default for NodeTraversabilityProperties {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__NodeTraversabilityProperties__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__NodeTraversabilityProperties__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeTraversabilityProperties {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeTraversabilityProperties {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeTraversabilityProperties where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/NodeTraversabilityProperties";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__NodeTraversabilityProperties() }
  }
}


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__Edge() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__Edge__init(msg: *mut Edge) -> bool;
    fn graphnav_msgs__msg__Edge__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Edge>, size: usize) -> bool;
    fn graphnav_msgs__msg__Edge__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Edge>);
    fn graphnav_msgs__msg__Edge__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Edge>, out_seq: *mut rosidl_runtime_rs::Sequence<Edge>) -> bool;
}

// Corresponds to graphnav_msgs__msg__Edge
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Edge {

    // This member is not documented.
    #[allow(missing_docs)]
    pub to_idx: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub from_idx: u32,

    /// same order as NavigationGraph::trav_classes
    pub traversability: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EdgeTraversability>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KeyValue>,

}



impl Default for Edge {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__Edge__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__Edge__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Edge {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__Edge__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__Edge__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__Edge__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Edge {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Edge where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/Edge";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__Edge() }
  }
}


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__EdgeTraversability() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__EdgeTraversability__init(msg: *mut EdgeTraversability) -> bool;
    fn graphnav_msgs__msg__EdgeTraversability__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EdgeTraversability>, size: usize) -> bool;
    fn graphnav_msgs__msg__EdgeTraversability__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EdgeTraversability>);
    fn graphnav_msgs__msg__EdgeTraversability__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EdgeTraversability>, out_seq: *mut rosidl_runtime_rs::Sequence<EdgeTraversability>) -> bool;
}

// Corresponds to graphnav_msgs__msg__EdgeTraversability
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EdgeTraversability {

    // This member is not documented.
    #[allow(missing_docs)]
    pub traversability_cost: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: rosidl_runtime_rs::Sequence<super::super::msg::rmw::KeyValue>,

}



impl Default for EdgeTraversability {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__EdgeTraversability__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__EdgeTraversability__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EdgeTraversability {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__EdgeTraversability__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__EdgeTraversability__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__EdgeTraversability__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EdgeTraversability {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EdgeTraversability where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/EdgeTraversability";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__EdgeTraversability() }
  }
}


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__KeyValue() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__KeyValue__init(msg: *mut KeyValue) -> bool;
    fn graphnav_msgs__msg__KeyValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<KeyValue>, size: usize) -> bool;
    fn graphnav_msgs__msg__KeyValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<KeyValue>);
    fn graphnav_msgs__msg__KeyValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<KeyValue>, out_seq: *mut rosidl_runtime_rs::Sequence<KeyValue>) -> bool;
}

// Corresponds to graphnav_msgs__msg__KeyValue
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for KeyValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__KeyValue__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__KeyValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for KeyValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__KeyValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__KeyValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__KeyValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for KeyValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for KeyValue where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/KeyValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__KeyValue() }
  }
}


#[link(name = "graphnav_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__UUID() -> *const std::ffi::c_void;
}

#[link(name = "graphnav_msgs__rosidl_generator_c")]
extern "C" {
    fn graphnav_msgs__msg__UUID__init(msg: *mut UUID) -> bool;
    fn graphnav_msgs__msg__UUID__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UUID>, size: usize) -> bool;
    fn graphnav_msgs__msg__UUID__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UUID>);
    fn graphnav_msgs__msg__UUID__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UUID>, out_seq: *mut rosidl_runtime_rs::Sequence<UUID>) -> bool;
}

// Corresponds to graphnav_msgs__msg__UUID
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UUID {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: [u8; 16],

}



impl Default for UUID {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !graphnav_msgs__msg__UUID__init(&mut msg as *mut _) {
        panic!("Call to graphnav_msgs__msg__UUID__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UUID {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__UUID__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__UUID__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { graphnav_msgs__msg__UUID__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UUID {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UUID where Self: Sized {
  const TYPE_NAME: &'static str = "graphnav_msgs/msg/UUID";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__graphnav_msgs__msg__UUID() }
  }
}


