#include<iostream>
using namespace std;
int main()
{
	long n1, n2, sum;
	cout << "Enter two numbers ";
	cin >> n1 >> n2;
	for (; n1 <= n2; n1++) {
		sum = 0;
		for (int x = 1; x <= n1 / 2; x++) {
			if (n1 % x == 0)
				sum += x;
		}
		if (sum == n1)
			cout << n1 << " is a perfect number" << endl;
	}
	
	return 0;
}