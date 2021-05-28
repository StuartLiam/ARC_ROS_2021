// Generated by gencpp from file arc_msgs/NavigationRequest.msg
// DO NOT EDIT!


#ifndef ARC_MSGS_MESSAGE_NAVIGATIONREQUEST_H
#define ARC_MSGS_MESSAGE_NAVIGATIONREQUEST_H

#include <ros/service_traits.h>


#include <arc_msgs/NavigationRequestRequest.h>
#include <arc_msgs/NavigationRequestResponse.h>


namespace arc_msgs
{

struct NavigationRequest
{

typedef NavigationRequestRequest Request;
typedef NavigationRequestResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct NavigationRequest
} // namespace arc_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::arc_msgs::NavigationRequest > {
  static const char* value()
  {
    return "0990ba5feaa158a7030cc5a892af2ba7";
  }

  static const char* value(const ::arc_msgs::NavigationRequest&) { return value(); }
};

template<>
struct DataType< ::arc_msgs::NavigationRequest > {
  static const char* value()
  {
    return "arc_msgs/NavigationRequest";
  }

  static const char* value(const ::arc_msgs::NavigationRequest&) { return value(); }
};


// service_traits::MD5Sum< ::arc_msgs::NavigationRequestRequest> should match 
// service_traits::MD5Sum< ::arc_msgs::NavigationRequest > 
template<>
struct MD5Sum< ::arc_msgs::NavigationRequestRequest>
{
  static const char* value()
  {
    return MD5Sum< ::arc_msgs::NavigationRequest >::value();
  }
  static const char* value(const ::arc_msgs::NavigationRequestRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::arc_msgs::NavigationRequestRequest> should match 
// service_traits::DataType< ::arc_msgs::NavigationRequest > 
template<>
struct DataType< ::arc_msgs::NavigationRequestRequest>
{
  static const char* value()
  {
    return DataType< ::arc_msgs::NavigationRequest >::value();
  }
  static const char* value(const ::arc_msgs::NavigationRequestRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::arc_msgs::NavigationRequestResponse> should match 
// service_traits::MD5Sum< ::arc_msgs::NavigationRequest > 
template<>
struct MD5Sum< ::arc_msgs::NavigationRequestResponse>
{
  static const char* value()
  {
    return MD5Sum< ::arc_msgs::NavigationRequest >::value();
  }
  static const char* value(const ::arc_msgs::NavigationRequestResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::arc_msgs::NavigationRequestResponse> should match 
// service_traits::DataType< ::arc_msgs::NavigationRequest > 
template<>
struct DataType< ::arc_msgs::NavigationRequestResponse>
{
  static const char* value()
  {
    return DataType< ::arc_msgs::NavigationRequest >::value();
  }
  static const char* value(const ::arc_msgs::NavigationRequestResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ARC_MSGS_MESSAGE_NAVIGATIONREQUEST_H
