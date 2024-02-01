#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include <iostream>
class Employee
{
public:
      ~Employee();//destructor
    Employee(const string &name, int employeeId, const string &position);


    string getName() const;
    void setName(const string &newName);

    int getEmployeeId() const;
    void setEmployeeId(int newEmployeeId);

    string getPosition() const;
    void setPosition(const string &newPosition);
    void print();

private:
    string name;
    int employeeId;
    string position;

};

#endif // EMPLOYEE_H
