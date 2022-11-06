#include <iostream>
using namespace std;
int main() {
	int num[10],x, y;
	cout << "Enter 10 elements of the array: ";
	for (int count1 = 0; count1 < 10; count1++) {
		cin >> num[count1];
	}
	cout << "Enter starting point of the sub-array: ";
	cin >> x;
	cout << "Enter ending point of the sub-array: ";
	cin >> y;
	while (x <= y) {
		cout << num[x] << "\t";
		x++;
	}
}