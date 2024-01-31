#include "Vehicles.h"
#include <iostream>

Vehicles::Vehicles(const string &Engine) : Engine(Engine)
{}


string Vehicles::getEngine() const{
    return Engine;
}

void Vehicles::setEngine(const string &newEngine){

    cout << "Plese Enter Type Of Engine" << endl;
    cin >> Engine;
    Engine = newEngine;
}

void Vehicles::print(){
    cout << "Type of engine is: " <<Engine << endl;
};
