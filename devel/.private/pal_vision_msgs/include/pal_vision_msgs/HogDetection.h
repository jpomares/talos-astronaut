// Generated by gencpp from file pal_vision_msgs/HogDetection.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_HOGDETECTION_H
#define PAL_VISION_MSGS_MESSAGE_HOGDETECTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_vision_msgs/Rectangle.h>
#include <geometry_msgs/Vector3.h>
#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct HogDetection_
{
  typedef HogDetection_<ContainerAllocator> Type;

  HogDetection_()
    : imageBoundingBox()
    , direction()
    , hog()
    , principalEigenVectorRGB()
    , rgbClusterCenters()
    , rgbDescriptor1()
    , rgbDescriptor2()  {
    }
  HogDetection_(const ContainerAllocator& _alloc)
    : imageBoundingBox(_alloc)
    , direction(_alloc)
    , hog(_alloc)
    , principalEigenVectorRGB(_alloc)
    , rgbClusterCenters(_alloc)
    , rgbDescriptor1(_alloc)
    , rgbDescriptor2(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_vision_msgs::Rectangle_<ContainerAllocator>  _imageBoundingBox_type;
  _imageBoundingBox_type imageBoundingBox;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _direction_type;
  _direction_type direction;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _hog_type;
  _hog_type hog;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _principalEigenVectorRGB_type;
  _principalEigenVectorRGB_type principalEigenVectorRGB;

   typedef std::vector< ::std_msgs::ColorRGBA_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::ColorRGBA_<ContainerAllocator> >::other >  _rgbClusterCenters_type;
  _rgbClusterCenters_type rgbClusterCenters;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _rgbDescriptor1_type;
  _rgbDescriptor1_type rgbDescriptor1;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _rgbDescriptor2_type;
  _rgbDescriptor2_type rgbDescriptor2;





  typedef boost::shared_ptr< ::pal_vision_msgs::HogDetection_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::HogDetection_<ContainerAllocator> const> ConstPtr;

}; // struct HogDetection_

typedef ::pal_vision_msgs::HogDetection_<std::allocator<void> > HogDetection;

typedef boost::shared_ptr< ::pal_vision_msgs::HogDetection > HogDetectionPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::HogDetection const> HogDetectionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::HogDetection_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pal_vision_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_vision_msgs/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::HogDetection_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::HogDetection_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::HogDetection_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "33e1731149b6e078eff6e4b55c75f260";
  }

  static const char* value(const ::pal_vision_msgs::HogDetection_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x33e1731149b6e078ULL;
  static const uint64_t static_value2 = 0xeff6e4b55c75f260ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/HogDetection";
  }

  static const char* value(const ::pal_vision_msgs::HogDetection_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Contains data relative to the detection of a person using the HOG descriptor\n\
\n\
pal_vision_msgs/Rectangle  imageBoundingBox         # bounding box of image region in which the person has been detected\n\
geometry_msgs/Vector3      direction                # unitary vector expressing in what direction wrt the robot base frame the person is\n\
float32[]                  hog                      # HOG descriptor of the person region\n\
std_msgs/ColorRGBA         principalEigenVectorRGB  # Eigen vector (remember this is an unitary vector) corresponding to the maximum eigen value of all the RGB values in the person region. \n\
std_msgs/ColorRGBA[]       rgbClusterCenters        # RGB cluster centers of the person region in the image obtained using k-means. The rgb components are expressed in [0..1]\n\
uint32[]                   rgbDescriptor1           # Descriptor based on binarized RGB gradients between adjacent image blocks (version 1)\n\
uint32[]                   rgbDescriptor2           # Descriptor based on binarized RGB gradients between adjacent image blocks (version 2)\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/Rectangle\n\
## Rectangle defined by a point, its width and height\n\
# corresponds to the openCV struct : CvRect\n\
\n\
# coordinates of the top left corner of the box\n\
int64 x\n\
int64 y\n\
\n\
# wigth of the box\n\
int64 width\n\
\n\
# height of the box\n\
int64 height\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::pal_vision_msgs::HogDetection_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.imageBoundingBox);
      stream.next(m.direction);
      stream.next(m.hog);
      stream.next(m.principalEigenVectorRGB);
      stream.next(m.rgbClusterCenters);
      stream.next(m.rgbDescriptor1);
      stream.next(m.rgbDescriptor2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HogDetection_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::HogDetection_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::HogDetection_<ContainerAllocator>& v)
  {
    s << indent << "imageBoundingBox: ";
    s << std::endl;
    Printer< ::pal_vision_msgs::Rectangle_<ContainerAllocator> >::stream(s, indent + "  ", v.imageBoundingBox);
    s << indent << "direction: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.direction);
    s << indent << "hog[]" << std::endl;
    for (size_t i = 0; i < v.hog.size(); ++i)
    {
      s << indent << "  hog[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.hog[i]);
    }
    s << indent << "principalEigenVectorRGB: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.principalEigenVectorRGB);
    s << indent << "rgbClusterCenters[]" << std::endl;
    for (size_t i = 0; i < v.rgbClusterCenters.size(); ++i)
    {
      s << indent << "  rgbClusterCenters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "    ", v.rgbClusterCenters[i]);
    }
    s << indent << "rgbDescriptor1[]" << std::endl;
    for (size_t i = 0; i < v.rgbDescriptor1.size(); ++i)
    {
      s << indent << "  rgbDescriptor1[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.rgbDescriptor1[i]);
    }
    s << indent << "rgbDescriptor2[]" << std::endl;
    for (size_t i = 0; i < v.rgbDescriptor2.size(); ++i)
    {
      s << indent << "  rgbDescriptor2[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.rgbDescriptor2[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_HOGDETECTION_H
