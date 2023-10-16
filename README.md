# Wheelchair Control System with Voice and Hand Gesture Commands


## Project Overview

This project aims to create a Wheelchair control system that responds to voice commands and hand gestures. The system is based on an Arduino board and uses flex sensors for hand gestures recognition, along with ultrasonic sensors for obstacle detection. The system can move in various directions like forward, backward, left, and right, as well as stop when needed.

## Features

- Control the wheelchair using voice commands and hand gestures.
- Obstacle detection and automatic stopping.
- Easy to customize and expand.

## Components Needed

- Arduino board
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/5b7cd282-bb12-4081-935c-8d8a16194fd1)
- Flex sensors
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/3c434f94-ae4b-4a93-ae37-ab2b57c56616)
- Ultrasonic sensors
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/d11234ba-ece7-4ecf-b2ed-c286b3e21c05)
- Motor driver
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/393189f7-f805-4eb2-9de8-9ff843729753)
- DC motors
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/f3b4ca85-0d3c-4c65-8c68-8c95881d24c8)
- Buzzer
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/da926cfb-da13-4f44-b7d6-21003e323a17)
- Batteries or power supply
  
  ![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/a14805d8-1ee7-47c0-83c2-23a32be767af)

- Chassis for the wheelchair


## Block Diagram of the System

![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/9f788ebe-d05e-4992-83d3-b99972ef111f)


## Setup

1. Connect the flex sensors to the Arduino board.
2. Attach the ultrasonic sensors for obstacle detection.
3. Connect the motor driver to control the wheelchair's motors.
4. Upload the Arduino code to the board.

## connections

![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/120e2b28-8e38-441b-bffb-d4458ab6f41f)
![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/7b71820d-cd9c-4797-b16c-9a5df9cab6d0)
![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/aabcaf55-fc70-4c19-b860-a00e71fd2b26)
![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/8746cab4-8aef-4d58-94c9-eecb703d0715)


## Usage

### Hand Gesture Control

- Bend your index finger to move forward.
- Bend your index and middle fingers together to stop.
- Bend your middle finger to move backward.
- Bend your ring finger to move right.
- Bend your little finger to move left.

###Hand glove

![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/dc6788b7-4d7a-4c86-a079-fbead3063752)


### Voice Control

You can send voice commands to control the wheelchair. Send the following commands over serial communication:

- "*forward#" to move forward.
- "*backward#" to move backward.
- "*right#" to move right.
- "*left#" to move left.
- "*stop#" to stop the wheelchair.

### User Interface of the application to control Wheelchair.

![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/0ff5c177-ef01-4e37-b4e6-13496f852f05)

The system also includes obstacle detection using ultrasonic sensors. If an obstacle is detected, the wheelchair will automatically stop and trigger a buzzer to alert the user.

## Customization

You can customize and expand this project by adding additional features or improving the control mechanisms. You can also add remote control features or integrate other sensors for more advanced functionality.

prototype

![image](https://github.com/Jsujanchowdary/Wheelchair-using-voice-commands-and-hand-gestures-based-on-Arduino-/assets/91127394/25664af1-00e3-4c5d-b15a-61861ba243a0)


