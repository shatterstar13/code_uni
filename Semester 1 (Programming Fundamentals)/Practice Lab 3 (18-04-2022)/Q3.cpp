#include <iostream>
using namespace std;
#define row 4
#define col 4
int d1(int num[row][col], int d1_sum) {
	for (int i = 0; i < row; i++) {
		d1_sum += num[i][i];
	}
	return d1_sum;
}
int d2(int num[row][col], int d2_sum) {
	for (int i = 0; i < row; i++) {
		d2_sum += num[i][(row - 1) - i];
	}
	return d2_sum;
}
int main() {
	int num[row][col]{}, d1_sum = 0, d2_sum = 0;
	cout << "Always use an array with equal number of rows and columns.\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter a positive integer at index [" << i << "]["<<j<<"]: ";
			cin >> num[i][j];
		}
	}
	cout << "The sum of the Left-to-Right diagonal is: " << d1(num, d1_sum);
	cout << "\nThe sum of the Right-to-Left diagonal is: " << d2(num, d2_sum);
}