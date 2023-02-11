Introduction
This program is designed to control devices in a smart house system. The program is implemented using object-oriented programming (OOP) concepts in C++.

Files
The program consists of three C++ files:

DeviceStatus.cpp: Initializes the status of the devices in the rooms.
DeviceControl.cpp: Includes functions that can receive or modify the status of the devices.
Main.cpp: The main function that demonstrates the use of the program.
Functionalities
The program has the following functionalities:

Setting the status of the devices in the rooms.
Turning on and off air-conditioner in the rooms.
Setting the temperature of the air-conditioner in the rooms.
Turning on and off LED in the rooms.
Displaying the status of the devices in the selected room.
Usage
To use the program, run the Main.cpp file in a C++ compiler. The program will prompt you with a menu to choose the desired operation.

OOP concepts demonstrated
The program demonstrates the following OOP concepts:

Encapsulation: The status of the devices in the rooms is encapsulated within the Room class and is protected from external access.
Inheritance: The Room class inherits the properties and methods of the Devices class.
Polymorphism: The turnOn() and turnOff() methods in the Devices class can be overridden in the Room class to provide different implementations.
Abstraction: The Devices class provides an abstract representation of the devices in the rooms, and the Room class provides a concrete implementation of the devices.
Conclusion
This program demonstrates the implementation of object-oriented programming concepts in a smart house system. The program provides a menu to interact with the devices and control their status.
