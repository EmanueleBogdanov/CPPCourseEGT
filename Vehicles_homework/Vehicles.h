#ifndef VEHICLES_H
#define VEHICLES_H
#include<string>
using namespace std;
class Vehicles
{
public:
    Vehicles(const string &Engine);

    string getEngine() const;
    void setEngine(const string &newEngine);

    virtual  void print();

private:
    string Engine;

};

#endif // VEHICLE_H
