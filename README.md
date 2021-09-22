# Segmentation Annotation Tool for HERoEHS
HERoEHS_SegmentationAnnotationTool supports hsv filter for masking a wide area such as soccer field.  
This tool was developed to collect training data for the segmentation model to be used in RoboCup

By ParkJaeHun

## Build Environments
- Ubuntu 18.04
- Opencv 3.4.6
- QT 5.12.9
- python 3.7.5

## Build on Linux
1. Edit CMakeList.txt to set Qt and Opencv path (8-9 lines)
	```
	$ vi CMakeLists.txt
	```
	```
	set(QT5_DIR "/usr/lib/x86_64-linux-gnu/cmake" CACHE STRING "Additional search paths for QT5")
	set(OpenCV_DIR "/opencv/opencv-4.2.0/build")
	```
2. Build
	```
	$ cmake CMakeLists.txt
	$ make all
	```

## Demo Run
1. Downloads demo data.
	```
	$ cd /path/to/repo/Demo
	$ source data_downloads.sh
	```
2. Edit configuration files.
	- class_file_path.txt : where the obj.names file exists  
		```
		$ vi /path/to/repo/config/obj.names
		```
	- img_dir_paht.txt : where the image file resides  
		```
		$ vi /path/to/repo/config/img_dir_path.txt
		```
	- obj.names : object name list to recognize  
		```
		grass  
		line
		```			
3. Run
	```
	$ ./HERoEHS_SegmentationAnnotationTool
	```

## Docker
1. Create docker image
	```
	$ docker build -t seg_tool:base -f Dockerfile .
	```
2. Run container
	```
	$ xhost +local:root > /dev/null 2>&1
	$ docker run --gpus all -it \
		-e DISPLAY=$DISPLAY \
		-v /tmp/.X11-unix:/tmp/.X11-unix \
		--ipc=host \
		--name seg_tool \
		--privileged \
		seg_tool:base /bin/bash
	```

## How to use
1. 원하는 클래스의 인스턴스 생성
2. hsv filter 를 조절하여 인스턴스만 보이게 조절
<div align="center">
<img width="612" alt="0-2" src="https://user-images.githubusercontent.com/54341546/104527896-3531f580-5649-11eb-855e-477d844c148e.PNG">
<div align="left">
	
## Reference
- https://github.com/MilyangParkJaeHun/InstanceSegmentationAnnotationTool.git
- https://github.com/abreheret/PixelAnnotationTool
- https://github.com/developer0hye/Yolo_Label
