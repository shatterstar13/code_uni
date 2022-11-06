#include <iostream>
using namespace std;
int main() {
	int num[10], n1 = 0, n2 = 0;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	for (int i = 0; (i < 10) && ((n1 & n2) == 0); i++) {
		if (num[i] < num[i + 1]) {
			n1 = 1;
		}
		else if(num[i] > num[i + 1]) {
			n2 = 1;
		}
	}
	if (n1 == 1) {
		cout << "The array is sorted in Ascending order.";
	}
	else if (n2 == 1) {
		cout << "The array is sorted in Descending order.";
	}
}