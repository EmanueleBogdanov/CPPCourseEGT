
#include <iostream>
using namespace std;
class Car{

public:

    Car(const string &brand, const string &model, const string &type, const string &color, const string &vin, const string &regNum, double fuel) : brand(brand),
        model(model),
        type(type),
        color(color),
        vin(vin),
        regNum(regNum),
        fuel(fuel)
    {}
    virtual double calculate() = 0;

protected:

    string brand;
    string model;
    string type;
    string color;
    string vin;
    string regNum;
    double fuel;

};

class Family : public Car {
public:
    Family( const string &brand, const string &model, const string &type, const string &color, const string &vin, const string &regNum, double fuel, double tax_Per_Day,int distance) : Car(brand, model, type, color, vin, regNum, fuel),
    tax_Per_Day(tax_Per_Day), distance(distance) {}


    double calculateCoeff(){
    double coeffcient = 0;
    if(distance < 500){
        coeffcient = 0.7;
    }else{
        coeffcient = 0.4;
    }
    return coeffcient;
    }
    double calculate() override{
    double total_Price = tax_Per_Day * calculateCoeff();
    return total_Price;
    }



protected:
    double tax_Per_Day;
    int distance;
};

class Luxury_Car : public Car{

public:

    Luxury_Car( const string &brand, const string &model, const string &type, const string &color, const string &vin, const string &regNum, double fuel,double tax_Per_Day, int distance,const string &lux) : Car(brand, model, type, color, vin, regNum, fuel),
    tax_Per_Day(tax_Per_Day),
    distance(distance),
    lux(lux)
    {}


    double calculateCoeff(){
    double coeffcient = 0;
    if(distance < 200){
        coeffcient = 0.4;
    }else{
        coeffcient = 0.6;
    }
    return coeffcient;
    }

    double calculate_Lux(){
    double sum =0;

    if(lux == "Wine"){
        sum = 50;
    }else if(lux == "Champain"){
        sum = 100;
    }else if(lux == "Chocolate"){
        sum = 40;
    }else{
        sum = 0;
    }
    return sum;
    }

    double calculate()override{
    double total_Price = (tax_Per_Day * calculateCoeff()) + calculate_Lux();
    return total_Price;
    }

protected:
    double tax_Per_Day;
    int distance;
    string lux;

};

int main()
{

    cout << "\n**************************************************************************\n";
    cout << "                          RENT A CAR                                        \n";
    cout << "\n**************************************************************************\n\n";


    Family family("BMW", "730", "Sedan", "Black", "BMW34523213", "CB2366ХВ", 9.5, 50.0, 400);
    Luxury_Car luxury("Audi", "A8", "Sedan", "Black", "WAUZZZ4321212", "СВ5444АЕ", 15.0, 100, 400, "Champain");


    //cout << "Hello World!" << endl;
    cout <<"The Luxury Car price is: "<< luxury.calculate() << "BGN" << endl;
    cout <<"The Family Car price is: "<< family.calculate() << "BGN";
    return 0;
}


