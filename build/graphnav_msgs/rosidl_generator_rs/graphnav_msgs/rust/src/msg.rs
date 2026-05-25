#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to graphnav_msgs__msg__NavigationGraph

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigationGraph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trav_classes: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: Vec<super::msg::Node>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges: Vec<super::msg::Edge>,

    /// the node that the robot is currently at
    pub current_node_idx: u32,

}



impl Default for NavigationGraph {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigationGraph::default())
  }
}

impl rosidl_runtime_rs::Message for NavigationGraph {
  type RmwMsg = super::msg::rmw::NavigationGraph;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        trav_classes: msg.trav_classes
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        nodes: msg.nodes
          .into_iter()
          .map(|elem| super::msg::Node::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        edges: msg.edges
          .into_iter()
          .map(|elem| super::msg::Edge::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        current_node_idx: msg.current_node_idx,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        trav_classes: msg.trav_classes
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        nodes: msg.nodes
          .iter()
          .map(|elem| super::msg::Node::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        edges: msg.edges
          .iter()
          .map(|elem| super::msg::Edge::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      current_node_idx: msg.current_node_idx,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      trav_classes: msg.trav_classes
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      nodes: msg.nodes
          .into_iter()
          .map(super::msg::Node::from_rmw_message)
          .collect(),
      edges: msg.edges
          .into_iter()
          .map(super::msg::Edge::from_rmw_message)
          .collect(),
      current_node_idx: msg.current_node_idx,
    }
  }
}


// Corresponds to graphnav_msgs__msg__Node

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Node {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: super::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

    /// same order as NavigationGraph::trav_classes
    pub trav_properties: Vec<super::msg::NodeTraversabilityProperties>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: Vec<super::msg::KeyValue>,

}



impl Default for Node {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Node::default())
  }
}

impl rosidl_runtime_rs::Message for Node {
  type RmwMsg = super::msg::rmw::Node;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uuid: super::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.uuid)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        trav_properties: msg.trav_properties
          .into_iter()
          .map(|elem| super::msg::NodeTraversabilityProperties::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        properties: msg.properties
          .into_iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uuid: super::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.uuid)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        trav_properties: msg.trav_properties
          .iter()
          .map(|elem| super::msg::NodeTraversabilityProperties::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        properties: msg.properties
          .iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      uuid: super::msg::UUID::from_rmw_message(msg.uuid),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      trav_properties: msg.trav_properties
          .into_iter()
          .map(super::msg::NodeTraversabilityProperties::from_rmw_message)
          .collect(),
      properties: msg.properties
          .into_iter()
          .map(super::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to graphnav_msgs__msg__NodeTraversabilityProperties

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeTraversabilityProperties {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_frontier: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frontier_points: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub explored_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub free_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: Vec<super::msg::KeyValue>,

}



impl Default for NodeTraversabilityProperties {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeTraversabilityProperties::default())
  }
}

impl rosidl_runtime_rs::Message for NodeTraversabilityProperties {
  type RmwMsg = super::msg::rmw::NodeTraversabilityProperties;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_frontier: msg.is_frontier,
        frontier_points: msg.frontier_points
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        explored_radius: msg.explored_radius,
        free_radius: msg.free_radius,
        properties: msg.properties
          .into_iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_frontier: msg.is_frontier,
        frontier_points: msg.frontier_points
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      explored_radius: msg.explored_radius,
      free_radius: msg.free_radius,
        properties: msg.properties
          .iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_frontier: msg.is_frontier,
      frontier_points: msg.frontier_points
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      explored_radius: msg.explored_radius,
      free_radius: msg.free_radius,
      properties: msg.properties
          .into_iter()
          .map(super::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to graphnav_msgs__msg__Edge

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Edge {

    // This member is not documented.
    #[allow(missing_docs)]
    pub to_idx: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub from_idx: u32,

    /// same order as NavigationGraph::trav_classes
    pub traversability: Vec<super::msg::EdgeTraversability>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: Vec<super::msg::KeyValue>,

}



impl Default for Edge {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Edge::default())
  }
}

impl rosidl_runtime_rs::Message for Edge {
  type RmwMsg = super::msg::rmw::Edge;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        to_idx: msg.to_idx,
        from_idx: msg.from_idx,
        traversability: msg.traversability
          .into_iter()
          .map(|elem| super::msg::EdgeTraversability::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        properties: msg.properties
          .into_iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      to_idx: msg.to_idx,
      from_idx: msg.from_idx,
        traversability: msg.traversability
          .iter()
          .map(|elem| super::msg::EdgeTraversability::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        properties: msg.properties
          .iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      to_idx: msg.to_idx,
      from_idx: msg.from_idx,
      traversability: msg.traversability
          .into_iter()
          .map(super::msg::EdgeTraversability::from_rmw_message)
          .collect(),
      properties: msg.properties
          .into_iter()
          .map(super::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to graphnav_msgs__msg__EdgeTraversability

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EdgeTraversability {

    // This member is not documented.
    #[allow(missing_docs)]
    pub traversability_cost: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub properties: Vec<super::msg::KeyValue>,

}



impl Default for EdgeTraversability {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EdgeTraversability::default())
  }
}

impl rosidl_runtime_rs::Message for EdgeTraversability {
  type RmwMsg = super::msg::rmw::EdgeTraversability;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        traversability_cost: msg.traversability_cost,
        properties: msg.properties
          .into_iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      traversability_cost: msg.traversability_cost,
        properties: msg.properties
          .iter()
          .map(|elem| super::msg::KeyValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      traversability_cost: msg.traversability_cost,
      properties: msg.properties
          .into_iter()
          .map(super::msg::KeyValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to graphnav_msgs__msg__KeyValue

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct KeyValue {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: Vec<f32>,

}



impl Default for KeyValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::KeyValue::default())
  }
}

impl rosidl_runtime_rs::Message for KeyValue {
  type RmwMsg = super::msg::rmw::KeyValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
        value: msg.value.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
      value: msg.value
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to graphnav_msgs__msg__UUID

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UUID {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: [u8; 16],

}



impl Default for UUID {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UUID::default())
  }
}

impl rosidl_runtime_rs::Message for UUID {
  type RmwMsg = super::msg::rmw::UUID;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
    }
  }
}


