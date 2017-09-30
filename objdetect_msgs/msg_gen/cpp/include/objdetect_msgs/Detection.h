/* Auto-generated by genmsg_cpp for file /home/mdesnoyer/src/reefbot/ros/objdetect_msgs/msg/Detection.msg */
#ifndef OBJDETECT_MSGS_MESSAGE_DETECTION_H
#define OBJDETECT_MSGS_MESSAGE_DETECTION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "objdetect_msgs/Mask.h"

namespace objdetect_msgs
{
template <class ContainerAllocator>
struct Detection_ {
  typedef Detection_<ContainerAllocator> Type;

  Detection_()
  : header()
  , label()
  , detector()
  , score(0.0)
  , mask()
  {
  }

  Detection_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , label(_alloc)
  , detector(_alloc)
  , score(0.0)
  , mask(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _label_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  label;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _detector_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  detector;

  typedef float _score_type;
  float score;

  typedef  ::objdetect_msgs::Mask_<ContainerAllocator>  _mask_type;
   ::objdetect_msgs::Mask_<ContainerAllocator>  mask;


  typedef boost::shared_ptr< ::objdetect_msgs::Detection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::objdetect_msgs::Detection_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Detection
typedef  ::objdetect_msgs::Detection_<std::allocator<void> > Detection;

typedef boost::shared_ptr< ::objdetect_msgs::Detection> DetectionPtr;
typedef boost::shared_ptr< ::objdetect_msgs::Detection const> DetectionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::objdetect_msgs::Detection_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::objdetect_msgs::Detection_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace objdetect_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::objdetect_msgs::Detection_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::objdetect_msgs::Detection_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::objdetect_msgs::Detection_<ContainerAllocator> > {
  static const char* value() 
  {
    return "33c50252186d70320838325cb0224a3d";
  }

  static const char* value(const  ::objdetect_msgs::Detection_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x33c50252186d7032ULL;
  static const uint64_t static_value2 = 0x0838325cb0224a3dULL;
};

template<class ContainerAllocator>
struct DataType< ::objdetect_msgs::Detection_<ContainerAllocator> > {
  static const char* value() 
  {
    return "objdetect_msgs/Detection";
  }

  static const char* value(const  ::objdetect_msgs::Detection_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::objdetect_msgs::Detection_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# A single detection from the object detector\n\
Header header\n\
\n\
# Optional label for the detection\n\
string label\n\
\n\
# Name of the detector used\n\
string detector\n\
\n\
# Quality of the detection\n\
float32 score\n\
\n\
# Mask specifying the location of the detection\n\
Mask mask\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: objdetect_msgs/Mask\n\
# this message is used to mark where an object is present in an image\n\
# this can be done either by a roi region on the image (less precise)\n\
# or a mask (more precise)\n\
\n\
sensor_msgs/RegionOfInterest roi\n\
\n\
# in the case when mask is used, 'roi' specifies the image region and 'mask'\n\
# (which should be of the same size) a binary mask in that region\n\
sensor_msgs/Image mask\n\
================================================================================\n\
MSG: sensor_msgs/RegionOfInterest\n\
# This message is used to specify a region of interest within an image.\n\
#\n\
# When used to specify the ROI setting of the camera when the image was\n\
# taken, the height and width fields should either match the height and\n\
# width fields for the associated image; or height = width = 0\n\
# indicates that the full resolution image was captured.\n\
\n\
uint32 x_offset  # Leftmost pixel of the ROI\n\
                 # (0 if the ROI includes the left edge of the image)\n\
uint32 y_offset  # Topmost pixel of the ROI\n\
                 # (0 if the ROI includes the top edge of the image)\n\
uint32 height    # Height of ROI\n\
uint32 width     # Width of ROI\n\
\n\
# True if a distinct rectified ROI should be calculated from the \"raw\"\n\
# ROI in this message. Typically this should be False if the full image\n\
# is captured (ROI not used), and True if a subwindow is captured (ROI\n\
# used).\n\
bool do_rectify\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in src/image_encodings.cpp\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
\n\
";
  }

  static const char* value(const  ::objdetect_msgs::Detection_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::objdetect_msgs::Detection_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::objdetect_msgs::Detection_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::objdetect_msgs::Detection_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.label);
    stream.next(m.detector);
    stream.next(m.score);
    stream.next(m.mask);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Detection_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::objdetect_msgs::Detection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::objdetect_msgs::Detection_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.label);
    s << indent << "detector: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.detector);
    s << indent << "score: ";
    Printer<float>::stream(s, indent + "  ", v.score);
    s << indent << "mask: ";
s << std::endl;
    Printer< ::objdetect_msgs::Mask_<ContainerAllocator> >::stream(s, indent + "  ", v.mask);
  }
};


} // namespace message_operations
} // namespace ros

#endif // OBJDETECT_MSGS_MESSAGE_DETECTION_H
