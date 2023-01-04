#include <iostream>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "Administrator.h"

using namespace std;

int main()
{
	Administrator a{ "muaz", "1213", 0.36, 0.36*4, "director", "accounts", "CEO", 44 };
	//a.adminData();
	a.print_check();
}