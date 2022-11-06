#include<iostream>
using namespace std;
int main() {
	int inner, outer, n;
	cout << "Enter number of rows ";
	cin >> n;
	for (outer = 1; outer <= n; outer++) {
		for (inner = 1; inner <= outer; inner++) {
			cout << "*";
		}
		for (inner = outer; inner < n; inner++)
		{
			cout << " ";
		}
		for (inner = outer; inner < n; inner++)
		{
			cout << " ";
		}
		for (inner = 1; inner <= outer; inner++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (outer = n-1; outer >= 1; outer--) {
		for (inner = 1; inner <= outer; inner++) {
			cout << "*";
		}
		for (inner = outer; inner < n; inner++)
		{
			cout << " ";
		}
		for (inner = outer; inner < n; inner++)
		{
			cout << " ";
		}
		for (inner = 1; inner <= outer; inner++)
		{
			cout << "*";
		}
		cout << endl;
	}
}