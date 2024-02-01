#include "Department.h"

Department::Department(const std::string& departmentName)
    : departmentName(departmentName) {}

string Department::getDepartmentName() const
{
    return departmentName;
}

void Department::setDepartmentName(const string &newDepartmentName)
{
    departmentName = newDepartmentName;
}

vector<Employee *> Department::getEmployees() const
{
    return employees;
}

void Department::setEmployees(const vector<Employee *> &newEmployees)
{
    employees = newEmployees;
}

int Department::getNumEmployees() const
{
    return numEmployees;
}

void Department::setNumEmployees(int newNumEmployees)
{
    numEmployees = newNumEmployees;
}

int Department::getCapacity() const
{
    return capacity;
}

void Department::setCapacity(int newCapacity)
{
    capacity = newCapacity;
}


// Method to add an employee to the department
void Department::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

// Method to display all employees in the department
void Department::displayEmployees() const {
    std::cout << "Employees in department " << departmentName << ":" << std::endl;
    for (const auto& emp : employees) {
        emp->print(); // Call display method for each employee
    }
}
