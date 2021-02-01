// Generated by gencpp from file pal_statistics_msgs/Statistics.msg
// DO NOT EDIT!


#ifndef PAL_STATISTICS_MSGS_MESSAGE_STATISTICS_H
#define PAL_STATISTICS_MSGS_MESSAGE_STATISTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pal_statistics_msgs/Statistic.h>

namespace pal_statistics_msgs
{
template <class ContainerAllocator>
struct Statistics_
{
  typedef Statistics_<ContainerAllocator> Type;

  Statistics_()
    : header()
    , statistics()  {
    }
  Statistics_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , statistics(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::pal_statistics_msgs::Statistic_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >::other >  _statistics_type;
  _statistics_type statistics;





  typedef boost::shared_ptr< ::pal_statistics_msgs::Statistics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_statistics_msgs::Statistics_<ContainerAllocator> const> ConstPtr;

}; // struct Statistics_

typedef ::pal_statistics_msgs::Statistics_<std::allocator<void> > Statistics;

typedef boost::shared_ptr< ::pal_statistics_msgs::Statistics > StatisticsPtr;
typedef boost::shared_ptr< ::pal_statistics_msgs::Statistics const> StatisticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_statistics_msgs::Statistics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_statistics_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pal_statistics_msgs': ['/home/adrii/talos_public_ws/src/pal_statistics/pal_statistics_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_statistics_msgs::Statistics_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_statistics_msgs::Statistics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_statistics_msgs::Statistics_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f331753b5cb45fe4c2ecf2b2c5f78ac";
  }

  static const char* value(const ::pal_statistics_msgs::Statistics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f331753b5cb45feULL;
  static const uint64_t static_value2 = 0x4c2ecf2b2c5f78acULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_statistics_msgs/Statistics";
  }

  static const char* value(const ::pal_statistics_msgs::Statistics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# header\n\
Header header\n\
\n\
# Statistics\n\
Statistic[] statistics\n\
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
MSG: pal_statistics_msgs/Statistic\n\
string name\n\
float64 value\n\
";
  }

  static const char* value(const ::pal_statistics_msgs::Statistics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.statistics);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Statistics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_statistics_msgs::Statistics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_statistics_msgs::Statistics_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "statistics[]" << std::endl;
    for (size_t i = 0; i < v.statistics.size(); ++i)
    {
      s << indent << "  statistics[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pal_statistics_msgs::Statistic_<ContainerAllocator> >::stream(s, indent + "    ", v.statistics[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_STATISTICS_MSGS_MESSAGE_STATISTICS_H
