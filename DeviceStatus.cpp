//
//  DeviceStatus.cpp
//  SmartHomeSystem
//
//  Created by Ta Thanh Nam on 11/02/2023.
//

#include "DeviceStatus.hpp"
#include <iostream>

Room::Room(std::string name) {
    this->name = name;
    this->airConStatus = false;
    this->airConTemperature = 0;
    this->LEDStatus = false;
}

std::string Room::getName() {
    return this->name;
}

bool Room::getAirConStatus() {
    return this->airConStatus;
}

int Room::getAirConTemperature() {
    return this->airConTemperature;
}

bool Room::getLEDStatus() {
    return this->LEDStatus;
}

void Room::setAirConStatus(bool status) {
    this->airConStatus = status;
}

void Room::setAirConTemperature(int temperature) {
    this->airConTemperature = temperature;
}

void Room::setLEDStatus(bool status) {
    this->LEDStatus = status;
}

Devices::Devices() : room1("Room 1"), room2("Room 2") {}

Room Devices::getRoom1() {
    return this->room1;
}

Room Devices::getRoom2() {
    return this->room2;
}
