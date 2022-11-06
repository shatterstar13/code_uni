#include <iostream>
using namespace std;
int main() {
	int num[20]{}, n, flag = 0, k,j=0;
	cout << "Enter the nuber of elements in the integer array (Min: 1, Max: 20): ";
	cin >> n;
	num[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter an integer: ";
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (num[i] == num[j]) {
				flag=1;
			}
		}
	}
	if (flag == 1) {
		cout << "Not Unique";
	}
	else if (flag == 0) {
		cout << "Unique";
	}
}