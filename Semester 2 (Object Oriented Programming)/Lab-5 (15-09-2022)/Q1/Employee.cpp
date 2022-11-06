#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

Employee::Employee() : WEEKLY_WORKING_HOURS(40)
{
	employeeId = 0;
	name = "";
	designation = "";
	hourlyPayRate = 0;
	numberOfHoursWorked = 0;

}

Employee::Employee(int id, string n, string d, int pay, int hours):WEEKLY_WORKING_HOURS(40)
{
	employeeId = id;
	name = n;
	designation = d;
	hourlyPayRate = pay;
	numberOfHoursWorked = hours;
}

void Employee::setDesig(string D)
{
	designation = D;
	int i = 0;
	while (D[i])
	{
		D[i] = toupper(D[i]);
		i++;
	}
	
	if (D == "MANAGER")
	{
		Employee::setPayRate(2500);
	}

	else if (D == "CLERK")
	{
		Employee::setPayRate(1200);
	}

	else if (D == "CEO")
	{
		Employee::setPayRate(6000);
	}
}
//int Employee::calculateMonthlySalary()
//{
//
//}
//int Employee::calculateWeeklySalary()
//{
//
//}
//int Employee::calculateOverTime()
//{
//
//}
