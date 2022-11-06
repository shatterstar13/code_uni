#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(string, int, string, string);
	Employee(string, int);
	void setName(string);
	void setId(int);
	void setDept(string);
	void setJob(string);
	void sampleData();
	string getName()
	{
		return name;
	}
	int getId()
	{
		return idNumber;
	}
	string getDept()
	{
		return department;
	}
	string getJob()
	{
		return jobTitle;
	}
	~Employee();

private:
	string name;
	int idNumber;
	string department;
	string jobTitle;
};

Employee::Employee()
{
	name = " ";
	idNumber = 0;
	department = " ";
	jobTitle = " ";
}

Employee::Employee(string n, int id, string dept, string job)
{
	name = n;
	idNumber = id;
	department = dept;
	jobTitle = job;
}

Employee::Employee(string n, int id)
{
	name = n;
	idNumber = id;
	department = " ";
	jobTitle = " ";
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setId(int id)
{
	idNumber = id;
}

void Employee::setDept(string dept)
{
	department = dept;
}

void Employee::setJob(string job)
{
	jobTitle = job;
}

void sampleData()
{
	Employee data[5]
	{
		{"Susan Meyers", 47899, "Accounting", "Vice President"},
		{"Mark Jones", 39119, "IT", "Programmer"},
		{"Jay Rogers", 81447, "Manufacturing","Engineer"},
		{"Lionel Messi", 52362, "HR","Manager" },
		{"Roger Federer", 54124, "Finance", "Auditor"}
	};
	cout << setw(14) << "Name: " << setw(10) << "ID: " << setw(21) << "Department: " << setw(22) << "Position: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << setw(14) << data[i].getName() << setw(10) << data[i].getId() << setw(20) << data[i].getDept();
		cout << setw(11)<<"\t" << data[i].getJob() << "\n";
	}

}

Employee::~Employee()
{
}

int main()
{
	Employee obj1, obj2("Susan Meyers", 47899);

	string name, dept, job;
	int id;

	cout << "\nEnter name of Employee #1: ";
	getline(cin, name);
	obj1.setName(name);

	cout << "\nEnter ID of Employee #1: ";
	cin >> id;
	obj1.setId(id);

	cin.ignore();

	cout << "\nEnter department of Employee #1: ";
	getline(cin, dept);
	obj1.setDept(dept);

	cout << "\nEnter job title of Employee #1: ";
	getline(cin, job);
	obj1.setJob(job);
	cout << "\n\n";

	cout << "\nEnter department of Employee #2: ";
	getline(cin, dept);
	obj2.setDept(dept);

	cout << "\nEnter job title of Employee #2: ";
	getline(cin, job);
	obj2.setJob(job);
	cout << "\n\n";

	cout << setw(14) << "Name: " << setw(10) << "ID: " << setw(21) << "Department: " << setw(22) << "Position: \n";

	cout << setw(14) << obj1.getName() << setw(10) << obj1.getId() << setw(20) << obj1.getDept();
	cout << setw(11) << "\t" << obj1.getJob() << "\n\n";

	cout << setw(14) << obj2.getName() << setw(10) << obj2.getId() << setw(20) << obj2.getDept();
	cout << setw(11) << "\t" << obj2.getJob() << "\n\n\n";

	sampleData();
}
