#include<iostream>
using namespace std;
int main()
{
	int day, month, year;
	cout << "Enter date (in digits) ";
	cin >> day;
	cout << "Enter Month (in digits) ";
	cin >> month;
	cout << "Enter Year (in digits) ";
	cin >> year;
	if (year % 400 == 0||(year % 4 == 0 && year % 100 != 0)) {
		if (month == 2 && day <= 29) {
			cout << "Valid";
		}
		else if (month == (4 || 6 || 9 || 11) && day <= 30) {
			cout << "Valid";
		}
		else if (month == (1 || 3 || 5 || 7 || 8 || 10 || 12) && day <= 31) {
			cout << "Valid";
		}
		else
			cout << "Invalid";
	}
	else {
		if (month == 2 && day <= 28) {
			cout << "Valid";
		}
		else if (month == (4 || 6 || 9 || 11) && day <= 30) {
			cout << "Valid";
		}
		else if (month == (1 || 3 || 5 || 7 || 8 || 10 || 12) && day <= 31) {
			cout << "Valid";
		}
		else
			cout << "Invalid";
	}
	
    return 0;
}