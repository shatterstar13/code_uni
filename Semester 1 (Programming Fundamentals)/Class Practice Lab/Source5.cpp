#include <iostream>
using namespace std;
int main() {
	int num[10], search;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	cout << "Enter the search value: ";
	cin >> search;
	for (int count2 = 0; count2 < 10; count2++) {
		if (search == num[count2]) {
			cout << search << " is in the array.";
		}
	}
}