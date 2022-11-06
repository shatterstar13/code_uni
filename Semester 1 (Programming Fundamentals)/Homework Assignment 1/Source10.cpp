#include <iostream>
using namespace std;
int main() {
	string prompt;
	cout << "Choose either [yes] or [no]" << endl;
	cout << "Reboot the Computer and try to connect." << endl;
	cout << "Did that fix the problem? ";
	cin >> prompt;
	if (prompt == "no") {
		cout << endl << "*******************************************************" << endl;
		cout << "Choose either [yes] or [no]" << endl;
		cout << "Reboot the Router and try to connect." << endl;
		cout << "Did that fix the problem? ";
		cin >> prompt;
		if (prompt == "no") {
			cout << endl << "*******************************************************" << endl;
			cout << "Choose either [yes] or [no]" << endl;
			cout << "Make sure the cables between the Router and the Modem are connected firmly." << endl;
			cout << "Did that fix the problem? ";
			cin >> prompt;
			if (prompt == "no") {
				cout << endl << "*******************************************************" << endl;
				cout << "Choose either [yes] or [no]" << endl;
				cout << "Move the Router to a new location and try to connect." << endl;
				cout << "Did that fix the problem? ";
				cin >> prompt;
				if (prompt == "no") {
					cout << endl << "*******************************************************" << endl;
					cout << "Get a new Router." << endl;
				}
			}
		}
	}
	else if (!(prompt == "yes" || prompt == "no")) {
		cout << endl << "*******************************************************" << endl;
		cout << "Choose either [yes] or [no]" << endl;
	}
}