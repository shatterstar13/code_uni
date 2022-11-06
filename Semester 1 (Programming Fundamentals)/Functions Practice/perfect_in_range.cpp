#include <iostream>
using namespace std;
void range(int, int);
int perfect(int);
int main() {
	int n1{}, n2{}, chk{};
	cout << "Enter the lower limit of the range: ";
	cin >> n1;
	cout << "Enter the upper limit of the range: ";
	cin >> n2;
	range(n1, n2);
	cout << "\n\n";
}
void range(int a, int b) {
	while (a <= b) {
		perfect(a);
		if (perfect(a)) {
			cout << a << " is a perfect number.\n";
		}
		a++;
	}
}
int perfect(int c) {
	int sum{};
	for (int x = 1; x < c; x++) {
		if (c % x == 0) {
			sum += x;
		}
	}
	if (sum == c)
		return 1;
	else
		return 0;
}