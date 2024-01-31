#ifndef CAR_H
#define CAR_H
#include "Vehicles.h"
class Car : public Vehicles
{
public:
    Car(double sizeOfTires, const string &Engine);

    double getSizeOfTires() const;
    void setSizeOfTires(double newSizeOfTires);

    void print() override;

private:
    double sizeOfTires;
};

#endif // CAR_H
