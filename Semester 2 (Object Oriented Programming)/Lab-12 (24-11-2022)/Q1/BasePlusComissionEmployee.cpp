#include "BasePlusComissionEmployee.h"



BasePlusComissionEmployee::BasePlusComissionEmployee(): ComissionEmployee("", "", "", 0.0, 0.0)
{
	baseSalary = 0.0;
}

BasePlusComissionEmployee::BasePlusComissionEmployee(string a, string b, string c, double d, double e, double f ): ComissionEmployee(a, b, c, d, e)
{
	baseSalary = f;
}

void BasePlusComissionEmployee::setBaseSalary(double a)
{
	baseSalary = a;
}

double BasePlusComissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

void BasePlusComissionEmployee::print()
{
	ComissionEmployee::print();
	cout << "\nBase Salary: " << baseSalary;
}

double BasePlusComissionEmployee::earnings()
{
	return ComissionEmployee::earnings() + baseSalary;
}


BasePlusComissionEmployee::~BasePlusComissionEmployee()
{
}
