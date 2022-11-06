#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <cstring>

using namespace std;

class Employee
{
private:
	int employeeId;
	string name;
	string designation;
	int hourlyPayRate;
	int numberOfHoursWorked;
	const int WEEKLY_WORKING_HOURS;
public:
	Employee();
	Employee(int, string, string, int, int);
	void setEmpID(int E)
	{
		employeeId = E;
	}
	int getEmpID() const
	{
		return employeeId;
	}
	void setName(string N)
	{
		name = N;
	}
	string getName() const
	{
		return name;
	}
	void setDesig(string D);
	string getDesig() const
	{
		return designation;
	}
	void setPayRate(int P)
	{
		hourlyPayRate = P;
	}
	int getPayRate() const
	{
		return hourlyPayRate;
	}
	void setHours(int H)
	{
		numberOfHoursWorked = H;
	}
	int getHours() const
	{
		return numberOfHoursWorked;
	}
	int getWeekly() const
	{
		return WEEKLY_WORKING_HOURS;
	}
	int calculateMonthlySalary();
	int calculateWeeklySalary();
	int calculateOverTime();
};

#endif