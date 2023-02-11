//
//  DeviceControl.cpp
//  SmartHomeSystem
//
//  Created by Ta Thanh Nam on 11/02/2023.
//

#include "DeviceControl.hpp"
#include <iostream>

void turnOnAirCon(Room &room) {
    room.setAirConStatus(true);
    room.setAirConTemperature(25); //default temperature when turn on the air-conditioner
    std::cout << "Air conditioner in " << room.getName() << " is turned on" << std::endl;
}

void turnOffAirCon(Room &room) {
    room.setAirConStatus(false);
    room.setAirConTemperature(NULL);
    std::cout << "Air conditioner in " << room.getName() << " is turned off" << std::endl;
}

void setAirConTemperature(Room &room, int temperature) {
    room.setAirConTemperature(temperature);
    std::cout << "Air conditioner temperature in " << room.getName() << " is set to " << temperature << std::endl;
}

void turnOnLED(Room &room) {
    room.setLEDStatus(true);
    std::cout << "LED in " << room.getName() << " is turned on" << std::endl;
}

void turnOffLED(Room &room) {
    room.setLEDStatus(false);
    std::cout << "LED in " << room.getName() << " is turned off" << std::endl;
}

void returnDeviceStatus(Room &room) {
    std::cout << "Air-conditioner status: " << room.getAirConStatus() << std::endl;
    std::cout << "LED light status: " << room.getLEDStatus() << std::endl;
    std::cout << "Air-conditioner temperature: " << room.getAirConTemperature() << std::endl;
}



