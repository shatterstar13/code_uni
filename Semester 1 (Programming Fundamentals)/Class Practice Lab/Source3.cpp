#include <iostream>
using namespace std;
int main() {
	int num[10], temp[10], n=10;
	cout << "Enter 10 elements of the array: ";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	/*for (int i = 0; i < 10; i++) {
		if (num[i] != num[i + 1]) {
			temp[j++] = num[i];
		}
	}
	temp[j++] = num[9];
	for (int i = 0; i < j; i++) {
		num[i] = temp[i];
	}
	for (int i = 0; i < j; i++)
		cout << num[i] << " ";*/
		/*for (int j = i + 1; j < 10;) {
				if (num1[i] == num1[j]) {
					int n = 9;
					for (int k = 0; k < n - 1; ++k) {
						num1[k] = num1[k + 1];
						--n;
					}
				}
				else
					++j;
			}
			cout << num1[i] << "\t";*/
	int j = 0, i;
	for (i = 0; i < n-1; ++i) {
		if (num[i] != num[i + 1]) {
			temp[j++] = num[i];
			temp[j++] = num[n - 1];
		}
	}
	for (i = 0; i < j; i++) {
		num[i] = temp[i];
	}
	for (i = 0; i < j; i++) {
		cout << num[i] << " ";
	}
}