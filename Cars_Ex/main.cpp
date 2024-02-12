#include <iostream>
#include <string>
using namespace std;
class Car 
{
public:  

    Car(string model, int year, string color, string fuel, string vin, string transmission, string plate)
    {
        //sd
       
        setModel(model);
        setYear(year);
        this->color = color;
        this->fuel = fuel;
        this->vin = vin;
        this->transmission = transmission;
        this->plate = plate;
    }

    void setModel(string model) 
    {
        this ->model = model; 
    }

   string getModel() 
        {
        return model;
        }
        void setYear(int year) 
        {
            if(year > 1970 && year < 2023){
                this ->year =  year;
            }
            else{
                this->year = 0;
                cout << "Invalid year." << endl;
            }

              
        }

        int getYear()
        {
            return this->year;
        }



    void displayMessage() 
    {
        
        cout << " Model " <<  model << " year " << year << " color " << color << endl;
    }

private: 
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmission;
    string plate;
};

int main()
{
   

    Car firstCar("Audi", 2009, "black", "disel", "wauzzzds", "auto", "CB5412XB"); 
   
    firstCar.displayMessage(); 

     firstCar.setYear(1999);

     firstCar.displayMessage(); 

    string carModel = firstCar.getModel();
    cout <<  " Car model " << carModel;

    int carYear = firstCar.getYear();
    cout << " Car year is " << carYear;
    return 0;




}
