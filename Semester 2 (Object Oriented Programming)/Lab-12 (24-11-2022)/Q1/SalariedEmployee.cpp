#include "SalariedEmployee.h"



SalariedEmployee::SalariedEmployee(): Employee("", "", "")
{
	weeklySalary = 0.0;
}

SalariedEmployee::SalariedEmployee(string a, string b, string c, double d) : Employee(a, b, c)
{
	weeklySalary = d;
}

double SalariedEmployee::getWekklySalary() const
{
	return weeklySalary;
}

void SalariedEmployee::setWeeklyValue(double a)
{
	weeklySalary = a;
}

void SalariedEmployee::print()
{
	Employee::print();
	cout << "\nWeekly Salary: " << weeklySalary;
}

double SalariedEmployee::earnings()
{
	return (weeklySalary * 4) + ((weeklySalary / 7) * 2);
}


SalariedEmployee::~SalariedEmployee()
{
}
