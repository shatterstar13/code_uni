#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "Enter a year ";
	cin >> x;
	if ((x % 100 == 0) && (x % 4 == 0 || x % 400 == 0)) {
		cout << "It is a leap year";
	}
	else
		cout << "It is not a leap year";
	return 0;
}