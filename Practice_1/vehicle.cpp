#include "vehicle.h"
#include <iostream>

void vehicles::readFromKeyboard ( vehicles::Vehicle &v ) {
    do {
        std::cout << "Brand: ";
        std::cin >> v.brand;
    } while ( v.brand.length() < 3 || v.brand.length() > 20 );
    do {
        std::cout << "Model: ";
        std::cin >> v.model;
    } while ( v.model.length() < 1 || v.model.length() > 30 );
    do {
        std::cout << "Plate: ";
        std::cin >> v.plate;   
    } while ( v.plate.length() != 6 );
    do {
        std::cout << "Manufacture year: ";
        std::cin >> v.manufactureYear;
    } while ( v.manufactureYear < 1900 );
    do {
        std::cout << "Price: ";
        std::cin >> v.price;
    } while ( v.price < 0 );
}

void vehicles::showOnScreen ( const vehicles::Vehicle &v ) {
    std::cout << "Brand: " << v.brand << "\n";
    std::cout << "Model: " << v.model << "\n";
    std::cout << "Plate: " << v.plate << "\n";
    std::cout << "Manufacture year: " << v.manufactureYear << "\n";
    std::cout << "Price: " << v.price << std::endl;
}

int vehicles::fillVector(vehicles::Vehicle v[], const int sizev){
    int readVechiles = 0;
    bool keep = false;
    std::cout << "----Reading vehicles----" << std::endl;
    for (int i = 0; i < sizev; i++) {
        vehicles::readFromKeyboard( v[i] );
        readVechiles++;
        std::cout << "Keep reading? (0 or 1): ";
        std::cin >> keep;
        if ( !keep ) break;
    }
    
    return readVechiles;
}

void vehicles::showOnScreen(const vehicles::Vehicle v[], const int sizev){
    bool keepShowing = true;
    int i=0, counter = 0;
    while ( keepShowing && (i < sizev) ){
        vehicles::showOnScreen( v[i] );
        counter++;
        if ( counter == 5 ){
            std::cout << "Keep showing? (0 or 1): ";
            std::cin >> keepShowing;
            counter = 0;
        }
        i++;
    }
}

int vehicles::maxPrice(const vehicles::Vehicle v[], const int sizev){
    int maxPrice = v[0].price;
    for (int i = 1; i < sizev; i++)
        if( maxPrice < v[i].price )
            maxPrice = v[i].price;
    return maxPrice;
}

int vehicles::lookForPlate(const std::string plate, const vehicles::Vehicle v[], const int sizev){
    for (int i = 0; i < sizev; i++)
        if ( plate == v[i].plate )
            return i; //returning the position in the vector
//    throw ("[vehicles::lookForPlate]: Plate not found.");
}