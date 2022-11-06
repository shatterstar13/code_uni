#include <iostream>
using namespace std;
int main() {
	char prompt;
	float data;
	cout << "Enter [A/a], [B/b], [C/c] for the package you have purchased" << endl;
	cin >> prompt;
	if (prompt == 'A' || prompt == 'a') {
		cout << "Enter amount of data used (in gigabytes) ";
		cin >> data; cout << endl;
		if (data <= 4) {
			cout<<"The Bill is $39.99";
		}
		else if (data > 4) {
			cout << "The bill is " << ((data - 4) * 10) + 39.99 << " $";
		}
	}
	if (prompt == 'B' || prompt == 'b') {
		cout << "Enter amount of data used (in gigabytes) ";
		cin >> data; cout << endl;
		if (data <= 8) {
			cout << "The Bill is $59.99";
		}
		else if (data > 8) {
			cout << "The bill is " << ((data - 8) * 5) + 59.99 << " $";
		}
	}
	if (prompt == 'C' || prompt == 'c') {
		cout << "The Bill is $69.99";
	}
	else
		cout << "Please enter a valid character";
}
