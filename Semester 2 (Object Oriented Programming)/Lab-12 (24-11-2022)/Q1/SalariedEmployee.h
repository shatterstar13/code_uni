#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
#include <iostream>

using namespace std;

class SalariedEmployee: public Employee
{
	double weeklySalary;
public:
	SalariedEmployee();
	SalariedEmployee(string, string, string, double = 0.0);
	double getWekklySalary() const;
	void setWeeklyValue(double);
	virtual void print();
	virtual double earnings();
	~SalariedEmployee();
};

#endif

