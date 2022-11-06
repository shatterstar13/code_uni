#include <iostream>
using namespace std;
int main() {
	int n, x = 1, largest = 0, temp;
	cout << "Enter the number of elements you want to input: ";
	cin >> n;
	while (x <= n) {
		cout << "Enter an integer: ";
		cin >> temp;
		if (temp >= largest) {
			largest = temp;
		}
		x++;
	}
	cout << largest << " is the largest number of the " << n << " elements";
}