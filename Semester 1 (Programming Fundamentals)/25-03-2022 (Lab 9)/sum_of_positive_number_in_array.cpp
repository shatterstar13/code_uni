#include <iostream>
using namespace std;
int main() {
	int num[10], sum = 0;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	for (int count2 = 0; count2 < 10; count2++) {
		if (num[count2] >= 0) {
			sum += num[count2];
		}
	}
	
	cout << "The sum of all of the positive elements of the array is: "<<sum;
}