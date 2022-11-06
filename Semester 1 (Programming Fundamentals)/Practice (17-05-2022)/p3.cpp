#include <iostream>
using namespace std;
int sum(int *x, int *y);
int main() {
	int a = 10, b = 67;
	cout << sum(&a, &b);
	cout << a + b;
}
int sum(int *x, int *y) {
	cout << *x + *y;
	*x = 5, * y = 7;
	return *x + *y;
}