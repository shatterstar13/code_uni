#include <iostream>
using namespace std;
int main() {
	int arr1[10], arr2[5], arr3[5];
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> arr1[count1];
	}
	for (int count2 = 0; count2 < 5; count2++) {
		arr2[count2] = arr1[count2];
		cout << arr2[count2] << "\t";
	}
	cout << "\n";
	for (int count3 = 5, count4 = 0; count3 < 10 && count4 < 5; count3++, count4++) {
		arr3[count4] = arr1[count3];
		cout << arr3[count4] << "\t";
	}
}