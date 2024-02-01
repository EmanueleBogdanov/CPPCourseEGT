#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Employee.h"
#include <vector>
class Department
{
public:

     Department(const std::string& departmentName);


    // Method to add an employee to the department
    void addEmployee(Employee* employee);

    // Method to display all employees in the department
    void displayEmployees() const;
    string getDepartmentName() const;
    void setDepartmentName(const string &newDepartmentName);

    vector<Employee *> getEmployees() const;
    void setEmployees(const vector<Employee *> &newEmployees);

    int getNumEmployees() const;
    void setNumEmployees(int newNumEmployees);

    int getCapacity() const;
    void setCapacity(int newCapacity);

private:


    string departmentName;
    vector<Employee*> employees;
     int numEmployees;
     int capacity;
};

#endif // DEPARTMENT_H
