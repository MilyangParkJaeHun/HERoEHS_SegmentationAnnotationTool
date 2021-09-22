FROM nvidia/cudagl:11.0-devel-ubuntu20.04 AS base-image
ARG USERNAME=park

# install requirements
RUN apt-get -y update && apt-get -y upgrade && \
    DEBIAN_FRONTEND="noninteractive" TZ="Asia/Seoul" \
    apt-get -y install \
        lsb-release \
        cmake git curl wget \
        sudo pkg-config unzip \
        libjpeg-dev libtiff5-dev libpng-dev \
        libavcodec-dev libavformat-dev libswscale-dev libxvidcore-dev libx264-dev libxine2-dev \
        libv4l-dev v4l-utils \
        libgstreamer1.0-dev libgstreamer-plugins-base1.0-dev \
        libgtk2.0-dev \
        mesa-utils libgl1-mesa-dri libgtkgl2.0-dev libgtkglext1-dev \
        python3-dev python3-pip && \
        pip3 install numpy

# OpenCV
RUN mkdir -p opencv && \
    cd opencv && \
    wget -O opencv.zip https://github.com/opencv/opencv/archive/4.2.0.zip && \
    unzip opencv.zip && \
    wget -O opencv_contrib.zip https://github.com/opencv/opencv_contrib/archive/4.2.0.zip && \
    unzip opencv_contrib.zip && \
    rm opencv.zip && \
    rm opencv_contrib.zip

RUN mkdir -p /opencv/opencv-4.2.0/build && \
    cd /opencv/opencv-4.2.0/build && \
    cmake -D CMAKE_BUILD_TYPE=RELEASE \
    -D CMAKE_INSTALL_PREFIX=/usr/local \
    -D WITH_TBB=OFF \
    -D WITH_IPP=OFF \
    -D WITH_1394=OFF \
    -D BUILD_WITH_DEBUG_INFO=OFF \
    -D BUILD_DOCS=OFF \
    -D INSTALL_C_EXAMPLES=ON \
    -D INSTALL_PYTHON_EXAMPLES=ON \
    -D BUILD_EXAMPLES=OFF \
    -D BUILD_TESTS=OFF \
    -D BUILD_PERF_TESTS=OFF \
    -D WITH_QT=OFF \
    -D WITH_GTK=ON \
    -D WITH_OPENGL=ON \
    -D OPENCV_EXTRA_MODULES_PATH=../../opencv_contrib-4.2.0/modules \
    -D WITH_V4L=ON  \
    -D WITH_FFMPEG=ON \
    -D WITH_XINE=ON \
    -D BUILD_NEW_PYTHON_SUPPORT=ON \
    -D OPENCV_GENERATE_PKGCONFIG=ON ../ && \
    cd /opencv/opencv-4.2.0/build && make -j8 && make install && ldconfig

# QT
RUN apt-get -y update && \
    DEBIAN_FRONTEND="noninteractive" TZ="Asia/Seoul" \
    apt-get -y install qt5-default qtcreator

RUN apt-get clean && \
	rm -rf /var/lib/apt/lists/*

# Tool
RUN ln -s /usr/include/x86_64-linux-gnu/sys/io.h /usr/include/io.h

# Add user
RUN useradd --user-group --system --create-home --no-log-init ${USERNAME} && \
    usermod -aG sudo ${USERNAME}

USER ${USERNAME}

RUN cd /home/${USERNAME} && \
    git clone https://github.com/MilyangParkJaeHun/HERoEHS_SegmentationAnnotationTool.git && \
    cd HERoEHS_SegmentationAnnotationTool && \
    cmake CMakeLists.txt && \
    make all

WORKDIR /home/${USERNAME}

CMD ["/bin/bash"]