#include "Employee.h"


Employee::Employee()
{
	fName = "";
	lName = "";
	SSN = "";
}

Employee::Employee(string a, string b, string c)
{
	fName = a;
	lName = b;
	SSN = c;
}

string Employee::getFName() const
{
	return fName;
}

string Employee::getLName() const
{
	return lName;
}

string Employee::getSSN() const
{
	return SSN;
}

void Employee::setFName(string a)
{
	fName = a;
}

void Employee::setSSN(string a)
{
	lName = a;
}

void Employee::setLName(string a)
{
	SSN = a;
}

void Employee::print()
{
	cout << "\nFirst Name: " << fName;
	cout << "\nLast Name: " << lName;
	cout << "\nSocial Security Number: " << SSN;
}


Employee::~Employee()
{
}
