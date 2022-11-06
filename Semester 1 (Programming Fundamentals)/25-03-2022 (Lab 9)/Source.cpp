#include <iostream>
using namespace std;
int main() {
	int num[100], n;
	cout << "Enter the number of elements you want to input in the array (min 1/ max 100): ";
	cin >> n;
	num[n];
	cout << "Enter elements of the array: ";
	for (int count1 = 0; count1 < n; count1++) {
		cin >> num[count1];
	}
	for (int count2 = n-1; count2 >=0; count2--) {
		cout << num[count2] << "\t";
	}
}