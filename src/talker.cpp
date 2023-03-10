#include "ros/ros.h"
#include "std_msgs/String.h"
#include "visualization_msgs/Marker.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;

  // TODO: create a publisher

  ros::Rate loop_rate(1);

  int offset = 0;
  while (ros::ok())
  {
    // Set the shape
    uint32_t shape = visualization_msgs::Marker::CUBE;
    visualization_msgs::Marker marker;
    marker.header.frame_id = "my_frame";
    marker.header.stamp = ros::Time::now();
    marker.id = 0;
    marker.type = shape;
    marker.action = visualization_msgs::Marker::ADD;

    // Set the pose of the marker
    marker.pose.position.x = offset;
    marker.pose.position.y = 0;
    marker.pose.position.z = 0;
    marker.pose.orientation.x = 0.0;
    marker.pose.orientation.y = 0.0;
    marker.pose.orientation.z = 0.0;
    marker.pose.orientation.w = 1.0;

    // Set the scale of the marker -- 1x1x1 here means 1m on a side
    marker.scale.x = 1.0;
    marker.scale.y = 1.0;
    marker.scale.z = 1.0;

    // Set the color -- be sure to set alpha to something non-zero!
    marker.color.r = 255;
    marker.color.g = 0;
    marker.color.b = 0;
    marker.color.a = 1;

    marker.lifetime = ros::Duration(1e2);

    // TODO: publish the marker

    ros::spinOnce();

    loop_rate.sleep();

    ++offset;
    if (offset >= 3) {
      offset = 0;
    }
  }


  return 0;
}

// Answer: 
// int main(int argc, char **argv)
// {
//   ros::init(argc, argv, "talker");
//   ros::NodeHandle n;

//   ros::Publisher bbox_pub = n.advertise<visualization_msgs::Marker>("bbox", 1000);

//   ros::Rate loop_rate(1);

//   int offset = 0;
//   while (ros::ok())
//   {
//     // set the shape
//     uint32_t shape = visualization_msgs::Marker::CUBE;
//     visualization_msgs::Marker marker;
//     marker.header.frame_id = "my_frame";
//     marker.header.stamp = ros::Time::now();
//     marker.id = 0;
//     marker.type = shape;
//     marker.action = visualization_msgs::Marker::ADD;

//     // Set the pose of the marker
//     marker.pose.position.x = offset;
//     marker.pose.position.y = 0;
//     marker.pose.position.z = 0;
//     marker.pose.orientation.x = 0.0;
//     marker.pose.orientation.y = 0.0;
//     marker.pose.orientation.z = 0.0;
//     marker.pose.orientation.w = 1.0;

//     // Set the scale of the marker -- 1x1x1 here means 1m on a side
//     marker.scale.x = 1.0;
//     marker.scale.y = 1.0;
//     marker.scale.z = 1.0;

//     // Set the color -- be sure to set alpha to something non-zero!
//     marker.color.r = 255;
//     marker.color.g = 0;
//     marker.color.b = 0;
//     marker.color.a = 1;

//     marker.lifetime = ros::Duration(1e2);

//     bbox_pub.publish(marker);
//     ROS_INFO("publishing bounding box number %d", offset);

//     ros::spinOnce();

//     loop_rate.sleep();

//     ++offset;
//     if (offset >= 3) {
//       offset = 0;
//     }
//   }


//   return 0;
// }