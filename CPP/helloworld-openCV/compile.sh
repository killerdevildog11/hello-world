#!/bin/bash

sudo apt install libopencv-*

g++ *.cpp -o main -lopencv_core -lopencv_imgproc -lopencv_highgui