// Generated by gencpp from file arc_msgs/WirelessResponse.msg
// DO NOT EDIT!


#ifndef ARC_MSGS_MESSAGE_WIRELESSRESPONSE_H
#define ARC_MSGS_MESSAGE_WIRELESSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace arc_msgs
{
template <class ContainerAllocator>
struct WirelessResponse_
{
  typedef WirelessResponse_<ContainerAllocator> Type;

  WirelessResponse_()
    : header()
    , sender_location()  {
    }
  WirelessResponse_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sender_location(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _sender_location_type;
  _sender_location_type sender_location;





  typedef boost::shared_ptr< ::arc_msgs::WirelessResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arc_msgs::WirelessResponse_<ContainerAllocator> const> ConstPtr;

}; // struct WirelessResponse_

typedef ::arc_msgs::WirelessResponse_<std::allocator<void> > WirelessResponse;

typedef boost::shared_ptr< ::arc_msgs::WirelessResponse > WirelessResponsePtr;
typedef boost::shared_ptr< ::arc_msgs::WirelessResponse const> WirelessResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arc_msgs::WirelessResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arc_msgs::WirelessResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arc_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'dynamic_reconfigure': ['/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../msg'], 'arc_msgs': ['/home/mute/workspace/arc_ws/src/arc_ros/arc_msgs/msg', '/home/mute/workspace/arc_ws/devel/share/arc_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arc_msgs::WirelessResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arc_msgs::WirelessResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arc_msgs::WirelessResponse_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79379e06566b18a346ddf015a49930d6";
  }

  static const char* value(const ::arc_msgs::WirelessResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79379e06566b18a3ULL;
  static const uint64_t static_value2 = 0x46ddf015a49930d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arc_msgs/WirelessResponse";
  }

  static const char* value(const ::arc_msgs::WirelessResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
#Where is the robot who sent this announcement? This is in /map coordinate frame.\n\
geometry_msgs/Pose sender_location\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::arc_msgs::WirelessResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sender_location);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WirelessResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arc_msgs::WirelessResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arc_msgs::WirelessResponse_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sender_location: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.sender_location);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARC_MSGS_MESSAGE_WIRELESSRESPONSE_H
