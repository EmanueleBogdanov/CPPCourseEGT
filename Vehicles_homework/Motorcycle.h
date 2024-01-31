#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicles.h"
class Motorcycle : public Vehicles
{
public:
    Motorcycle(int numOfWheels, const string &Engine);

    int getNumOfWheels() const;
    void setNumOfWheels(int newNumOfWheels);
    void print() override;

private:
    int numOfWheels;

};

#endif // MOTORCYCLE_H
