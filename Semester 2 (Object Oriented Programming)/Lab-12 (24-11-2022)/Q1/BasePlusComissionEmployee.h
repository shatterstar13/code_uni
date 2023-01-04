#ifndef BASEPLUSCOMISSIONEMPLOYEE_H
#define BASEPLUSCOMISSIONEMPLOYEE_H

#include "ComissionEmployee.h"
#include <iostream>

using namespace std;

class BasePlusComissionEmployee: public ComissionEmployee
{
	double baseSalary;
public:
	BasePlusComissionEmployee();
	BasePlusComissionEmployee(string, string, string, double = 0.0, double = 0.0, double = 0.0);
	void setBaseSalary(double);
	double getBaseSalary() const;
	virtual void print();
	virtual double earnings();
	~BasePlusComissionEmployee();
};

#endif

