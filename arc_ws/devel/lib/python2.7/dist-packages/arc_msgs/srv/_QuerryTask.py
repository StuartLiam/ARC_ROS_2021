# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from arc_msgs/QuerryTaskRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class QuerryTaskRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "arc_msgs/QuerryTaskRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(QuerryTaskRequest, self).__init__(*args, **kwds)

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from arc_msgs/QuerryTaskResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class QuerryTaskResponse(genpy.Message):
  _md5sum = "0367c6c74ded11b47d7fe0ed3f0c4dab"
  _type = "arc_msgs/QuerryTaskResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 task_type
int32 priority
float64 bot_x
float64 bot_y
float64 loc_x
float64 loc_y
"""
  __slots__ = ['task_type','priority','bot_x','bot_y','loc_x','loc_y']
  _slot_types = ['int32','int32','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       task_type,priority,bot_x,bot_y,loc_x,loc_y

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(QuerryTaskResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.task_type is None:
        self.task_type = 0
      if self.priority is None:
        self.priority = 0
      if self.bot_x is None:
        self.bot_x = 0.
      if self.bot_y is None:
        self.bot_y = 0.
      if self.loc_x is None:
        self.loc_x = 0.
      if self.loc_y is None:
        self.loc_y = 0.
    else:
      self.task_type = 0
      self.priority = 0
      self.bot_x = 0.
      self.bot_y = 0.
      self.loc_x = 0.
      self.loc_y = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2i4d().pack(_x.task_type, _x.priority, _x.bot_x, _x.bot_y, _x.loc_x, _x.loc_y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 40
      (_x.task_type, _x.priority, _x.bot_x, _x.bot_y, _x.loc_x, _x.loc_y,) = _get_struct_2i4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2i4d().pack(_x.task_type, _x.priority, _x.bot_x, _x.bot_y, _x.loc_x, _x.loc_y))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 40
      (_x.task_type, _x.priority, _x.bot_x, _x.bot_y, _x.loc_x, _x.loc_y,) = _get_struct_2i4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i4d = None
def _get_struct_2i4d():
    global _struct_2i4d
    if _struct_2i4d is None:
        _struct_2i4d = struct.Struct("<2i4d")
    return _struct_2i4d
class QuerryTask(object):
  _type          = 'arc_msgs/QuerryTask'
  _md5sum = '0367c6c74ded11b47d7fe0ed3f0c4dab'
  _request_class  = QuerryTaskRequest
  _response_class = QuerryTaskResponse
