#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class Employee
{
	string fName, lName, SSN;
public:
	Employee();
	Employee(string, string, string);
	string getFName() const;
	string getLName() const;
	string getSSN() const;
	void setFName(string);
	void setSSN(string);
	void setLName(string);
	virtual void print();
	virtual double earnings() = 0;
	~Employee();
};

#endif // !EMPLOYEE_H



