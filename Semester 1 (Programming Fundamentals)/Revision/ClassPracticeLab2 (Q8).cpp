#include <iostream>
using namespace std;
int main() {
	int num[20]{}, n;
	cout << "Enter the nuber of elements in the integer array (Min: 1, Max: 20): ";
	cin >> n;
	num[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter an integer: ";
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (num[i] < 0) {
				swap(num[i], num[j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
}