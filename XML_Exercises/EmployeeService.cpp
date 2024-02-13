
#include "EmployeeService.h"
pugi::xml_document EmployeeService::doc;
vector <Employee*> EmployeeService::employeeList;


vector<Employee*> EmployeeService::getEmployeesList()
{
	return vector<Employee*>();
}

 void EmployeeService::parseEmployeesData() {
	 if (doc.load_file("sample.xml")) return;
	 pugi::xml_node employees = doc.child("EmployeesData").child("Employees");

	 for (pugi::xml_node employee = employees.child("Employee"); employee;
		 employee = employee.next_sibling("Employee"))
	 {

	 }

	 for (auto employee : employees)
	 {
		 Employee* ePtr = Employee::parseEmployee(employee);
		 employeeList.push_back(ePtr);
	 }
}

