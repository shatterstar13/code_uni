#include "Administrator.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include <iostream>
#include <string>

using namespace std;


Administrator::Administrator() : SalariedEmployee("", "", 0.0, 0.0)
{
	admin_title = "";
	admin_super = "";
	department = "";
	admin_salary = 0.0;
}

Administrator::Administrator(string n, string ssn, double net, double week, string t, string d, string su, double sa) : SalariedEmployee(n, ssn, net, week)
{
	admin_title = t;
	admin_super = su;
	department = d;
	admin_salary = sa;
}

void Administrator::setSupervisor(string new_super)
{
	admin_super = new_super;
}

void Administrator::print() const
{
	cout << "\tAdministrator Title:" << admin_title;
	cout << "\n\tArea of responsibility:" << department;
	cout << "\n\tAdministrator's Supervisor:" << admin_super;
	cout << "\n-----------------------------------------------\n";
}

void Administrator::adminData()
{
	string temp1;
	double temp2;
	cout << "\nEnter name of the Employee: ";
	getline(cin, temp1);
	SalariedEmployee::set_name(temp1);
	cout << "\nEnter SSN of the Employee: ";
	getline(cin, temp1);
	SalariedEmployee::set_ssn(temp1);
	cout << "\nEnter net pay of the Employee: ";
	cin >> temp2;
	SalariedEmployee::set_net_pay(temp2);
	cout << "\nEnter Weekly pay of the employee: ";
	cin >> temp2;
	SalariedEmployee::set_salary(temp2);
	cin.ignore();
	cout << "\nEnter the administrator's title: ";
	getline(cin, admin_title);
	cout << "\nEnter the area of responsibility: ";
	getline(cin, department);
	cout << "\nEnter the name of the administrator's supervisor: ";
	getline(cin, admin_super);
	cout << "\nEnter administrator's annual salary: ";
	cin >> admin_salary;

}

void Administrator::print_check()
{
	SalariedEmployee::print_check();
	print();
}


Administrator::~Administrator()
{
}
