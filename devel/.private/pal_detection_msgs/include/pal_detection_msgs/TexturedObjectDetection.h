// Generated by gencpp from file pal_detection_msgs/TexturedObjectDetection.msg
// DO NOT EDIT!


#ifndef PAL_DETECTION_MSGS_MESSAGE_TEXTUREDOBJECTDETECTION_H
#define PAL_DETECTION_MSGS_MESSAGE_TEXTUREDOBJECTDETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/CompressedImage.h>
#include <pal_detection_msgs/RotatedDetection2d.h>

namespace pal_detection_msgs
{
template <class ContainerAllocator>
struct TexturedObjectDetection_
{
  typedef TexturedObjectDetection_<ContainerAllocator> Type;

  TexturedObjectDetection_()
    : header()
    , img()
    , roi()  {
    }
  TexturedObjectDetection_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , img(_alloc)
    , roi(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::CompressedImage_<ContainerAllocator>  _img_type;
  _img_type img;

   typedef  ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator>  _roi_type;
  _roi_type roi;





  typedef boost::shared_ptr< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> const> ConstPtr;

}; // struct TexturedObjectDetection_

typedef ::pal_detection_msgs::TexturedObjectDetection_<std::allocator<void> > TexturedObjectDetection;

typedef boost::shared_ptr< ::pal_detection_msgs::TexturedObjectDetection > TexturedObjectDetectionPtr;
typedef boost::shared_ptr< ::pal_detection_msgs::TexturedObjectDetection const> TexturedObjectDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_detection_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'pal_detection_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_detection_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_detection_msgs/share/pal_detection_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cb7f0068423d23f481cd8a23473b3e42";
  }

  static const char* value(const ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcb7f0068423d23f4ULL;
  static const uint64_t static_value2 = 0x81cd8a23473b3e42ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_detection_msgs/TexturedObjectDetection";
  }

  static const char* value(const ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Message with the information of a textured object detected\n\
\n\
Header header\n\
\n\
sensor_msgs/CompressedImage img\n\
pal_detection_msgs/RotatedDetection2d roi\n\
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
MSG: sensor_msgs/CompressedImage\n\
# This message contains a compressed image\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of camera\n\
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
MSG: pal_detection_msgs/RotatedDetection2d\n\
## Rotated rectangle in image coordinates defined by 4 vertices\n\
\n\
Header header\n\
\n\
# coordinates of the vertices of a rotated rectangle\n\
int64[] x\n\
int64[] y\n\
\n\
\n\
";
  }

  static const char* value(const ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.img);
      stream.next(m.roi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TexturedObjectDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_detection_msgs::TexturedObjectDetection_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "img: ";
    s << std::endl;
    Printer< ::sensor_msgs::CompressedImage_<ContainerAllocator> >::stream(s, indent + "  ", v.img);
    s << indent << "roi: ";
    s << std::endl;
    Printer< ::pal_detection_msgs::RotatedDetection2d_<ContainerAllocator> >::stream(s, indent + "  ", v.roi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DETECTION_MSGS_MESSAGE_TEXTUREDOBJECTDETECTION_H
