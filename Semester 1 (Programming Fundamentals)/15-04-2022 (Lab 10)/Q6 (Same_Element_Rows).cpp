#include <iostream>
using namespace std;
#define row 3
#define col 3
int main() {
	int arr[row][col]{}, count = 0, flag = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < row; i++) {
		count = 0;
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == arr[i][j + 1]) {
				count++;
				if (count == row - 1) {
					flag++;
				}
			}
		}
	}
	cout << "The number of rows with the same elements: " << flag;
	/*if (count == (row || col)) {
		cout << count;
	}
	else
		cout << count;*/
}