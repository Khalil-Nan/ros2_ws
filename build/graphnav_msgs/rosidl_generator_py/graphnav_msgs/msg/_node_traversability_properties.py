# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeTraversabilityProperties(type):
    """Metaclass of message 'NodeTraversabilityProperties'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('graphnav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'graphnav_msgs.msg.NodeTraversabilityProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_traversability_properties
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_traversability_properties
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_traversability_properties
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_traversability_properties
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_traversability_properties

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from graphnav_msgs.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeTraversabilityProperties(metaclass=Metaclass_NodeTraversabilityProperties):
    """Message class 'NodeTraversabilityProperties'."""

    __slots__ = [
        '_is_frontier',
        '_frontier_points',
        '_explored_radius',
        '_free_radius',
        '_properties',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'is_frontier': 'boolean',
        'frontier_points': 'sequence<geometry_msgs/Point>',
        'explored_radius': 'float',
        'free_radius': 'float',
        'properties': 'sequence<graphnav_msgs/KeyValue>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graphnav_msgs', 'msg'], 'KeyValue')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.is_frontier = kwargs.get('is_frontier', bool())
        self.frontier_points = kwargs.get('frontier_points', [])
        self.explored_radius = kwargs.get('explored_radius', float())
        self.free_radius = kwargs.get('free_radius', float())
        self.properties = kwargs.get('properties', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.is_frontier != other.is_frontier:
            return False
        if self.frontier_points != other.frontier_points:
            return False
        if self.explored_radius != other.explored_radius:
            return False
        if self.free_radius != other.free_radius:
            return False
        if self.properties != other.properties:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_frontier(self):
        """Message field 'is_frontier'."""
        return self._is_frontier

    @is_frontier.setter
    def is_frontier(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_frontier' field must be of type 'bool'"
        self._is_frontier = value

    @builtins.property
    def frontier_points(self):
        """Message field 'frontier_points'."""
        return self._frontier_points

    @frontier_points.setter
    def frontier_points(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'frontier_points' field must be a set or sequence and each value of type 'Point'"
        self._frontier_points = value

    @builtins.property
    def explored_radius(self):
        """Message field 'explored_radius'."""
        return self._explored_radius

    @explored_radius.setter
    def explored_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'explored_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'explored_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._explored_radius = value

    @builtins.property
    def free_radius(self):
        """Message field 'free_radius'."""
        return self._free_radius

    @free_radius.setter
    def free_radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'free_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'free_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._free_radius = value

    @builtins.property
    def properties(self):
        """Message field 'properties'."""
        return self._properties

    @properties.setter
    def properties(self, value):
        if self._check_fields:
            from graphnav_msgs.msg import KeyValue
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'properties' field must be a set or sequence and each value of type 'KeyValue'"
        self._properties = value
