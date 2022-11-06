#include <iostream>
using namespace std;
int main() {
	int num[10], smallest = 0;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	smallest = num[0];
	for (int count2 = 0; count2 < 10; count2++) {
		if (num[count2] < smallest) {
			smallest = num[count2];
		}
	}
	cout << smallest << " is the smallest number in the array." << endl;
}