cmake_minimum_required(VERSION 3.0.2)
project(beginner_tutorial_demo)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  visualization_msgs
  genmsg
)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs visualization_msgs)

## Declare a catkin package
catkin_package()

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

# find_package(catkin REQUIRED COMPONENTS roslaunch)
# roslaunch_add_file_check(launch)

add_executable(talker src/talker.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
add_dependencies(talker beginner_tutorial_demo_generate_messages_cpp)

add_executable(listener src/listener.cpp)
target_link_libraries(listener ${catkin_LIBRARIES})
add_dependencies(listener beginner_tutorial_demo_generate_messages_cpp)