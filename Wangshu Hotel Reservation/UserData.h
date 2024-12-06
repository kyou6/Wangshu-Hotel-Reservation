#pragma once
#include <string>                                       // Used to create and manipulate strings within this Header and other Forms

namespace WangshuHotelReservation {
    struct UserInput {                                  // Data Structure for the UserInput
        std::string lastName;
        std::string firstName;
        std::string middleName;
        std::string contactNo;
        std::string phoneNo;
        std::string email;
        std::string country;
        std::string region;
        std::string city;
        std::string zip;
        std::string compAddress;
        std::string roomType;
        std::string roomPricing;
        std::string dateCheckIn;
        std::string dateCheckOut;
        int dayGap;
        double totalPricing;
    };
    UserInput userInput;                                // Sets UserInput as userInput
    extern UserInput userInput;                         // Declare the global variable
}
