#include "ros/ros.h"
#include "std_msgs/String.h"
#include "visualization_msgs/Marker.h"

void colorCB(const visualization_msgs::Marker::ConstPtr& msg) {
  ROS_INFO("X offset is %f", msg->pose.position.x);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  // TODO: create a subscriber

  ros::spin();
  return 0;
}

// Answer
// void colorCB(const visualization_msgs::Marker::ConstPtr& msg) {
//   ROS_INFO("X offset is %f", msg->pose.position.x);
// }

// int main(int argc, char **argv)
// {
//   ros::init(argc, argv, "listener");

//   ros::NodeHandle n;

//   ros::Subscriber color_sub = n.subscribe("bbox", 1000, colorCB);

//   ros::spin();
//   return 0;
// }
