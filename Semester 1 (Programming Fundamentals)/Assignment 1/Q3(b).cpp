#include<iostream>
using namespace std;
int main() {
	long long x = 0, y = 1, sum = 0, n, z = 0;
	cout << "Enter a number ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		sum = x + y;
		x = y;
		y = sum;
		z += x;
	}
	cout << "The sum of the Fibonacci sequence till the nth term is " << z;
}