#include<iostream>
using namespace std;
int main() {
	int num, rem, q, sum = 0, size{};
	cout << "Enter a number ";
	cin >> num;
	while (num != 0) {
		rem = num % 10;
		num = num / 10;
		if (rem % 2 == 0) {
			cout << rem << endl;
		}
	}
}