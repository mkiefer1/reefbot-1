/* Auto-generated by genmsg_cpp for file /home/mdesnoyer/src/reefbot/ros/sensor_msgs/msg/ChannelFloat32.msg */
#ifndef SENSOR_MSGS_MESSAGE_CHANNELFLOAT32_H
#define SENSOR_MSGS_MESSAGE_CHANNELFLOAT32_H
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


namespace sensor_msgs
{
template <class ContainerAllocator>
struct ChannelFloat32_ {
  typedef ChannelFloat32_<ContainerAllocator> Type;

  ChannelFloat32_()
  : name()
  , values()
  {
  }

  ChannelFloat32_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , values(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  values;


  typedef boost::shared_ptr< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::ChannelFloat32_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ChannelFloat32
typedef  ::sensor_msgs::ChannelFloat32_<std::allocator<void> > ChannelFloat32;

typedef boost::shared_ptr< ::sensor_msgs::ChannelFloat32> ChannelFloat32Ptr;
typedef boost::shared_ptr< ::sensor_msgs::ChannelFloat32 const> ChannelFloat32ConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::sensor_msgs::ChannelFloat32_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sensor_msgs::ChannelFloat32_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3d40139cdd33dfedcb71ffeeeb42ae7f";
  }

  static const char* value(const  ::sensor_msgs::ChannelFloat32_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3d40139cdd33dfedULL;
  static const uint64_t static_value2 = 0xcb71ffeeeb42ae7fULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/ChannelFloat32";
  }

  static const char* value(const  ::sensor_msgs::ChannelFloat32_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# This message is used by the PointCloud message to hold optional data\n\
# associated with each point in the cloud. The length of the values\n\
# array should be the same as the length of the points array in the\n\
# PointCloud, and each value should be associated with the corresponding\n\
# point.\n\
\n\
# Channel names in existing practice include:\n\
#   \"u\", \"v\" - row and column (respectively) in the left stereo image.\n\
#              This is opposite to usual conventions but remains for\n\
#              historical reasons. The newer PointCloud2 message has no\n\
#              such problem.\n\
#   \"rgb\" - For point clouds produced by color stereo cameras. uint8\n\
#           (R,G,B) values packed into the least significant 24 bits,\n\
#           in order.\n\
#   \"intensity\" - laser or pixel intensity.\n\
#   \"distance\"\n\
\n\
# The channel name should give semantics of the channel (e.g.\n\
# \"intensity\" instead of \"value\").\n\
string name\n\
\n\
# The values array should be 1-1 with the elements of the associated\n\
# PointCloud.\n\
float32[] values\n\
\n\
";
  }

  static const char* value(const  ::sensor_msgs::ChannelFloat32_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.values);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ChannelFloat32_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::ChannelFloat32_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::sensor_msgs::ChannelFloat32_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_CHANNELFLOAT32_H

