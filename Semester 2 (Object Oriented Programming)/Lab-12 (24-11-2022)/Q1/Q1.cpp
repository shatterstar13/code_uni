#include <iostream>
#include <string>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "ComissionEmployee.h"
#include "BasePlusComissionEmployee.h"

using namespace std;

int main()
{
	SalariedEmployee emp1("Muaz", "Saleem", "9091213036", 15000);
	HourlyEmployee emp2("Muaz", "Saleem", "9091213036", 5000, 18);
	ComissionEmployee emp3("Muaz", "Saleem", "9091213036", 19, 10.25);
	BasePlusComissionEmployee emp4("Muaz", "Saleem", "9091213036", 19, 10.25, 5000);

	cout << "\n\nDisplay with member functions: \n\n";

	cout << "\n\n";
	emp1.print();
	cout << "\nSalary: " << emp1.earnings();
	cout << "\n\n";
	emp2.print();
	cout << "\nSalary: " << emp2.earnings();
	cout << "\n\n";
	emp3.print();
	cout << "\nSalary: " << emp3.earnings();
	cout << "\n\n";
	emp4.print();
	cout << "\nSalary: " << emp4.earnings();
	cout << "\n\n";

	cout << "____________________________________________________________________\n";

	Employee* eptr[4];
	eptr[0] = &emp1;
	eptr[1] = &emp2;
	eptr[2] = &emp3;
	eptr[3] = &emp4;

	cout << "\nDisplay with Array of Pointers to Base Employee Class.\n\n";

	for (int i = 0; i < 4; i++)
	{
		cout << "\n\n";
		eptr[i]->print();
		cout << "\nSalary: " << eptr[i]->earnings();
		cout << "\n\n";
	}
}