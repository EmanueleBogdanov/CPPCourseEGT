#include <iostream>
#include "EmployeeService.h"
#include "pugixml.hpp"


int main() {

	EmployeeService::parseEmployeesData();

	for (auto employee : EmployeeService::getEmployeesList()) {
		cout << *employee << endl;
	}


	return 0;

}