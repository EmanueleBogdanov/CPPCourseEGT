#include "Vehicles.h"
#include "Car.h"
#include "Motorcycle.h"
#include <vector>

using namespace std;

int main()
{
    Vehicles* p1 = new Vehicles("Gasoline");
     Vehicles* p2 = new Car(55.5, "Hybrid");
     Vehicles* p3= new Motorcycle(2, "Gasoline");

     vector<Vehicles*> vehicles;

     vehicles.push_back(p1);
     vehicles.push_back(p2);
     vehicles.push_back(p3);


     for(int i = 0; vehicles.size(); i++){
         vehicles.at(i)->print();
     }

    return 0;
}
