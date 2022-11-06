#include <iostream>
#include <iomanip>
using namespace std;
#define row 4
#define col 3
int main() {
	int arr1[row][col]{}, arr2[row][col]{}, add[row][col]{};
	cout << "For array 1: \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter value at index [" << i << "], [" << j << "]: ";
			cin >> arr1[i][j];
		}
	}
	cout << "\nFor array 2: \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter value at index [" << i << "], [" << j << "]: ";
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			add[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	cout << "[\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << setw(4) << add[i][j];
		}
		cout << "\n";
	}
	cout << "]";
}