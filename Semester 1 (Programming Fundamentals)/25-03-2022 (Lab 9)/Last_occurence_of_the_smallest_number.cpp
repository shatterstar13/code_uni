#include <iostream>
using namespace std;
int main() {
	int num[10], smallest = 0, occu;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	smallest = num[0];
	for (int count2 = 0; count2 < 10;count2++) {
		if (num[count2] < smallest) {
			smallest = num[count2];
		}
	}
	for (int count3 = 0; count3 < 10; count3++) {
		if (smallest == num[count3]) {
			occu = count3;
		}
	}
	cout << "The last occurence of the smallest number in the array is at the index number: " << occu;
}