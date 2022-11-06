#include <iostream>
using namespace std;
int main() {
	float time, min;
	cout << "Enter the time of the call in HH.MM format seperated by a dot ";
	cin >> time;
	cout << "Enter number of minutes of the call ";
	cin >> min;
	if (time <= 23.59 && (time - static_cast<int>(time) <= 0.59)) {
		if (time >= 0 && time <= 6.59) {
			cout << "The rate of the call is " << min * 0.05;
		}
		else if (time >= 7.00 && time <= 19.00) {
			cout << "The rate of the call is " << min * 0.45;
		}
		else if (time >= 19.01 && time <= 23.59) {
			cout << "The rate of the call is " << min * 0.20;
		}
	}
	else
		cout << "Enter a valid time";
}
