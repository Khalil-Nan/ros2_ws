// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "graphnav_msgs/msg/detail/edge__struct.h"
#include "graphnav_msgs/msg/detail/edge__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "graphnav_msgs/msg/detail/edge_traversability__functions.h"
#include "graphnav_msgs/msg/detail/key_value__functions.h"
// end nested array functions include
bool graphnav_msgs__msg__edge_traversability__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * graphnav_msgs__msg__edge_traversability__convert_to_py(void * raw_ros_message);
bool graphnav_msgs__msg__key_value__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * graphnav_msgs__msg__key_value__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool graphnav_msgs__msg__edge__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("graphnav_msgs.msg._edge.Edge", full_classname_dest, 28) == 0);
  }
  graphnav_msgs__msg__Edge * ros_message = _ros_message;
  {  // to_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "to_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->to_idx = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // from_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->from_idx = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // traversability
    PyObject * field = PyObject_GetAttrString(_pymsg, "traversability");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'traversability'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!graphnav_msgs__msg__EdgeTraversability__Sequence__init(&(ros_message->traversability), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create graphnav_msgs__msg__EdgeTraversability__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    graphnav_msgs__msg__EdgeTraversability * dest = ros_message->traversability.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!graphnav_msgs__msg__edge_traversability__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // properties
    PyObject * field = PyObject_GetAttrString(_pymsg, "properties");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'properties'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!graphnav_msgs__msg__KeyValue__Sequence__init(&(ros_message->properties), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create graphnav_msgs__msg__KeyValue__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    graphnav_msgs__msg__KeyValue * dest = ros_message->properties.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!graphnav_msgs__msg__key_value__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * graphnav_msgs__msg__edge__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Edge */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("graphnav_msgs.msg._edge");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Edge");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  graphnav_msgs__msg__Edge * ros_message = (graphnav_msgs__msg__Edge *)raw_ros_message;
  {  // to_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->to_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "to_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // from_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->from_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traversability
    PyObject * field = NULL;
    size_t size = ros_message->traversability.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    graphnav_msgs__msg__EdgeTraversability * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->traversability.data[i]);
      PyObject * pyitem = graphnav_msgs__msg__edge_traversability__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "traversability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // properties
    PyObject * field = NULL;
    size_t size = ros_message->properties.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    graphnav_msgs__msg__KeyValue * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->properties.data[i]);
      PyObject * pyitem = graphnav_msgs__msg__key_value__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "properties", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
