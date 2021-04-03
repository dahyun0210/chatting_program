#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "basic_node");
  ros::NodeHandle nh;

  int box_1 = 0;

  while (box_1 < 11)
  {
    std::cout << "20704김다현 : " << box_1 << std::endl;
    box_1++;
  }

  return 0;
}


