#include <iostream>
using namespace std;
#define n 10
int main() {
	int arr1[n]{}, arr2[n]{}, arr3[n]{}, a = 0, b = 0, flag = 0;;
	cout << "Enter size of Array 1: ";
	cin >> a;
	cout << "Enter size of Array 2: ";
	cin >> b;
	cout << "Enter the main array.\n";
	for (int i = 0; i < a; i++) {
		cout << "Enter an integer at index [" << i << "]: ";
		cin >> arr1[i];
	}
	cout << "Enter the sub array.\n";
	for (int i = 0; i < b; i++) {
		cout << "Enter an integer at index [" << i << "]: ";
		cin >> arr2[i];
	}
	for (int i = 0, j = 0; i < a; i++) {
		if (arr1[i] == arr2[i]) {
			arr3[i] = arr2[i];
			j++;
		}
	}
	for (int i = 0; i < b; i++) {
		if (arr2[i] == arr3[i]) {
			flag = 1;
		}
	}
	if (flag == 1) {
		cout << "The sub array is part of the main array.";
	}
	else
		cout << "The sub array is part of the main array.";
}