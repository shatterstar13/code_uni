#include <iostream>
using namespace std;
int main() {
	int temp;
	cout << "Enter Temprature in Fahrenheit ";
	cin >> temp;
	if (temp <= -362) {
		cout << "Oxygen will Freeze at that point" << endl;
	}
	if (temp >= -362 && temp <= -173) {
		cout << "Ethyl Alcohol will Freeze at that point" << endl;
	}
	if (temp >= -173 && temp <= -38) {
		cout << "Mercury will Freeze at that point" << endl;
	}
	if (temp >= -38 && temp <= 32) {
		cout << "Water will Freeze at that point" << endl;
	}
	if (temp >= -306 && temp <= 172) {
		cout << "Oxygen will Boil at that point" << endl;
	}
	if (temp >= 172 && temp <= 212) {
		cout << "Ethyl Alcohol will Boil at that point" << endl;
	}
	if (temp >= 212 && temp <= 676) {
		cout << "Water will Boil at that point" << endl;
	}
	if (temp >= 676) {
		cout << "Mercury will Boil at that point" << endl;
	}
}