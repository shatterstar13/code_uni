#include<iostream>
using namespace std;
int main() {
	int x, i;
	cout << "Enter a number ";
	cin >> x;
	for (i = 1; i < x; i++) {
		cout << " ";
	}
	cout << x;
	return 0;
}