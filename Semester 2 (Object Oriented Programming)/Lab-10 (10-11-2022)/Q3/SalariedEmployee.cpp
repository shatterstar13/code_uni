#include "SalariedEmployee.h"
#include <iostream>

using namespace std;


SalariedEmployee::SalariedEmployee(): Employee("", "", 0.0)
{
	salary = 0.0;
}

SalariedEmployee::SalariedEmployee(string the_name, string the_ssn, double the_net_pay, double the_weekly_salary): Employee(the_name, the_ssn, the_net_pay)
{
	salary = the_weekly_salary;
}

double SalariedEmployee::get_salary() const
{
	return salary;
}

void SalariedEmployee::set_salary(double new_salary)
{
	salary = new_salary;
}

void SalariedEmployee::print_check()
{
	Employee::print_check();
	cout << "\n\tWeekly Pay:" << salary;
	cout << "\n-----------------------------------------------\n";
}
