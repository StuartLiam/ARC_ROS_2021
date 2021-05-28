// Generated by gencpp from file arc_msgs/MoveAlterableObjectRequest.msg
// DO NOT EDIT!


#ifndef ARC_MSGS_MESSAGE_MOVEALTERABLEOBJECTREQUEST_H
#define ARC_MSGS_MESSAGE_MOVEALTERABLEOBJECTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace arc_msgs
{
template <class ContainerAllocator>
struct MoveAlterableObjectRequest_
{
  typedef MoveAlterableObjectRequest_<ContainerAllocator> Type;

  MoveAlterableObjectRequest_()
    : fiducial_return(0)
    , name()
    , pose()  {
    }
  MoveAlterableObjectRequest_(const ContainerAllocator& _alloc)
    : fiducial_return(0)
    , name(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _fiducial_return_type;
  _fiducial_return_type fiducial_return;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveAlterableObjectRequest_

typedef ::arc_msgs::MoveAlterableObjectRequest_<std::allocator<void> > MoveAlterableObjectRequest;

typedef boost::shared_ptr< ::arc_msgs::MoveAlterableObjectRequest > MoveAlterableObjectRequestPtr;
typedef boost::shared_ptr< ::arc_msgs::MoveAlterableObjectRequest const> MoveAlterableObjectRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arc_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dynamic_reconfigure': ['/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../msg'], 'arc_msgs': ['/home/mute/workspace/arc_ws/src/arc_ros/arc_msgs/msg', '/home/mute/workspace/arc_ws/devel/share/arc_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7081b645962fcb4bfe66c7f0df8a9786";
  }

  static const char* value(const ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7081b645962fcb4bULL;
  static const uint64_t static_value2 = 0xfe66c7f0df8a9786ULL;
};

template<class ContainerAllocator>
struct DataType< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arc_msgs/MoveAlterableObjectRequest";
  }

  static const char* value(const ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
int32 fiducial_return\n\
\n\
string name\n\
geometry_msgs/Pose2D pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# Deprecated\n\
# Please use the full 3D pose.\n\
\n\
# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n\
\n\
# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n\
\n\
\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fiducial_return);
      stream.next(m.name);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveAlterableObjectRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arc_msgs::MoveAlterableObjectRequest_<ContainerAllocator>& v)
  {
    s << indent << "fiducial_return: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fiducial_return);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARC_MSGS_MESSAGE_MOVEALTERABLEOBJECTREQUEST_H