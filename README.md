# KaShi
RC car made for the purpose of participation in competition. 

 Components & Materials
- Arduino Uno & Connector
- Jumpers
- Li-ion battery 3S: ~12V
- FX-R6B Receiver
- FS-i6 Transmitter
- L298N (2C) Motor Driver
- DC Motors x4
- Chassis, Motor Wheels x4,
- Glue gun,Soldering iron, Double Tapes
# Working Idea
RC Car is an a wireless remote-controlled car designed to autonomously navigate and avoid obstacles, ensuring it reaches its destination in the shortest time possible. By using the transmitter and receiver system, the position of the joystick controls are transmitted to the Arduino, which manages the RC car's direction and speed. Specifically, the left joystick is used to regulate the car's speed, allowing for acceleration and deceleration, while the right joystick controls the car's direction, enabling precise steering. The Arduino interprets these joystick movements and translates them into corresponding commands that adjust both the speed and steering of the RC car, ensuring responsive and accurate control.
# Code (Arduino)
Written on Arduino. There are two version: 
- Casewise/Conditional high-lows (_Used in NIRMAN-2.0_)  
    Codes: v0 and v3   
- PID (_Used in Wissenaire-23_)  
    Codes: v20,v21,v22,v32,v4
    v4 being the latest.  
    _Note_  that v4 code has an `speed(255,255)` in `//sharp left` case. This was a deliberate change to account for the multiple left turns in the track. This also helped in escaping a right loop, significantly reducing lap time.
# Circuit
Generic Design for motors with 5 sensors to arduino.
### Wirings
![image](https://github.com/rtcniser/Line-Follower/assets/53950536/e95436d7-63af-44c6-8ded-38bf1dd8590b)

# Chassis 
### Design
- 17cm (height) X 14cm (width) body.
- Front panel to stick IR sensors
- Cover panel to sandwich and hold the motors.

Since the cut was made on 5mm acrylic, the front panel was not required in the final setup. _Note_ that using the front panel keeps all the sensors one line, as in a generic setup. _Otherwise_ it stays in an inverted V shape which can give some strategical advantage (like detecting crosses better).
### Irregularities/Errors 
The top screw holes might be a bit off. 
# Members
Aditya Kamble (Captain) - Chassis Design, Co-ordination  
[Vishal Meena](https://github.com/CodeScythe0) - Code, Algorithm  
Aayush Jelmeria - Co-ordination, Track Design  
Karan K. Sahoo - Chassis Design, Algorithm, Documentation
Sanat K. Behera - Chassis Design, Circuit  
S. Mahesh (Mentor) - Code, Algorithm, Working Idea  
[Girija S. Ray](https://github.com/Alpha3125) (Mentor) - Code, Track Design, Circuit, Documentation
