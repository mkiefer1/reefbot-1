/* Auto-generated by genmsg_cpp for file /home/mdesnoyer/src/reefbot/ros/reefbot_msgs/msg/CameraPower.msg */
#ifndef REEFBOT_MSGS_MESSAGE_CAMERAPOWER_H
#define REEFBOT_MSGS_MESSAGE_CAMERAPOWER_H
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


namespace reefbot_msgs
{
template <class ContainerAllocator>
struct CameraPower_ {
  typedef CameraPower_<ContainerAllocator> Type;

  CameraPower_()
  : turn_camera_on(false)
  {
  }

  CameraPower_(const ContainerAllocator& _alloc)
  : turn_camera_on(false)
  {
  }

  typedef uint8_t _turn_camera_on_type;
  uint8_t turn_camera_on;


  typedef boost::shared_ptr< ::reefbot_msgs::CameraPower_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reefbot_msgs::CameraPower_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CameraPower
typedef  ::reefbot_msgs::CameraPower_<std::allocator<void> > CameraPower;

typedef boost::shared_ptr< ::reefbot_msgs::CameraPower> CameraPowerPtr;
typedef boost::shared_ptr< ::reefbot_msgs::CameraPower const> CameraPowerConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::reefbot_msgs::CameraPower_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::reefbot_msgs::CameraPower_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace reefbot_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::reefbot_msgs::CameraPower_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::reefbot_msgs::CameraPower_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::reefbot_msgs::CameraPower_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dcac9ec93e4a365c3d8660001ab16af4";
  }

  static const char* value(const  ::reefbot_msgs::CameraPower_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xdcac9ec93e4a365cULL;
  static const uint64_t static_value2 = 0x3d8660001ab16af4ULL;
};

template<class ContainerAllocator>
struct DataType< ::reefbot_msgs::CameraPower_<ContainerAllocator> > {
  static const char* value() 
  {
    return "reefbot_msgs/CameraPower";
  }

  static const char* value(const  ::reefbot_msgs::CameraPower_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::reefbot_msgs::CameraPower_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# A message to toggle the camera power manually\n\
#\n\
# Author: Mark Desnoyer (markd@cmu.edu)\n\
# Date: Sept 2010\n\
\n\
bool turn_camera_on\n\
";
  }

  static const char* value(const  ::reefbot_msgs::CameraPower_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::reefbot_msgs::CameraPower_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::reefbot_msgs::CameraPower_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.turn_camera_on);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CameraPower_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reefbot_msgs::CameraPower_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::reefbot_msgs::CameraPower_<ContainerAllocator> & v) 
  {
    s << indent << "turn_camera_on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turn_camera_on);
  }
};


} // namespace message_operations
} // namespace ros

#endif // REEFBOT_MSGS_MESSAGE_CAMERAPOWER_H

