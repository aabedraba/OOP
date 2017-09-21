/* 
 * File:   main.cpp
 * Author: aabedraba
 *
 * Created on September 20, 2017, 9:27 PM
 */

#include <string>
#include "vehicle.h"
#include <iostream>

using namespace std;

/*
 * @brief Main function
 * @param argc Number of arguments
 * @param argv Characters that form the arguments
 */
int main(int argc, char** argv) {
    
    vehicles::Vehicle v[vehicles::MAX_VEHICLES]; //Creating vector of Vehicles
    
    int readVehicles = vehicles::fillVector( v, vehicles::MAX_VEHICLES ); //Reading vehicles and assigning the numbers of vehicles read to readVehicles
    vehicles::showOnScreen( v, readVehicles );//Showing on screen the read vehicles
    cout << "The maximum price is: " << vehicles::maxPrice( v, readVehicles ) << endl;
    string plate;
    cout << "Plate to look for: ";
    cin >> plate;
    int posSearch = vehicles::lookForPlate( plate, v, readVehicles );
    vehicles::showOnScreen( v[posSearch] );
    
    return 0;
}

