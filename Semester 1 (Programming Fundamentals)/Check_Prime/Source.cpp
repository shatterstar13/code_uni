#include <iostream>
using namespace std;
int main()
{
	int x, flag = 1, num;
	cout << "Enter a positive integer ";
	cin >> num;
	for (x = 2; x <= num/2; x++) {
		if (num % x == 0) {
			flag = 0;
		}
	}
	if (flag == 1) {
		cout << num << " is a prime number";
	}
	return 0;
}