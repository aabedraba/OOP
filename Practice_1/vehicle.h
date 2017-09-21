/* 
 * File:   vehicle.h
 * Author: aabedraba
 *
 * Created on September 20, 2017, 9:30 PM
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

namespace vehicles {
    const int MAX_VEHICLES = 10;
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
    void readFromKeyboard ( Vehicle &v );

    /**
     * @brief Shows on terminal the info of a selected vehicle
     * @param v Vehicle struct object selected
     */
    void showOnScreen ( const Vehicle &v );
    
    /**
     * @brief fills a vector of Vehicle class until the users chooses to stop
     * @param v Vector struct to be filled
     * @param sizev size of the vector. Here it will be vehicles::MAX_SIZE
     * @return Number of vehicles that have be filled
     */
    int fillVector ( Vehicle v[], const int sizev );
    
    /**
     * @brief shows on screen vehicles in blocks of 5 vehicles, giving the option to show more, or to stop
     * @param v Vehicle struct to be shown
     * @param sizev Number of vehicles filled in the vector
     */
    void showOnScreen ( const Vehicle v[], const int sizev );
    
    /**
     * @brief Calculates the position of the most expensive car
     * @param v Vehicle struct to calculate from
     * @param sizev number of vehicles filled in the vector
     * @return position of the most expensive car
     */
    int maxPrice ( const Vehicle v[], const int sizev );
    
    /**
     * @brief search for the position in the vector of a given plate
     * @param plate given plate to search
     * @param v Vehicle struct to be looked in
     * @param sizev number of vehicles filled in the vectors
     * @return 
     */
    int lookForPlate ( const std::string plate, const Vehicle v[], const int sizev );
}


#endif /* VEHICLE_H */

