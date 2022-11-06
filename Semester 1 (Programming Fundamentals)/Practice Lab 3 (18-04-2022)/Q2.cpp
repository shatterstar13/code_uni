#include <iostream>
#include <iomanip>
using namespace std;
#define n 10
int main() {
	int arr[n]{}, num, size = 0;
	cout << "Enter the size of the array [Min: 1, Max: 10]: ";
	cin >> size;
	cout << "\n";
	for (int i = 0; i < size; i++) {
		cout << "Enter an integer at index [" << i << "]: ";
		cin >> arr[i];
	}
	cout << "\nEnter the number of times the array is to be rotated: ";
	cin >> num;
	for (int j = 0; j < num; j++) {
		int last = arr[n - 1];
		for (int i = 0; i < size; i++) {
			arr[i + 1] = arr[i];
		}
		arr[0] = last;
	}
	for (int i = 0; i < size; i++) {
		cout << setw(4) << arr[i];
	}
}