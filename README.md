# Segmentation Annotation Tool for HERoEHS
HERoEHS_SegmentationAnnotationTool supports HSV filter for masking a wide area such as soccer field.  
This tool was developed to collect training data for the segmentation model to be used in RoboCup.

<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134415350-c6944676-ee50-4a09-a359-4a7043d1aa04.png width="800" height="500">
</p>

By ParkJaeHun

## Build Environments
- Ubuntu 18.04
- CMake 3.16.3
- Opencv 4.2.0
- QT 5.12.8

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
1. Create an instance of the desired class.

	- "+" : add a instance
	- "-" : delete a instance
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134408987-f772889a-d860-4f55-b4da-1c660c27e661.gif width="800" height="500">
</p>
2. Adjust HSV filter to show only the selected instance.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134408994-def351a5-470c-4847-aa72-05cf8ac394e0.gif width="800" height="500">
<img src=https://user-images.githubusercontent.com/22341340/134409004-a33831ff-0ce4-4603-9263-eef3bc9c867a.gif width="800" height="500">
</p>
3. Manually draw the area not drawn with HSV filter.

	- Click and hold the left mouse button to draw.
	- By setting "Circle size", the size of the drawn area can be adjusted.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134409013-92e572d2-838f-4518-887d-7e7cf31aff17.gif width="800" height="500">
</p>
4. Fill in empty areas with the fill color function.
	
	- Choose instance you want to fill
	- Click "fill color" button.
	- Click the area you want to fill.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134409019-ed96f044-514a-4ae0-952b-64a07c17895a.gif width="800" height="500">
<img src=https://user-images.githubusercontent.com/22341340/134409022-57c82e2c-bc1f-449e-a89b-5e354437f500.gif width="800" height="500">
</p>
5. Draw background using "fill color" function and maual click.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134409023-a4140bc5-87fa-4600-90b6-17985d256ff6.gif width="800" height="500">
</p>
6. Save mask.
	- Click "Watershed" button to run watershed algorithm.
	- Click "Save" to save labeling.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134409029-a64acb94-cf76-4c9e-9cef-b4b093fe413a.gif width="800" height="500">
</p>
7. Results example.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134409030-fa273308-9d10-4b14-ad7a-f6baf2272a78.gif width="800" height="500">
</p>
8. Next image.

	- The previous value of HSV filter is stored.
	- Choose instance you want to label.
	- Click "Load" button to load the previous value of HSV filter.
<p align="center">
<img src=https://user-images.githubusercontent.com/22341340/134409818-749ab876-7e89-40d1-95bf-b784f699dda6.gif width="800" height="500">
</p>
	
## Reference
This tool was developed based on [InstanceSegmentationAnnotationTool](https://github.com/KITECH-AI-LAB/InstanceSegmentationAnnotationTool.git).
- https://github.com/KITECH-AI-LAB/InstanceSegmentationAnnotationTool.git
- https://github.com/abreheret/PixelAnnotationTool
- https://github.com/developer0hye/Yolo_Label
