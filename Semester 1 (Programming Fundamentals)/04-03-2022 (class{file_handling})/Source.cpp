#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ofstream std1;
	std1.open("student.txt");
	string name;
	int roll = 1, marks = 0;
	cout << "Enter roll no = -1 to quit /n";
	while (roll != -1) {
		cout << "Enter Roll no. ";
		cin >> roll;
		if (roll != -1) {
			cout << "Enter name \n";
			getline(cin, name);
			cout << "Enter marks \n";
			cin >> marks;
		}
		std1 << name << "\t" << roll << "\t" << marks << endl;
	}
	std1.close();
	ifstream std2;
	int sum = 0, count = 1, avg = 0;
	std2.open("student.txt");
	while (std2 >> name) {
		std2 >> roll >> marks;
		cout << name << "\t" << roll << "\t" << marks << endl;
		sum += marks;
		count++;
	}
	avg = sum / count;
	cout << "The sum of marks is " << sum << endl;
	cout << "The number of students is " << count << endl;
	cout << "The average marks are " << avg;
}