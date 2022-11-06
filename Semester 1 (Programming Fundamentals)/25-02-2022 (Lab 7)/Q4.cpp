#include<iostream>
using namespace std;
int main() {
	float num, f = 1;
	cout << "Enter a number ";
	cin >> num;
	for (int x = 1; x <= num; x++) {
		f *= x;
	}
	cout << f;
	return 0;
}