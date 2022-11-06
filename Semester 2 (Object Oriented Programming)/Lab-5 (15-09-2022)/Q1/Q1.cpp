#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Employee emp[3];

	int empId{};
	string name{};
	string desig{};
	int hoursWorked{};

	for (int i = 0; i < 3; i++)
	{
		cout << "\nEnter the ID of employee #" << i + 1 << ": ";
		cin >> empId;
		emp[i].setEmpID(empId);
		cin.ignore();
		cout << "Enter the name of employee #" << i + 1 << ": ";
		getline(cin, name);
		emp[i].setName(name);
		cout << "Enter the designation of employee #" << i + 1 << ":";
		getline(cin, desig);
		emp[i].setDesig(desig);
		cout << "\nEnter the number of hours worked by employee #" << i + 1 << ": ";
		cin >> hoursWorked;
		emp[i].setHours(hoursWorked);
		cout << "\n\n";
	}

	for (int i = 0; i < 3; i++)
	{
		cout << emp[i].getEmpID() << "\t" << emp[i].getName() << "\t" << emp[i].getDesig() << "\t";
		cout << emp[i].getHours() << "\t" << emp[i].getPayRate() << "\t" << emp[i].getWeekly() << endl;
	}
	return 0;
}