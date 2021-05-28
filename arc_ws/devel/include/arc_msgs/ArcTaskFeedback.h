// Generated by gencpp from file arc_msgs/ArcTaskFeedback.msg
// DO NOT EDIT!


#ifndef ARC_MSGS_MESSAGE_ARCTASKFEEDBACK_H
#define ARC_MSGS_MESSAGE_ARCTASKFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace arc_msgs
{
template <class ContainerAllocator>
struct ArcTaskFeedback_
{
  typedef ArcTaskFeedback_<ContainerAllocator> Type;

  ArcTaskFeedback_()
    {
    }
  ArcTaskFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct ArcTaskFeedback_

typedef ::arc_msgs::ArcTaskFeedback_<std::allocator<void> > ArcTaskFeedback;

typedef boost::shared_ptr< ::arc_msgs::ArcTaskFeedback > ArcTaskFeedbackPtr;
typedef boost::shared_ptr< ::arc_msgs::ArcTaskFeedback const> ArcTaskFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arc_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dynamic_reconfigure': ['/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../msg'], 'arc_msgs': ['/home/mute/workspace/arc_ws/src/arc_ros/arc_msgs/msg', '/home/mute/workspace/arc_ws/devel/share/arc_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::arc_msgs::ArcTaskFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arc_msgs/ArcTaskFeedback";
  }

  static const char* value(const ::arc_msgs::ArcTaskFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#no feedback message yet\n\
\n\
\n\
\n\
";
  }

  static const char* value(const ::arc_msgs::ArcTaskFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArcTaskFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arc_msgs::ArcTaskFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::arc_msgs::ArcTaskFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ARC_MSGS_MESSAGE_ARCTASKFEEDBACK_H