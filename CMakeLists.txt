cmake_minimum_required(VERSION 3.1.0)

project(HERoEHS_SegmentationAnnotationTool)

if(UNIX)
	set(CMAKE_CXX_STANDARD 17)
endif()
set(QT5_DIR "/usr/lib/x86_64-linux-gnu/cmake" CACHE STRING "Additional search paths for QT5")
set(OpenCV_DIR "/opencv/opencv-4.2.0/build")

set(CMAKE_AUTOMOC ON)

if(WIN32)
	if(CMAKE_CL_64)
		set(ARCH_TYPE x64)
	elseif((CMAKE_GENERATOR MATCHES "ARM") OR ("${arch_hint}" STREQUAL "ARM") OR 	(CMAKE_VS_EFFECTIVE_PLATFORMS MATCHES "ARM|arm"))
		set(ARCH_TYPE ARM)
	else()
		set(ARCH_TYPE x86)
	endif()
elseif(UNIX)
	set(ARCH_TYPE x86_64)
endif()

find_path(Qt5Widgets_DIR Qt5WidgetsConfig.cmake PATHS "${QT5_DIR}/Qt5Widgets" )
find_path(Qt5Gui_DIR Qt5GuiConfig.cmake         PATHS "${QT5_DIR}/Qt5Gui"     )

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${CMAKE_CURRENT_BINARY_DIR} ${OpenCV_INCLUDE_DIRS})

qt5_wrap_ui(UI_HEADER GUI/HERoEHS_SegmentationAnnotationTool.ui )
qt5_add_resources(RESOURCE_FILE GUI/HERoEHS_SegmentationAnnotationTool.qrc)
INCLUDE_DIRECTORIES( include )
add_executable(HERoEHS_SegmentationAnnotationTool MACOSX_BUNDLE WIN32
    src/HERoEHS_SegmentationAnnotationTool.cpp
	include/HERoEHS_SegmentationAnnotationTool.h
    src/HSAT.cpp
	include/HSAT.h
	src/utils.cpp
	include/utils.h
	src/main.cpp
	${UI_HEADER}
	${RESOURCE_FILE}
	GUI/HERoEHS.rc)

target_link_libraries(HERoEHS_SegmentationAnnotationTool Qt5::Gui Qt5::Widgets ${OpenCV_LIBS})	

set(OpenCV_BIN ${OpenCV_LIB_PATH}/../bin)
