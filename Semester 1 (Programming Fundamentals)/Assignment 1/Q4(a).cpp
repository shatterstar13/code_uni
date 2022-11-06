#include<iostream>
using namespace std;
int main()
{
	int n1, sum = 0;
	cout << "Enter a number ";
	cin >> n1;
	for (int x = 1; x <= n1 / 2; x++) {
		if (n1 % x == 0)
			sum += x;
	}
	if (sum == n1)
		cout << n1 << " is a perfect number" << endl;
	else
		cout << n1 << " is not a perfect number" << endl;
	return 0;
}