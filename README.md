# WHU-Helmet Dataset

The complete data set will be released after the peer-reviewed paper is accepted.

# 1. Hardware configuration 



<img src="https://pic.imgdb.cn/item/6284bbfd09475431295a2f1f.jpg" style="zoom: 67%;" />

Mechanical structure design of the WHU-Helmet. (a) Head-mounted system. (b) Head-mounted system with a reference FOG (Fiber Optic Gyro) IMU.

<img src="https://pic.imgdb.cn/item/6284bc3409475431295a7936.jpg" style="zoom: 80%;" />

Coordinate systems involved in the Helmet system.

# 2. Dataset overview

<img src="https://pic.imgdb.cn/item/6284c8d709475431296abbe3.jpg" style="zoom: 80%;" />

## 2.1 Forest

<img src="https://pic.imgdb.cn/item/6284c9dd09475431296c0ca0.jpg" style="zoom:80%;" />

## 2.2 Mountain

<img src="https://pic.imgdb.cn/item/6284ca0709475431296c4009.jpg" style="zoom:80%;" />

## 2.3 Underground

<img src="https://pic.imgdb.cn/item/6284ce9509475431297180d5.jpg"  />

![](https://pic.imgdb.cn/item/6284cec9094754312971bbbc.jpg)

![](https://pic.imgdb.cn/item/6284cef2094754312971e897.jpg)

## 2.4 Infrastructure

![](https://pic.imgdb.cn/item/6284cf150947543129720b42.jpg)

## 2.5 Heritage 

![](https://pic.imgdb.cn/item/6284cf610947543129725b7d.jpg)

![](https://pic.imgdb.cn/item/6284cf770947543129727749.jpg)

## 2.6 Road side

![](https://pic.imgdb.cn/item/6284d00b0947543129730f5d.jpg)

<img src="https://pic.imgdb.cn/item/6284d0260947543129732e3e.jpg" style="zoom: 80%;" />

![](https://pic.imgdb.cn/item/6284d0400947543129734dc2.jpg)



## 2.7 Evaluation of SOTA SLAM
### 2.7.1 Evaluation Tool and Criteria 
We use [evo](https://github.com/MichaelGrupp/evo) to evaluate results with four metrics:  
* APE_Trans(m): Absolute pose error about translation.
* APE_Angle(deg): Absolute pose error about angle.
* RPE_Trans(m/frame): Relative pose error about translation.
* RPE_Angle(deg/frame): Relative pose error about angle.
### 2.7.2 Results of SOTA Algorithm
We test our dataset using [Fast_lio](https://github.com/hku-mars/FAST_LIO) and [Faster_Lio](https://github.com/gaoxiang12/faster-lio). 									
![image](https://user-images.githubusercontent.com/52630624/172034516-7ef5ea8c-1175-43e1-906d-4aebfc7a88e6.png)										
![image](https://user-images.githubusercontent.com/52630624/172034536-153172ba-858d-4297-b96a-479d06b38ca7.png)									
![image](https://user-images.githubusercontent.com/52630624/172034559-53db4f73-d22b-45ae-ad01-1a6d51b59efe.png)
![image](https://user-images.githubusercontent.com/52630624/172034570-111ee87e-8697-4cd2-8f08-611de41ad384.png)									
![image](https://user-images.githubusercontent.com/52630624/172034578-f8d8e7a4-b86b-4034-912a-7eb0a0a17981.png)
![image](https://user-images.githubusercontent.com/52630624/172034591-b231b336-c20b-4c40-a76a-b036dc86940b.png)





