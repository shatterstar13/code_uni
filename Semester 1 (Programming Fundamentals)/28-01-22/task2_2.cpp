#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Enter marks in Percentage";
	cin >> marks;
	if (marks >= 85 && marks <= 100)
		cout << "A+";
	if (marks >= 80 && marks <= 84)
		cout << "A";
	if (marks >= 75 && marks <= 79)
		cout << "B+";
	if (marks >= 70 && marks <= 74)
		cout << "B";
	if (marks >= 65 && marks <= 69)
		cout << "C+";
	if (marks >= 60 && marks <= 64)
		cout << "C";
	if (marks >= 50 && marks <= 59)
		cout << "D";
	if (marks < 50)
		cout << "F";
}