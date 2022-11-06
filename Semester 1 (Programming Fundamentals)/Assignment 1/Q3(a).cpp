#include<iostream>
using namespace std;
int main() {
	long long x = 0, y = 1, sum = 0, n;
	cout << "Enter a number ";
	cin >> n;
	for (int i = 0; i < n; i++){
		sum = x + y;
		x = y;
		y = sum;
	}
	cout << "The nth term of the Fibonacci sequence is " << x;
}