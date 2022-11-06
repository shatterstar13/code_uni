#include <iostream>
using namespace std;
int main() {
	int num1[20]{};
	int num2[20]{};
	int num;
	cout << "Enter a maximum of 20 elements in the Array." << endl;
	for (int count = 0; count < 20; count++) {
		cout << "Enter an integer: ";
		cin >> num;
		if (num < 100) {
			num1[count] = num;
		}
		else if (num > 100) {
			num2[count] = num;
		}
	}
	cout << "Elements in Array 1 " << endl;
	for (int count = 0; count < 20; count++) {
		if (num1[count] != 0) {
			cout << num1[count] << "\t";
		}
	}
	cout << "\nElements in Array 2 " << endl;
	for (int count = 0; count < 20; count++) {
		if (num2[count] != 0) {
			cout << num2[count] << "\t";
		}
	}
}