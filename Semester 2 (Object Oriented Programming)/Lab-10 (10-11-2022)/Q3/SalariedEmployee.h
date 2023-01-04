#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "Employee.h" 

using  namespace std;

class SalariedEmployee : public Employee 
{
public: 
	SalariedEmployee(); 
	SalariedEmployee(string the_name, string the_ssn, double the_net_pay, double the_weekly_salary); 
	double get_salary() const; 
	void set_salary(double new_salary); 
	void print_check(); 
private: 
	double salary;
};

#endif
