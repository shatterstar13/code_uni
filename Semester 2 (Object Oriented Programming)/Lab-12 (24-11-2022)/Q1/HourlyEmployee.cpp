#include "HourlyEmployee.h"



HourlyEmployee::HourlyEmployee(): Employee("", "", "")
{
	hours = 0.0;
	wage = 0.0;
}

HourlyEmployee::HourlyEmployee(string a, string b, string c, double d, double e) : Employee(a, b, c)
{
	hours = e;
	wage = d;
}

void HourlyEmployee::setWage(double a)
{
	wage = a;
}

void HourlyEmployee::setHours(double a)
{
	hours = a;
}

double HourlyEmployee::getWage() const
{
	return wage;
}

double HourlyEmployee::getHours() const
{
	return hours;
}

void HourlyEmployee::print()
{
	Employee::print();
	cout << "\nWage: " << wage;
	cout << "\nHours: " << hours;
}

double HourlyEmployee::earnings()
{
	return wage*hours;
}


HourlyEmployee::~HourlyEmployee()
{
}
