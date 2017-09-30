"""autogenerated by genpy from reefbot_msgs/AddSpeciesLabel.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg
import reefbot_msgs.msg
import sensor_msgs.msg

class AddSpeciesLabel(genpy.Message):
  _md5sum = "aea72d3d4b9c673c27c854a8fb2f9240"
  _type = "reefbot_msgs/AddSpeciesLabel"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# This message specifies a new image and a label to add to the species id
# dictionary
#
# If you're using OpenCV to handle images, look up the cv_bridge in 
# ROS to easily write this message.
#
# Author: Mark Desnoyer (markd@cmu.edu)
# Date: Nov 2010

# Full color image that contains an instance of the species
sensor_msgs/Image image

# Regions in the image to look for individuals that we have labels for
ImageRegion[] regions

# Array of labels, one for each region that specify the species in that region
uint32[] labels

# Optional filename of the image
string filename

# Optional array of blob ids, one for each region specified
uint32[] blob_ids
================================================================================
MSG: sensor_msgs/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of cameara
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in src/image_encodings.cpp

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: reefbot_msgs/ImageRegion
# Message that species a region in the image to look at to identify
# the species.
#
# Author: Mark Desnoyer (markd@cmu.edu)
# Date: June 2010

# Bounding box in the image that specifies the region
sensor_msgs/RegionOfInterest bounding_box

# Binary mask image specifying where the species is in the bounding
# box. A pixel value of zero means to ignore the pixel. If this image
# is empty, then the entire box should be used, but if it's not empty,
# it must be the same size as bbox or else an error will be generated.
sensor_msgs/Image mask
================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify

"""
  __slots__ = ['image','regions','labels','filename','blob_ids']
  _slot_types = ['sensor_msgs/Image','reefbot_msgs/ImageRegion[]','uint32[]','string','uint32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       image,regions,labels,filename,blob_ids

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(AddSpeciesLabel, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.image is None:
        self.image = sensor_msgs.msg.Image()
      if self.regions is None:
        self.regions = []
      if self.labels is None:
        self.labels = []
      if self.filename is None:
        self.filename = ''
      if self.blob_ids is None:
        self.blob_ids = []
    else:
      self.image = sensor_msgs.msg.Image()
      self.regions = []
      self.labels = []
      self.filename = ''
      self.blob_ids = []

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
      buff.write(_struct_3I.pack(_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs))
      _x = self.image.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2I.pack(_x.image.height, _x.image.width))
      _x = self.image.encoding
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_BI.pack(_x.image.is_bigendian, _x.image.step))
      _x = self.image.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.regions)
      buff.write(_struct_I.pack(length))
      for val1 in self.regions:
        _v1 = val1.bounding_box
        _x = _v1
        buff.write(_struct_4IB.pack(_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify))
        _v2 = val1.mask
        _v3 = _v2.header
        buff.write(_struct_I.pack(_v3.seq))
        _v4 = _v3.stamp
        _x = _v4
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v3.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v2
        buff.write(_struct_2I.pack(_x.height, _x.width))
        _x = _v2.encoding
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v2
        buff.write(_struct_BI.pack(_x.is_bigendian, _x.step))
        _x = _v2.data
        length = len(_x)
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.labels)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.pack(pattern, *self.labels))
      _x = self.filename
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.blob_ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.pack(pattern, *self.blob_ids))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.image is None:
        self.image = sensor_msgs.msg.Image()
      if self.regions is None:
        self.regions = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.image.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.image.height, _x.image.width,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.encoding = str[start:end].decode('utf-8')
      else:
        self.image.encoding = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.image.is_bigendian, _x.image.step,) = _struct_BI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.data = str[start:end].decode('utf-8')
      else:
        self.image.data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.regions = []
      for i in range(0, length):
        val1 = reefbot_msgs.msg.ImageRegion()
        _v5 = val1.bounding_box
        _x = _v5
        start = end
        end += 17
        (_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify,) = _struct_4IB.unpack(str[start:end])
        _v5.do_rectify = bool(_v5.do_rectify)
        _v6 = val1.mask
        _v7 = _v6.header
        start = end
        end += 4
        (_v7.seq,) = _struct_I.unpack(str[start:end])
        _v8 = _v7.stamp
        _x = _v8
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v7.frame_id = str[start:end].decode('utf-8')
        else:
          _v7.frame_id = str[start:end]
        _x = _v6
        start = end
        end += 8
        (_x.height, _x.width,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v6.encoding = str[start:end].decode('utf-8')
        else:
          _v6.encoding = str[start:end]
        _x = _v6
        start = end
        end += 5
        (_x.is_bigendian, _x.step,) = _struct_BI.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v6.data = str[start:end].decode('utf-8')
        else:
          _v6.data = str[start:end]
        self.regions.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.labels = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.filename = str[start:end].decode('utf-8')
      else:
        self.filename = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.blob_ids = struct.unpack(pattern, str[start:end])
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
      buff.write(_struct_3I.pack(_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs))
      _x = self.image.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_2I.pack(_x.image.height, _x.image.width))
      _x = self.image.encoding
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_BI.pack(_x.image.is_bigendian, _x.image.step))
      _x = self.image.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.regions)
      buff.write(_struct_I.pack(length))
      for val1 in self.regions:
        _v9 = val1.bounding_box
        _x = _v9
        buff.write(_struct_4IB.pack(_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify))
        _v10 = val1.mask
        _v11 = _v10.header
        buff.write(_struct_I.pack(_v11.seq))
        _v12 = _v11.stamp
        _x = _v12
        buff.write(_struct_2I.pack(_x.secs, _x.nsecs))
        _x = _v11.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v10
        buff.write(_struct_2I.pack(_x.height, _x.width))
        _x = _v10.encoding
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = _v10
        buff.write(_struct_BI.pack(_x.is_bigendian, _x.step))
        _x = _v10.data
        length = len(_x)
        # - if encoded as a list instead, serialize as bytes instead of string
        if type(_x) in [list, tuple]:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.labels)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.labels.tostring())
      _x = self.filename
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.blob_ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.blob_ids.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.image is None:
        self.image = sensor_msgs.msg.Image()
      if self.regions is None:
        self.regions = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.image.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 8
      (_x.image.height, _x.image.width,) = _struct_2I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.encoding = str[start:end].decode('utf-8')
      else:
        self.image.encoding = str[start:end]
      _x = self
      start = end
      end += 5
      (_x.image.is_bigendian, _x.image.step,) = _struct_BI.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.data = str[start:end].decode('utf-8')
      else:
        self.image.data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.regions = []
      for i in range(0, length):
        val1 = reefbot_msgs.msg.ImageRegion()
        _v13 = val1.bounding_box
        _x = _v13
        start = end
        end += 17
        (_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify,) = _struct_4IB.unpack(str[start:end])
        _v13.do_rectify = bool(_v13.do_rectify)
        _v14 = val1.mask
        _v15 = _v14.header
        start = end
        end += 4
        (_v15.seq,) = _struct_I.unpack(str[start:end])
        _v16 = _v15.stamp
        _x = _v16
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v15.frame_id = str[start:end].decode('utf-8')
        else:
          _v15.frame_id = str[start:end]
        _x = _v14
        start = end
        end += 8
        (_x.height, _x.width,) = _struct_2I.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v14.encoding = str[start:end].decode('utf-8')
        else:
          _v14.encoding = str[start:end]
        _x = _v14
        start = end
        end += 5
        (_x.is_bigendian, _x.step,) = _struct_BI.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v14.data = str[start:end].decode('utf-8')
        else:
          _v14.data = str[start:end]
        self.regions.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.labels = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.filename = str[start:end].decode('utf-8')
      else:
        self.filename = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      end += struct.calcsize(pattern)
      self.blob_ids = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_2I = struct.Struct("<2I")
_struct_4IB = struct.Struct("<4IB")
_struct_BI = struct.Struct("<BI")
