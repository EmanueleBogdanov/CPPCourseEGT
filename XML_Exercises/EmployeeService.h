#pragma once
#include "pugixml.hpp"
#include "Employee.h"
#include <vector>
using namespace std;
class EmployeeService {


public:
	static void parseEmployeesData();
	static vector<Employee*>getEmployeesList();
private:
	static vector<Employee*>employeeList;
	static pugi::xml_document doc;

};