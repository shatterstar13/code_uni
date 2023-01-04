#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <iostream>
#include "Employee.h"

using namespace std;

class HourlyEmployee: public Employee
{
	double wage, hours;
public:
	HourlyEmployee();
	HourlyEmployee(string, string, string, double = 0.0, double = 0.0);
	void setWage(double);
	void setHours(double);
	double getWage() const;
	double getHours() const;
	virtual void print();
	virtual double earnings();
	~HourlyEmployee();
};

#endif // HOURLYEMPLOYEE_H



