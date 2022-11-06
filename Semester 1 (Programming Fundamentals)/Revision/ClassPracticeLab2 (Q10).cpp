#include <iostream>
using namespace std;
int main() {
	int num[20]{}, n, del = 0;
	cout << "Enter the nuber of elements in the integer array (Min: 1, Max: 20): ";
	cin >> n;
	num[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter an integer: ";
		cin >> num[i];
	}
	while ( del != -1) {
		cout << "\n*************************************************************************\n";
		cout << "Enter the integer you want to delete from the array (Enter -1 to quit): ";
		cin >> del;
		for (int i = 0; i < n; i++) {
			if (del == num[i]) {
				num[i] = -999;
			}

		}
	}
	for (int i = 0; i < n; i++) {
		if (num[i] != -999) {
			cout << num[i] << " ";
		}
	}
}