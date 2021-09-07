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
	set(QT5_DIR "/home/park/Qt5.12.9/5.12.9/gcc_64/lib/cmake" CACHE STRING "Additional search paths for QT5")
	set(OpenCV_DIR "/home/park/opencv/opencv-3.4.6/build")
	```
2. Cmake
	```
	$ cmake .
	```

## Run
1. Edit ./config/class_file_path.txt and ./config/img_dir_path.txt
	- class_file_path.txt : where the obj.names file exists  
			```
			/home/User/obj.names
			```
	- img_dir_paht.txt : where the image file resides  
			```
			/home/User/robocup2021/heroehs_cup/robocup_2021_segmentation_data
			```
	- obj.names : object name list to recognize  
			```
			grass  
			line
			```
			
2. Run
	```
	$ ./InstanceSegmentationAnnotationTool
	```

3. How to use
	

<div align="center">
<img width="612" alt="0-2" src="https://user-images.githubusercontent.com/54341546/104527896-3531f580-5649-11eb-855e-477d844c148e.PNG">
<div align="left">
	
## Reference
- https://github.com/MilyangParkJaeHun/InstanceSegmentationAnnotationTool.git
- https://github.com/abreheret/PixelAnnotationTool
- https://github.com/developer0hye/Yolo_Label
