#include "employee.h"
#include "department.h"

int main() {
    // Create Employee objects
    Employee* a1 = new Employee("Ivan Ivanov", 25, "Designer");
    Employee* a2 = new Employee("Georgi Georgiev", 34, "Developer");
    Employee* a3 = new Employee("Stoqn Ivanov", 12, "Designer");

    // Create Department object
    Department d("Engineering");

    // Add employees to the department
    d.addEmployee(a1);
    d.addEmployee(a2);
    d.addEmployee(a3);

    // Display employees in the department
    d.displayEmployees();



    return 0;
}
