#include "ros/ros.h"
#include "std_msgs/String.h"


//#include <boost/algorithm/string/replace.hpp>
//부스트 관련 함수
int main(int argc, char **argv)
{
  ros::init(argc, argv, "dh_basic_publisher_node");
  ros::NodeHandle nh;

  ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);

  ros::Rate loop_rate(60);


  std::string name;
  std::cout << "이름을 입력하세요 :";


  getline(std::cin, name);￣
  //boost::replace_all(name, " ", "_");
  //boost::replace_all(name, " ", "_");


  while (ros::ok())
  {

    std::string message;
    std::cout << "채팅을 입력하세요 :";
    std::cin >> message;

    std_msgs::String msg;
    msg.data = name + " : " + message;

    getline(std::cin, message);
    //띄어쓰기까지 있는 그대로 송출해줌

    // boost::replace_all(message, " ", "_");
    //띄어쓰기를 언더바로 바꿔줌





    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
