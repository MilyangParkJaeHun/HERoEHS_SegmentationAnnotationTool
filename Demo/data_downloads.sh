#!/bin/bash

wget --no-check-certificate 'https://docs.google.com/uc?export=download&id=1cbYeeeE0zcdZDASYOORRRaa6UdisfvHg' -O data.tar.xz
tar -xvf data.tar.xz
rm data.tar.xz
