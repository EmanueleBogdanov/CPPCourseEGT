#include "Motorcycle.h"
#include <iostream>

Motorcycle::Motorcycle(int numOfWheels, const string &Engine) : Vehicles(Engine),
    numOfWheels(numOfWheels)
{}

int Motorcycle::getNumOfWheels() const{
    return numOfWheels;
}

void Motorcycle::setNumOfWheels(int newNumOfWheels){

    cout << "Please Enter Numbers Of Wheles\n" << endl;
    cin >> numOfWheels;
    numOfWheels = newNumOfWheels;
}


void Motorcycle::print(){
    cout <<"The Motorcyle has"<<" "<< numOfWheels <<" " << "wheels" << " " << "Engine is: " << getEngine() <<endl;
}
