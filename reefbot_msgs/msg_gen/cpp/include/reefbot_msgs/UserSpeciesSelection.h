/* Auto-generated by genmsg_cpp for file /home/mdesnoyer/src/reefbot/ros/reefbot_msgs/msg/UserSpeciesSelection.msg */
#ifndef REEFBOT_MSGS_MESSAGE_USERSPECIESSELECTION_H
#define REEFBOT_MSGS_MESSAGE_USERSPECIESSELECTION_H
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
struct UserSpeciesSelection_ {
  typedef UserSpeciesSelection_<ContainerAllocator> Type;

  UserSpeciesSelection_()
  : image_id(0)
  , image_path()
  , species_id(0)
  {
  }

  UserSpeciesSelection_(const ContainerAllocator& _alloc)
  : image_id(0)
  , image_path(_alloc)
  , species_id(0)
  {
  }

  typedef uint64_t _image_id_type;
  uint64_t image_id;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _image_path_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  image_path;

  typedef uint32_t _species_id_type;
  uint32_t species_id;


  typedef boost::shared_ptr< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct UserSpeciesSelection
typedef  ::reefbot_msgs::UserSpeciesSelection_<std::allocator<void> > UserSpeciesSelection;

typedef boost::shared_ptr< ::reefbot_msgs::UserSpeciesSelection> UserSpeciesSelectionPtr;
typedef boost::shared_ptr< ::reefbot_msgs::UserSpeciesSelection const> UserSpeciesSelectionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace reefbot_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f8c0a6a30877a6a6f7257570567384f6";
  }

  static const char* value(const  ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf8c0a6a30877a6a6ULL;
  static const uint64_t static_value2 = 0xf7257570567384f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> > {
  static const char* value() 
  {
    return "reefbot_msgs/UserSpeciesSelection";
  }

  static const char* value(const  ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Message that specifies that the user had tagged the species for an image\n\
#\n\
# Author: Mark Desnoyer (markd@cmu.edu)\n\
# Date: Sept 2010\n\
\n\
uint64 image_id\n\
\n\
string image_path\n\
\n\
uint32 species_id\n\
\n\
";
  }

  static const char* value(const  ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.image_id);
    stream.next(m.image_path);
    stream.next(m.species_id);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct UserSpeciesSelection_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::reefbot_msgs::UserSpeciesSelection_<ContainerAllocator> & v) 
  {
    s << indent << "image_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.image_id);
    s << indent << "image_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.image_path);
    s << indent << "species_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.species_id);
  }
};


} // namespace message_operations
} // namespace ros

#endif // REEFBOT_MSGS_MESSAGE_USERSPECIESSELECTION_H

