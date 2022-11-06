#include <iostream>
using namespace std;
int main() {
	int x, y, temp;
	cout << "Enter the 1st number: ";
	cin >> x;
	cout << "Enter the 2nd number: ";
	cin >> y;
	temp = x;
	x = y;
	y = temp;
	cout << "The swapped numbers are " << x << " & " << y;
}