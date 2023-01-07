# CSE499-Traffic-Control-System
## The Project Name
#### An Intelligent Traffic Control System for Trouble-free Movement of Ambulances and Fire Trucks on Heavy Traffic Roads in Bangladesh Using YOLOv5 Algorithm and GSM Module
## Project Pipelines
### Data Collection and Labelling:
#### We collected the images of ambulances, fire trucks and other vehicles from the Open source Images and google. We used Make Sense AI for labelling the images. Make Sense AI is a freeto-use online tool for labelling images which makes the process of preparing a dataset much easier and faster.
### Training and Testing:
#### Using YOLOv5 Algorithm. YOLO (You Only Look Once) is a deep learning algorithm that uses neural networks to provide real-time object detection. It is popular because of its speed and accuracy. 
### For Real-Time Detection:
#### For Real-time detection, we have downloaded the yolov5 GitHub repository and we follow this YouTube link https://youtu.be/gDoMYuyY_qw
### Serial Connection: 
#### For sending signals to Arduino we have used serial communication. Also, we modified the detect.py file in yolov5 repository to connect real time detection with Arduino.
#### https://create.arduino.cc/projecthub/ansh2919/serial-communication-between-python-and-arduino-e7cce0
