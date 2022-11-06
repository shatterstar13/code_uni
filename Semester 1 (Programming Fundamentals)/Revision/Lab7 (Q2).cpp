#include <iostream>
using namespace std;
int main() {
	int n, x = 1 , count = 0, sum = 0, temp;
	cout << "Enter the number of elements you want to input: ";
	cin >> n;
	while (x <= n) {
		cout << "Enter an integer: ";
		cin >> temp;
		if (temp % 2 != 0) {
			sum += temp;
			count++;
		}
		x++;
	}
	cout << "The number of odd integers is: " << count;
	cout << endl << "The sum of odd integers is: " << sum;
}