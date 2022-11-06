#include <iostream>
using namespace std;
int main() {
	char prompt;
	float data, amount1 = 0, amount2 = 0, amount3 = 69.99;
	cout << "Enter [A/a], [B/b], [C/c] for the package you have purchased" << endl;
	cin >> prompt;
	cout << "Enter amount of data used (in gigabytes) ";
	cin >> data; cout << endl;
	if (prompt == 'A' || prompt == 'a') {
		if (data <= 4) {
			cout << "The Bill is $39.99";
		}
		else if (data > 4) {
			amount1 = ((data - 4) * 10) + 39.99;
			amount2 = ((data - 8) * 5) + 59.99;
			cout << "The bill is " << amount1 << "$" << endl;
		}
		if (amount1 - amount2 >= 0) {
			cout << "If you had subscribed Package B you would have saved " << amount1 - amount2 << "$" << endl;
		}
		cout << "If you had subscribed Package C you would have saved " << amount1 << "$";
	}
	else if (prompt == 'B' || prompt == 'b') {
		amount2 = ((data - 8) * 5) + 59.99;
		if (data <= 8) {
			cout << "The Bill is $59.99";
		}
		else if (data > 8) {
			cout << "The bill is " << amount2 << "$" << endl;
		}
		cout << "If you had subscribed Package C you would have saved " << amount2 << "$" << endl;
	}
	else if (prompt == 'C' || prompt == 'c') {
		cout << "The Bill is $69.99";
	}
	else
		cout << "Please enter a valid character";
}
