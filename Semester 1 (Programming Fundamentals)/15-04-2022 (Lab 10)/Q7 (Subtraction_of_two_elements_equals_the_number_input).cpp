#include <iostream>
using namespace std;
#define size 5
int main() {
	int arr[size], n;
	for (int i = 0; i < size; i++) {
		cout << "Enter value at index [" << i << "]: ";
		cin >> arr[i];
	}
	cout << "Enter a number: ";
	cin >> n;
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				if ((arr[i] - arr[j]) == n) {
					cout << "Pair Found (" << arr[i] << "," << arr[j] << ") ";
				}
			}
			else if (arr[i] < arr[j]) {
				if ((arr[j] - arr[i]) == n) {
					cout << "Pair Found (" << arr[i] << "," << arr[j] << ") ";
				}
			}
		}
	}
	cout << "No Pair Found.";
}