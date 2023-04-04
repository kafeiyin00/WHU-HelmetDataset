///rosbag rewrite, and reorganize data by header timestamp
///support sensor_msgs::IMU CompressedImage and livox msg
///Create Time: 2022.6.12
///Update Time: 2022.11.10: IMU msg preprocess, change the coordinate system and change degree to rad for helmet data
///Author: WeitongWu, Wuhan University
///Contact: wwtgeomatics@gmail.com

#include <livox_ros_driver/CustomMsg.h>
#include <ros/ros.h>
#include <rosbag/bag.h>
#include <rosbag/view.h>
#include <sensor_msgs/CompressedImage.h>
#include <sensor_msgs/Imu.h>

using namespace std;

int main(int argc, char **argv) {

    std::string bag_in_path = argv[1];
    std::string bag_out_path = argv[2];
    rosbag::Bag bag_in, bag_out;
    bag_in.open(bag_in_path);
    bag_out.open(bag_out_path, rosbag::bagmode::Write);
    for (auto &m : rosbag::View(bag_in)) {
        if (m.isType<sensor_msgs::Imu>()) {
            sensor_msgs::Imu imu_msg = *m.instantiate<sensor_msgs::Imu>();
            sensor_msgs::Imu imu_msg_tmp = *m.instantiate<sensor_msgs::Imu>();
            if (0)
            {
                //for Avia
                imu_msg.angular_velocity.x = -imu_msg_tmp.angular_velocity.y / 180.0 * M_PI;
                imu_msg.angular_velocity.y = -imu_msg_tmp.angular_velocity.z / 180.0 * M_PI;
                imu_msg.angular_velocity.z = imu_msg_tmp.angular_velocity.x / 180.0 * M_PI;
                imu_msg.linear_acceleration.x = -imu_msg_tmp.linear_acceleration.y;
                imu_msg.linear_acceleration.y = -imu_msg_tmp.linear_acceleration.z;
                imu_msg.linear_acceleration.z = imu_msg_tmp.linear_acceleration.x;
            }else{
                //for Mid70
                imu_msg.angular_velocity.x = imu_msg_tmp.angular_velocity.y / 180.0 * M_PI;
                imu_msg.angular_velocity.y = imu_msg_tmp.angular_velocity.z / 180.0 * M_PI;
                imu_msg.angular_velocity.z = imu_msg_tmp.angular_velocity.x / 180.0 * M_PI;
                imu_msg.linear_acceleration.x = imu_msg_tmp.linear_acceleration.y;
                imu_msg.linear_acceleration.y = imu_msg_tmp.linear_acceleration.z;
                imu_msg.linear_acceleration.z = imu_msg_tmp.linear_acceleration.x;
            }
            bag_out.write("/imu0", imu_msg.header.stamp, imu_msg);
        }
        if (m.isType<livox_ros_driver::CustomMsg>()) {
            auto lidar_msg = m.instantiate<livox_ros_driver::CustomMsg>();
            bag_out.write("/livox/lidar", lidar_msg->header.stamp, lidar_msg);
        }
        if(m.isType<sensor_msgs::CompressedImage>()){
            auto image_msg = m.instantiate<sensor_msgs::CompressedImage>();
            bag_out.write("/camera0/compressed", image_msg->header.stamp, image_msg);
        }
    }
    bag_in.close();
    bag_out.close();

}
