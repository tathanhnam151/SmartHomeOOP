//
//  DeviceStatus.hpp
//  SmartHomeSystem
//
//  Created by Ta Thanh Nam on 11/02/2023.
//

// DevicesStatus.h
#ifndef DEVICESTATUS_HPP
#define DEVICESTATUS_HPP

#include <string>

class Room {
    private:
        std::string name;
        bool airConStatus;
        int airConTemperature;
        bool LEDStatus;
    
    public:
        Room(std::string name);

        std::string getName();
        bool getAirConStatus();
        int getAirConTemperature();
        bool getLEDStatus();

        void setAirConStatus(bool status);
        void setAirConTemperature(int temperature);
        void setLEDStatus(bool status);
};

class Devices {
    private:
        Room room1;
        Room room2;
    
    public:
        Devices();

        Room getRoom1();
        Room getRoom2();
};

#endif
