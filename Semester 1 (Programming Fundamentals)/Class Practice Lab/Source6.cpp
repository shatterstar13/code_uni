#include <iostream>
using namespace std;
int main() {
	int num[10], largest = 0, smallest = 0;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	for (int count2 = 0; count2 < 10; count2++) {
		if (num[count2] > largest) {
			largest = num[count2];
		}
		smallest = num[0];
		if (num[count2] < smallest) {
			smallest = num[count2];
		}
	}
	cout << largest << " is the largest number in the array." << endl;
	cout << smallest << " is the smallest number in the array." << endl;
}