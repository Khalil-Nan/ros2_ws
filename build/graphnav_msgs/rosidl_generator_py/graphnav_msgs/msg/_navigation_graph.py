# generated from rosidl_generator_py/resource/_idl.py.em
# with input from graphnav_msgs:msg/NavigationGraph.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationGraph(type):
    """Metaclass of message 'NavigationGraph'."""

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
                'graphnav_msgs.msg.NavigationGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_graph
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_graph
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_graph
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_graph
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_graph

            from graphnav_msgs.msg import Edge
            if Edge.__class__._TYPE_SUPPORT is None:
                Edge.__class__.__import_type_support__()

            from graphnav_msgs.msg import Node
            if Node.__class__._TYPE_SUPPORT is None:
                Node.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigationGraph(metaclass=Metaclass_NavigationGraph):
    """Message class 'NavigationGraph'."""

    __slots__ = [
        '_header',
        '_trav_classes',
        '_nodes',
        '_edges',
        '_current_node_idx',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'trav_classes': 'sequence<string>',
        'nodes': 'sequence<graphnav_msgs/Node>',
        'edges': 'sequence<graphnav_msgs/Edge>',
        'current_node_idx': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graphnav_msgs', 'msg'], 'Node')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['graphnav_msgs', 'msg'], 'Edge')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.trav_classes = kwargs.get('trav_classes', [])
        self.nodes = kwargs.get('nodes', [])
        self.edges = kwargs.get('edges', [])
        self.current_node_idx = kwargs.get('current_node_idx', int())

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
        if self.header != other.header:
            return False
        if self.trav_classes != other.trav_classes:
            return False
        if self.nodes != other.nodes:
            return False
        if self.edges != other.edges:
            return False
        if self.current_node_idx != other.current_node_idx:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def trav_classes(self):
        """Message field 'trav_classes'."""
        return self._trav_classes

    @trav_classes.setter
    def trav_classes(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'trav_classes' field must be a set or sequence and each value of type 'str'"
        self._trav_classes = value

    @builtins.property
    def nodes(self):
        """Message field 'nodes'."""
        return self._nodes

    @nodes.setter
    def nodes(self, value):
        if self._check_fields:
            from graphnav_msgs.msg import Node
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
                 all(isinstance(v, Node) for v in value) and
                 True), \
                "The 'nodes' field must be a set or sequence and each value of type 'Node'"
        self._nodes = value

    @builtins.property
    def edges(self):
        """Message field 'edges'."""
        return self._edges

    @edges.setter
    def edges(self, value):
        if self._check_fields:
            from graphnav_msgs.msg import Edge
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
                 all(isinstance(v, Edge) for v in value) and
                 True), \
                "The 'edges' field must be a set or sequence and each value of type 'Edge'"
        self._edges = value

    @builtins.property
    def current_node_idx(self):
        """Message field 'current_node_idx'."""
        return self._current_node_idx

    @current_node_idx.setter
    def current_node_idx(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_node_idx' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_node_idx' field must be an unsigned integer in [0, 4294967295]"
        self._current_node_idx = value
