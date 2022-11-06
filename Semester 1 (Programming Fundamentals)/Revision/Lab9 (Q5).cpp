#include <iostream>
using namespace std;
int main() {
	int num[20]{}, n, temp;
	char prompt;
	cout << "Enter the number of elements in the array [Min: 1, Max: 20]: ";
	cin >> n;
	num[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter an integer: ";
		cin >> num[i];
	}
	cout << "Choose whether the array should be in ascending [A/a] or descending [D/d] order: ";
	cin >> prompt;
	if (prompt == 'A' || prompt =='a') {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i; j++) {
				if (num[j] > num[j + 1]) {
					temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;
				}
			}
		}
		cout << "The Array in Ascending order is: ";
		for (int i = 0; i < n; i++) {
			cout << num[i] << " ";
		}
	}
	else if (prompt == 'd' || prompt=='D') {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i; j++) {
				if (num[j] < num[j + 1]) {
					temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;
				}
			}
		}
		cout << "The Array in Descending order is: ";
		for (int i = 0; i < n; i++) {
			cout << num[i] << " ";
		}
	}
	else
		cout << "Enter either [A/a] or [D/d].";
}