#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(string the_name, string the_ssn, double the_net_pay); 
	string get_name() const; 
	string get_ssn() const;
	double get_net_pay() const;
	void set_name(string new_name);
	void set_ssn(string new_ssn); 
	void set_net_pay(double new_net_pay); 
	void print_check() const; 
private:
	string name;
	string ssn;
	double net_pay;
};

#endif

