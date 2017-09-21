/* 
 * File:   main.cpp
 * Author: aabedraba
 *
 * Created on September 20, 2017, 9:27 PM
 */

#include <string>
#include <iostream>

/*
 * @brief struct with the information of a vehicle
 */
struct Vehicle {
    std::string brand; ///brand of the vehicle
    std::string model; ///model of the vehicle
    std::string plate; ///plate number of the vehicle
    int manufactureYear; /// year of manufacture of the vehicle
    float price; ///price of the vehicle
};

/**
 * @brief Introduces info of a vehicle from keyboard
 * @param v Vehicle struct object to be modified
 * @post a modified Vehicle struct object
 */
  

/**
 * @brief Shows on terminal the info of a selected vehicle
 * @param v Vehicle struct object selected
 */
void showOnScreen ( Vehicle &v ) {
    std::cout << "Brand: " << v.brand << "\n";
    std::cout << "Model: " << v.model << "\n";
    std::cout << "Plate: " << v.plate << "\n";
    std::cout << "Manufacture year: " << v.manufactureYear << "\n";
    std::cout << "Price: " << v.price << std::endl;
}

/*
 * @brief Main function
 * @param argc Number of arguments
 * @param argv Characters that form the arguments
 */
int main(int argc, char** argv) {
    
    Vehicle vehicles[MAX_VEHICLES];
    int numVehicles;
    
    std::cout << "Number of vehicles: ";
    std::cin >> numVehicles;
    
    
    std::cout << "----Reading from keyboard----" << std::endl;
    for (int i = 0; i < numVehicles; i++) {
        std::cout << "Vehicle " << i+1 << std::endl;
        readFromKeyboard( vehicles[i] );
    }
    
    std::cout << "----Showing on screen----" << std::endl;
    for (int i = 0; i < numVehicles; i++) {
        std::cout << "Vehicle " << i+1 << std::endl;
        showOnScreen( vehicles[i] );
    }


    
    return 0;
}

