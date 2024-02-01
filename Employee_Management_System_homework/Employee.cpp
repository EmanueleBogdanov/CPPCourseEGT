#include "Employee.h"


Employee::Employee(const string &name, int employeeId, const string &position) : name(name),
    employeeId(employeeId),
    position(position)
{}

string Employee::getName() const
{
    return name;
}

void Employee::setName(const string &newName)
{
    name = newName;
}

int Employee::getEmployeeId() const
{
    return employeeId;
}

void Employee::setEmployeeId(int newEmployeeId)
{
    employeeId = newEmployeeId;
}

string Employee::getPosition() const
{
    return position;
}

void Employee::setPosition(const string &newPosition)
{
    position = newPosition;
}
void Employee::print(void)
{
    cout << "Name is: " << name << "EmployeeId is: " << employeeId << " Position is :" << position << endl;
}

Employee::~Employee()
{
}
