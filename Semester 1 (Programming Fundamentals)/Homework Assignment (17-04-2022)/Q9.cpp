#include <iostream>
#include <iomanip>
using namespace std;
#define n 7
int main() {
	long empId[n]{ 5658845,4520125,7895122,8777541,8451277,1302850,7580489 };
	int hours[n]{}, flag = 0;
	double payRate[n]{}, wages[n]{};
	for (int i = 0; i < n;) {
		cout << "Enter hours of Employee Id ( " << empId[i] << " ): ";
		cin >> hours[i];
		cout << "\n";
		if (hours[i] >= 0) {
			cout << "Enter Pay Rate of Employee Id ( " << empId[i] << " ): ";
			cin >> payRate[i];
			cout << "\n";
			if (payRate[i] >= 15.00) {
				wages[i] = (hours[i] * payRate[i]);
				i++;
			}
			else
				cout << "\nEnter a value greater than 15 for employee Pay Rates!\n\n";
		}
		else
			cout << "\nEnter a non-negative value for employee hours!\n\n";
	}
	
	for (int i = 0; i < n; i++) {
		cout << setw(8) << "The gross wages for Employee Id ( " << empId[i] << " ) are: $" << wages[i] << "\n\n";
	}
}