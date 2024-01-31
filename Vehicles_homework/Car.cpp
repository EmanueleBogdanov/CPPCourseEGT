#include "Car.h"
#include"Vehicles.h"
#include <iostream>
Car::Car(double sizeOfTires, const string &Engine) : Vehicles(Engine),
    sizeOfTires(sizeOfTires)
{this-> sizeOfTires = sizeOfTires;}

double Car::getSizeOfTires() const{
    return sizeOfTires;
}

void Car::setSizeOfTires(double newSizeOfTires){

    cout << "Please enter size of tires \n" << endl;
    cin >> sizeOfTires;
    sizeOfTires = newSizeOfTires;
}

void Car::print(){
    cout <<"Size of tires is: " <<sizeOfTires << " " << "Engine is : " << getEngine() << endl;
};
