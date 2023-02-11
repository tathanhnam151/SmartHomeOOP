//
//  main.cpp
//  SmartHomeSystem
//
//  Created by Ta Thanh Nam on 11/02/2023.
//

#include <iostream>
#include "DeviceStatus.hpp"
#include "DeviceControl.hpp"

int main() {
    Devices devices;
    Room room1 = devices.getRoom1();
    Room room2 = devices.getRoom2();
    int choice;
    int roomChoice;
    int temperature;
    
    while (true) {
        std::cout << "1. Room 1" << std::endl;
        std::cout << "2. Room 2" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cin >> roomChoice;
        if (roomChoice == 3) {
            break;
        }
        
        Room *selectedRoom;
        if (roomChoice == 1) {
            selectedRoom = &room1;
        } else if (roomChoice == 2) {
            selectedRoom = &room2;
        } else selectedRoom = NULL;
        
        std::cout << "1. Turn on air conditioning" << std::endl;
        std::cout << "2. Turn off air conditioning" << std::endl;
        std::cout << "3. Set air conditioning temperature" << std::endl;
        std::cout << "4. Turn on LED light" << std::endl;
        std::cout << "5. Turn off LED light" << std::endl;
        std::cout << "6. Devices Status Dashboard" << std::endl;
        std::cout << "Select action: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                turnOnAirCon(*selectedRoom);
                break;
            case 2:
                turnOffAirCon(*selectedRoom);
                break;
            case 3:
                std::cout << "Enter temperature: ";
                std::cin >> temperature;
                setAirConTemperature(*selectedRoom, temperature);
                break;
            case 4:
                turnOnLED(*selectedRoom);
                break;
            case 5:
                turnOffLED(*selectedRoom);
                break;
            case 6:
                returnDeviceStatus(*selectedRoom);
                
        }
    }
    return 0;
}
