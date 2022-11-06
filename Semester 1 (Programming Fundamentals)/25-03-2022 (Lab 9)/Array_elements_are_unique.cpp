#include <iostream>
using namespace std;
int main() {
	int num[10], uni = 0, flag = 0;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (num[i]==num[j]) {
				flag = 1;
			}
		}
	}
	if (flag == 0) {
		cout << "The array is unique.";
	}
	else if (flag == 1) {
		cout << "The array is not unique.";
	}
}