#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student
{
	string name{},rollNo{};
	int sem{};
	double cgpa{};
};

void printStruct(Student arr[], int size);

int main() {
	int n{};
	cout << "Enter the number of students: ";
	cin >> n;
	Student* std = new Student[n]{};
	for (int i = 0; i < n; i++) {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nEnter name of student "<<i+1<<": ";
		getline(cin, std[i].name);
		cout << "\nEnter roll no. of student " << i + 1 << ": ";
		cin >> std[i].rollNo;
		cout << "\nEnter semester of student " << i + 1 << ": ";
		cin >> std[i].sem;
		cout << "\nEnter CGPA of student " << i + 1 << ": ";
		cin >> std[i].cgpa;
	}
	printStruct(std, n);
	return 0;
}

void printStruct(Student std[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << "\nName of student " << i + 1 << ": ";
		cout << std[i].name << "\n";
		cout << "\nRoll no. of student " << i + 1 << ": ";
		cout << std[i].rollNo << "\n";
		cout << "\nSemester of student " << i + 1 << ": ";
		cout << std[i].sem << "\n";
		cout << "\nCGPA of student " << i + 1 << ": ";
		cout << std[i].cgpa << "\n";
	}
}
