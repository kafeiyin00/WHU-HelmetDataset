# WHU-Helmet Dataset

The complete data set will be released after the peer-reviewed paper is accepted.

Main web page of our group : http://3s.whu.edu.cn/ybs/index.htm

![](https://pic.imgdb.cn/item/62b0366d0947543129e8cb24.jpg)


![](https://pic.imgdb.cn/item/62b036f70947543129e9a739.jpg)



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
We test our dataset using [Fast_lio](https://github.com/hku-mars/FAST_LIO), [LIO_Livox](https://github.com/Livox-SDK/LIO-Livox) and [LOAM_Livox](https://github.com/hku-mars/loam_livox). The following are results:							
![image](https://user-images.githubusercontent.com/52630624/176693562-a29f58b2-b9b3-4150-b6b7-eafe6ba1d7a6.png)








