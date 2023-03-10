# ROS-tutorial
One simple example to learn about ROS1


#### System requirement
- Ubuntu 20.04 + ROS Noetic
  - Option I: [Using a VM on Windows](https://github.com/sutd-robotics/virtualbox-ubuntu-ros)
  - Option II: [Using Docker](https://varhowto.com/install-ros-noetic-docker/)    
  - Option III: Dual Boot! (There are lots of resources out there, and this is the most difficult option among the three. Choose with caution)

- Some of the above option might already contain installation steps for ROS Noetic, but if not, here is the [official installation document](http://wiki.ros.org/noetic/Installation/Ubuntu) 

## What does this repo do
### Write a simple publisher and subscriber with custom message type
1. create a workspace and its source folder
```bash
$ mkdir -p ~/catkin_ws/src
$ cd ~/catkin_ws
$ catkin_make
$ cd src
$ git clone git@github.com:ne-v0y/ROS-tutorial.git
$ cd ~/catkin_ws
$ catkin_make
$ source devel/setup.bash (source devel/setup.zsh)
```
2. creating a package in the `~/catkin_ws/src` folder
```bash
`catkin_create_pkg beginner_tutorial std_msgs roscpp rospy
```