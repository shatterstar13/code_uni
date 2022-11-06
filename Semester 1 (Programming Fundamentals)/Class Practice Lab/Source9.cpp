#include <iostream>
using namespace std;
int main() {
	int num1[10];
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num1[count1];
	}
	for (int count2 = 0; count2 < 10;) {
		if (num1[count2] < 0) {
			for (int count3 = 0; count3 < 9; count3++) {
				num1[count3] = num1[(count3)+1];
			}
		}
		else
			count2++;
		cout << num1[count2] << "\t";
	}
}