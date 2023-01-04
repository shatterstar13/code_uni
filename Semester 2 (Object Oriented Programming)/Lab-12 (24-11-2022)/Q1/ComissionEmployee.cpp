#include "ComissionEmployee.h"



ComissionEmployee::ComissionEmployee(): Employee("", "", "")
{
	grossSales = 0.0;
	comissionRate = 0.0;
}

ComissionEmployee::ComissionEmployee(string a, string b, string c, double d, double e) : Employee(a, b, c)
{
	grossSales = d;
	comissionRate = e;
}

void ComissionEmployee::setGrossSales(double a)
{
	grossSales = a;
}

void ComissionEmployee::setComissionRate(double a)
{
	comissionRate = a;
}

double ComissionEmployee::getGrossSales() const
{
	return grossSales;
}

double ComissionEmployee::getComissionRate() const
{
	return comissionRate;
}

void ComissionEmployee::print()
{
	Employee::print();
	cout << "\nGross Sales: " << grossSales;
	cout << "\nComission Rate: " << comissionRate;
}

double ComissionEmployee::earnings()
{
	return grossSales*comissionRate;
}


ComissionEmployee::~ComissionEmployee()
{
}
