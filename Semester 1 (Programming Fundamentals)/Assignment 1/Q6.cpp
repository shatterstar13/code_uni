#include<iostream>
using namespace std;
int main() {
	int inner, outer, n;
	cout << "Enter number of rows ";
	cin >> n;
	for (outer = n; outer >= 1; outer--) {
		for (inner = 1; inner <= outer; inner++) {
			cout << "*";
		}
		cout << endl;
	}
	for (outer = 1; outer <= n; outer++) {
		for (inner = 1; inner <= outer; inner++) {
			cout << "*";
		}
		cout << endl;
	}
}