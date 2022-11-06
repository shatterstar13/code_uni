#include <iostream>
#include <iomanip>
using namespace std;
#define row1 2
#define col1 3
#define row2 3
#define col2 2
int main() {
	int arr1[row1][col1]{}, arr2[row2][col2]{}, mult[row1][col2]{}, sum = 0, k;
	cout << "For array 1: \n";
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			cout << "Enter value at index [" << i << "], [" << j << "]: ";
			cin >> arr1[i][j];
		}
	}
	cout << "\nFor array 2: \n";
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			cout << "Enter value at index [" << i << "], [" << j << "]: ";
			cin >> arr2[i][j];
		}
	}
	cout << "{\n";
	if (col1 == row2) {
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col2; j++) {
				mult[i][j] = 0;
				for (int k = 0; k < row2; k++) {
					mult[i][j] += (arr1[i][k] * arr2[k][j]);
				}
				cout << setw(6) << mult[i][j];
			}
			cout << "\n";
		}
	}
	cout << "}";
}