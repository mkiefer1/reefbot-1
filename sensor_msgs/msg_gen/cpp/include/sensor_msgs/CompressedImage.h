/* Auto-generated by genmsg_cpp for file /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg/CompressedImage.msg */
#ifndef SENSOR_MSGS_MESSAGE_COMPRESSEDIMAGE_H
#define SENSOR_MSGS_MESSAGE_COMPRESSEDIMAGE_H
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

namespace sensor_msgs
{
template <class ContainerAllocator>
struct CompressedImage_ {
  typedef CompressedImage_<ContainerAllocator> Type;

  CompressedImage_()
  : header()
  , format()
  , data()
  {
  }

  CompressedImage_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , format(_alloc)
  , data(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _format_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  format;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  data;


  typedef boost::shared_ptr< ::sensor_msgs::CompressedImage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::CompressedImage_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CompressedImage
typedef  ::sensor_msgs::CompressedImage_<std::allocator<void> > CompressedImage;

typedef boost::shared_ptr< ::sensor_msgs::CompressedImage> CompressedImagePtr;
typedef boost::shared_ptr< ::sensor_msgs::CompressedImage const> CompressedImageConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sensor_msgs::CompressedImage_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sensor_msgs::CompressedImage_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sensor_msgs::CompressedImage_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sensor_msgs::CompressedImage_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::CompressedImage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "8f7a12909da2c9d3332d540a0977563f";
  }

  static const char* value(const  ::sensor_msgs::CompressedImage_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x8f7a12909da2c9d3ULL;
  static const uint64_t static_value2 = 0x332d540a0977563fULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::CompressedImage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/CompressedImage";
  }

  static const char* value(const  ::sensor_msgs::CompressedImage_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::CompressedImage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# This message contains a compressed image\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
\n\
string format        # Specifies the format of the data\n\
                     #   Acceptable values:\n\
                     #     jpeg, png\n\
uint8[] data         # Compressed image buffer\n\
\n\
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
";
  }

  static const char* value(const  ::sensor_msgs::CompressedImage_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::sensor_msgs::CompressedImage_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::sensor_msgs::CompressedImage_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sensor_msgs::CompressedImage_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.format);
    stream.next(m.data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CompressedImage_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::CompressedImage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sensor_msgs::CompressedImage_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "format: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.format);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_COMPRESSEDIMAGE_H
