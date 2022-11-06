#include <iostream>
using namespace std;
int main() {
	long int num[20]{};
	int pos = 0, neg = 0, zero = 0, even = 0, odd = 0;
	cout << "Enter twenty integers: ";
	for (int n = 0; n <= 19; n++) {
		cin >> num[n];
	}
	for (int n = 0; n <= 19; n++) {
		if (num[n] > 0) {
			pos++;
		}
		if (num[n] < 0) {
			neg++;
		}
		if (num[n] == 0) {
			zero++;
		}
		if (num[n] % 2 == 0) {
			even++;
		}
		if (num[n] % 2 != 0) {
			odd++;
		}
	}
	cout << "****************************************************\n";
	cout << "There are " << pos << " Positive numbers.\n";
	cout << "There are " << neg << " Negative numbers.\n";
	cout << "There are " << zero << " Zeroes.\n";
	cout << "There are " << even << " Even numbers.\n";
	cout << "There are " << odd << " Odd numbers.";
}