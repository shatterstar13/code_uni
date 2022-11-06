#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, n;
	float  p;
	cout << "Enter a number ";
	cin >> a;
	cout << "Enter its exponent ";
	cin >> n;
		p = pow(a, n);
		cout << p;
	return 0;
}