/*
"Wangshu Hotel Reservation - v.1.0.1."

Copyright (C) 2023 - CEIT-37-204A - Rizal Technological University

This file is under supervision of Rizal Technological University - College of Engineering and Architecture

This program is a free and educational software; you can redistribute it and/or  modify it under the terms
of the "GNU General Public License" as published by the Free Software Foundation.

The GNU Affero General Public License is a free, copyleft license for software and other kinds of works,
specifically designed to ensure cooperation with the community in the case of network server software.

This program is distributed in the hope that it will be useful, especially in the field of Information
Technology course and others, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
(https://www.gnu.org/licenses/agpl-3.0.en.html)
*/

#include "Splash.h"                                            // Header Files that includes the GUI of the program
#include "Welcome.h"
#include "Profile.h"
#include "Date.h"
#include "Rooms.h"
#include "Receipt.h"
#include "Thanks.h"
#include "UserData.h"

using namespace System;
using namespace System::Windows::Forms;

enum class DialogType {                                       // Classes of Dialog Type that will be used to call on the Header File and display the following Windows Forms
    Splash,
    Welcome,
    Profile,
    Date,
    Rooms,
    Receipt,
    Thanks
};

void ShowDialog(DialogType dialogType) {                     // Function to call on the Header Files used to switch between Forms
    switch (dialogType) {
    case DialogType::Splash: {                               // switch to Splash.h
        WangshuHotelReservation::Splash splash;
        splash.ShowDialog();
        if (splash.switchToWelcome) {
            ShowDialog(DialogType::Welcome);
        }
        break;
    }
    case DialogType::Welcome: {                              // switch to Welcome.h
        WangshuHotelReservation::Welcome welcome;
        welcome.ShowDialog();
        if (welcome.switchToProfile) {
            ShowDialog(DialogType::Profile);
        }
        break;
    }
    case DialogType::Profile: {                             // switch to Profile.h
        WangshuHotelReservation::Profile profile;
        profile.ShowDialog();
        if (profile.switchToDate) {
            ShowDialog(DialogType::Date);
        }
        else if (profile.switchToWelcome) {
            ShowDialog(DialogType::Welcome);
        }
        break;
    }
    case DialogType::Date: {                                // switch to Date.h
        WangshuHotelReservation::Date date;
        date.ShowDialog();
        if (date.switchToRooms) {
            ShowDialog(DialogType::Rooms);
        }
        else if (date.switchToProfile) {
            ShowDialog(DialogType::Profile);
        }
        break;
    }
    case DialogType::Rooms: {                               // switch to Rooms.h
        WangshuHotelReservation::Rooms rooms;
        rooms.ShowDialog();
        if (rooms.switchToReceipt) {
            ShowDialog(DialogType::Receipt);
        }
        else if (rooms.switchToDate) {
            ShowDialog(DialogType::Date);
        }
        break;
    }
    case DialogType::Receipt: {                             // switch to Receipt.h
        WangshuHotelReservation::Receipt receipt;
        receipt.ShowDialog();
        if (receipt.switchToThanks) {
            ShowDialog(DialogType::Thanks);
        }
        else if (receipt.switchToRooms) {
            ShowDialog(DialogType::Rooms);
        }
        break;
    }
    case DialogType::Thanks: {                              // switch to Thanks.h
        WangshuHotelReservation::Thanks thanks;
        thanks.ShowDialog();
        if (thanks.switchToProfile) {
            ShowDialog(DialogType::Profile);
        }
        break;
    }
    default:                                                // Handles the error case where an unsupported DialogType is passed on
        break; 
    }
}

int main()                                                  // The main execution of the Program
{
    Application::EnableVisualStyles();                      // These functions are called to configure the visual appearance and behavior of a Windows Forms application
    Application::SetCompatibleTextRenderingDefault(false);
    ShowDialog(DialogType::Splash);
    return 0;
}