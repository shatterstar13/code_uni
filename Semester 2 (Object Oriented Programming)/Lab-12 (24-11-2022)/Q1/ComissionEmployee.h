#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H

#include <iostream>
#include "Employee.h"

using namespace std;

class ComissionEmployee: public Employee
{
	double grossSales, comissionRate;
public:
	ComissionEmployee();
	ComissionEmployee(string, string, string, double = 0.0, double = 0.0);
	void setGrossSales(double);
	void setComissionRate(double);
	double getGrossSales() const;
	double getComissionRate() const;
	virtual void print();
	virtual double earnings();
	~ComissionEmployee();
};

#endif
