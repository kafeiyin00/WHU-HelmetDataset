# WHU-Helmet Dataset

The complete data set will be released after the peer-reviewed paper is accepted.

Main web page of our group : http://3s.whu.edu.cn/ybs/index.htm

![](https://pic.imgdb.cn/item/62b0366d0947543129e8cb24.jpg)


![](https://pic.imgdb.cn/item/62b036f70947543129e9a739.jpg)



# 1. Hardware configuration 



![image](https://user-images.githubusercontent.com/52630624/229660634-67254e65-dd60-4ed4-bc42-d0b896cfe5c8.png)

Mechanical structure design of the WHU-Helmet. (a) Head-mounted system. (b) Head-mounted system with a reference FOG (Fiber Optic Gyro) IMU.

![image](https://user-images.githubusercontent.com/52630624/229660876-3a5f2655-56f1-4bcf-93ca-6f520a5871c6.png)

Coordinate systems involved in the Helmet system.

# 2. Dataset overview

![image](https://user-images.githubusercontent.com/52630624/229661666-883be4d6-b9c7-4037-afcb-13b8a50186f6.png)

## 2.1 Forest

![image](https://user-images.githubusercontent.com/52630624/229661132-b2f69659-47d2-4a15-85f2-8bad25b7edf6.png)

## 2.2 Mountain

![image](https://user-images.githubusercontent.com/52630624/229661157-c8d47a0c-deee-4c66-a616-f0df8d261f08.png)

## 2.3 Underground

![image](https://user-images.githubusercontent.com/52630624/229661197-8c3d84d6-1174-4b79-8382-8809972fe070.png)

![image](https://user-images.githubusercontent.com/52630624/229661222-0f3ba1a7-fa16-48f2-afdf-9ac6446b0ee8.png)

![image](https://user-images.githubusercontent.com/52630624/229661235-6b9b8a92-0e96-43f9-85bb-c389539ad8e0.png)

## 2.4 Infrastructure

![image](https://user-images.githubusercontent.com/52630624/229661266-0b8174c3-513c-4b2d-aece-797533f24a3d.png)

## 2.5 Heritage 

![image](https://user-images.githubusercontent.com/52630624/229661281-ec456620-8a16-40c0-adea-c496c41b8be0.png)

![image](https://user-images.githubusercontent.com/52630624/229661290-13c4f0b7-65f2-4fbb-8e09-ba28d72878fb.png)

## 2.6 Road side

![image](https://user-images.githubusercontent.com/52630624/229661320-a8e3a589-ec62-480c-89c1-bf54cd8778d7.png)

![image](https://user-images.githubusercontent.com/52630624/229661335-a2c742c5-b4c6-46d9-9f83-e0ce55e3eec6.png)

![image](https://user-images.githubusercontent.com/52630624/229661344-45ffc3fe-e494-431b-8d03-3dbdd49bc300.png)

## 2.7 Calibration
we provide the extrinsic parameters for LiDAR-IMU，LiDAR-camera, and camera intrinsic parameters in the calibration folder.

The extrinsic parameters of LiDAR-IMU are calculated using the AFLI-Calib method which will be available soon. 

Weitong Wu, Jianping Li, Chi Chen, Bisheng Yang,et al., AFLI-Calib: Robust LiDAR-IMU extrinsic self-calibration based on adaptive frame length LiDAR odometry. ISPRS Jouranl of Photogrammetry and Remote Sensing, 2023.

## 2.8 Run Dataset
### Data preprocess (Important)
We provide the rosbag (link) for running. Before you play the bag, use the rosbag_edit.cpp
to preprocess the data.


`rosrun your_package_name rosbag_edit_node $input_rosbag_path $output_rosbag_path
`
### Example for running [fast-lio2] (https://github.com/hku-mars/FAST_LIO)
In the config_file folder, We provide the config file  for running fast-lio2. You can easily use it for running.




## 2.9 Evaluation of SOTA SLAM
### 2.9.1 Evaluation Tool and Criteria 
We use [evo](https://github.com/MichaelGrupp/evo) to evaluate results with four metrics:  
* APE_Trans(m): Absolute pose error about translation.
* APE_Angle(deg): Absolute pose error about angle.
* RPE_Trans(m/frame): Relative pose error about translation.
* RPE_Angle(deg/frame): Relative pose error about angle.
### 2.9.2 Results of SOTA Algorithm
We test our dataset using [Fast_lio](https://github.com/hku-mars/FAST_LIO), [LIO_Livox](https://github.com/Livox-SDK/LIO-Livox) , [LOAM_Livox](https://github.com/hku-mars/loam_livox) and [MULLS](https://github.com/YuePanEdward/MULLS). The following are results:								
![image](https://user-images.githubusercontent.com/52630624/199044683-ebec2893-fd60-42a1-a96d-fada7ea65fee.png)









