#include <iostream>
using namespace std;
#define row 3
#define col 3
int main() {
	int arr[row][col], flag = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	if (row==col) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if ((arr[i][j]!=0) && (arr[i][j] != 1)) {
					flag = 1;
				}
			}
		}
	}
	if (flag == 1) {
		cout << "It is not an identity matrix.";
	}
	else {
		cout << "It is an identity matrix.";
	}
}