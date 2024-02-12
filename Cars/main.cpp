#include <iostream>
#include <string>
using namespace std;
class Car // Шаблон дефинира се веднъж
{
public:  // Даваме информацията. cout

    Car(string model, int year, string color, string fuel, string vin, string transmission, string plate)
    {
        //this->model = model;
        //this->year = year;
        setModel(model);
        setYear(year);
        this->color = color;
        this->fuel = fuel;
        this->vin = vin;
        this->transmission = transmission;
        this->plate = plate;
    }

    void setModel(string model) // priema ot vunshen svqt i zapomnq v model
    {
        this ->model = model;  // this - Ако имената са еднакви.
    }

   string getModel() // izvlichame informaciqta
        {
        return model;
        }
        void setYear(int year) // priema ot vunshen svqt i zapomnq v model
        {
            if(year > 1970 && year < 2023){
                this ->year =  year;
            }
            else{
                this->year = 0;
                cout << "Invalid year." << endl;
            }

              // this - Ако имената са еднакви.
        }

        int getYear()
        {
            return this->year;
        }



    void displayMessage() // Показва ги без резуллтатът.
    {
        // Потребителя има достъп до displayMessage.
        cout << " Model " <<  model << " year " << year << " color " << color << endl;
    }
// clas studenti ime i familiq egn grad data na rajdane domashno
private: // Скриваме ги от другите класове.
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
    //Класове и обекти въведение.
   // Софтуер за автокъща
    //модел, година на производство, цвят , гориво,рама, скорости,номер


    Car firstCar("citroen", 2020, "green", "disel", "dfsdsew", "auto", "sa 9454vn"); // Обект от Car
    // string model;
    // cout << "enter car model " ;
    // cin >> model;
    // firstCar.setModel(model);

    // cout << "enter car year ";
    //     int year;
    // cin >> year;
    firstCar.displayMessage(); // " . "

     firstCar.setYear(1999);

     firstCar.displayMessage(); // " . "

    string carModel = firstCar.getModel();
    cout <<  " Car model " << carModel;

    int carYear = firstCar.getYear();
    cout << " Car year is " << carYear;
    return 0;




}
