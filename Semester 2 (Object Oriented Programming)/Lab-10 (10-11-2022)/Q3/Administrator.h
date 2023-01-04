#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "SalariedEmployee.h"
#include <string>

using namespace std;

class Administrator : public SalariedEmployee
{
private:
	string admin_title;
	string department;
	string admin_super;
protected:
	double admin_salary;
public:
	Administrator();
	Administrator(string, string, double, double, string, string, string, double);
	void setSupervisor(string new_super);
	void print() const;
	void adminData();
	void print_check();
	~Administrator();
};

#endif

