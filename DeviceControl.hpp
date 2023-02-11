//
//  DeviceControl.hpp
//  SmartHomeSystem
//
//  Created by Ta Thanh Nam on 11/02/2023.
//

#ifndef DEVICECONTROL_HPP
#define DEVICECONTROL_HPP

#include "DeviceStatus.hpp"

void turnOnAirCon(Room &room);
void turnOffAirCon(Room &room);
void setAirConTemperature(Room &room, int temperature);
void turnOnLED(Room &room);
void turnOffLED(Room &room);
void returnDeviceStatus(Room &room);

#endif
