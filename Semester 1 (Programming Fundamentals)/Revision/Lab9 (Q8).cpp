#include <iostream>
using namespace std;
int main() {
	int num[20]{}, n, last;
	cout << "Enter the number of elements the array should have [Min: 1, Max: 20]: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Enter an integer: ";
		cin >> num[i];
	}
	cout << "The leaders in the array are: ";
	for (int i = 0; i < n; i++) {
		int j;
		for (j = i + 1; j < n; j++) {
			if (num[i] <= num[j]) {
				break;
			}
		}
		if (j == n) {
			cout << num[i]<<" ";
		}
	}
}