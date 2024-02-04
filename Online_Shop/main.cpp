#include <iostream>

using namespace std;
class Drinks{
public:
    Drinks(string type,string name,double quantity,double price):
        type(type),name(name),quantity(quantity),price(price){}
    virtual double calculate() const = 0; ;
protected:
    string name;
    double price;
    double quantity;
    string type;
};

class No_Alcoholic: public Drinks{

public:
    No_Alcoholic(const string& type, string name, double quantity, const double &price, double liters, double city_Tax) : Drinks(type, name, quantity, price),
    liters(liters),
    city_Tax(city_Tax)
    {}
    string getType() const {
        return type;
    }
    double calculate() const override{
        double total =0;
        if(quantity > 0){
            total = (quantity * price) + city_Tax;
        }
        else{
            cout << "Invalid" << endl;
        }
        return total;
    }
protected:
    double liters;
    double city_Tax;


};

class Alcoholic:public Drinks{

public:

    Alcoholic( const string &type, const string &name, double quantity, double price,float alcohol_Volume, double tax_Alcohol) : Drinks(type, name, quantity, price),
    alcohol_Volume(alcohol_Volume),
    tax_Alcohol(tax_Alcohol)
    {}
    double calculate() const override{
        double total= 0;
        if(alcohol_Volume > 5){
            total = quantity *(price * tax_Alcohol);
        }else{
            cout << " Invalid Volume" << endl;
        }
        return total;
    }
private:
    float alcohol_Volume;
    double tax_Alcohol;

};

int main()
{
    No_Alcoholic drink("Water","Devin",5,1.00,0.5,0.20);
    Alcoholic drink1("Wine","Starosel",1,23.50,12,3);

    cout <<"Curent drink is: "<< drink.getType() <<" "<<"price is:" << drink.calculate() << "BGN" << endl;
    cout <<"The price for drink is: "<< drink1.calculate() <<" "<<"BGN" << endl;
    cout << "Hello World!" << endl;
    return 0;
}



