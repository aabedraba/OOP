/* 
 * File:   vehicle.h
 * Author: aabedraba
 *
 * Created on September 20, 2017, 9:30 PM
 */

#ifndef VEHICLE_H
#define VEHICLE_H

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
    void showOnScreen ( Vehicle &v );
}


#endif /* VEHICLE_H */

