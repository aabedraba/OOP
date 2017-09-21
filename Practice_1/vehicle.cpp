#include "vehicle.h"

void readFromKeyboard ( Vehicle &v ) {
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

void showOnScreen ( Vehicle &v ) {
    std::cout << "Brand: " << v.brand << "\n";
    std::cout << "Model: " << v.model << "\n";
    std::cout << "Plate: " << v.plate << "\n";
    std::cout << "Manufacture year: " << v.manufactureYear << "\n";
    std::cout << "Price: " << v.price << std::endl;
}