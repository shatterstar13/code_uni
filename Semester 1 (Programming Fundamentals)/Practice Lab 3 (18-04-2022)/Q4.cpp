#include <iostream>
#include <iomanip>
using namespace std;
#define row 3
#define col 3
int main() {
	int symm[row][col], trans[row][col]{}, flag = 0;
	cout << "Always use a matrix with equal number of rows and columns.\n";
	if (row == col) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << "Enter an integer at index [" << i << "][" << j << "]: ";
				cin >> symm[i][j];
			}
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				trans[i][j] = symm[j][i];
			}
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (symm[i][j] == trans[i][j]) {
					flag++;
				}
			}
		}
		if (flag == (row*col)) {
			cout << "The matrix: \n";
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					cout << setw(4) << symm[i][j];
				}
				cout << "\n";
			}
			cout << " is a Symmetric Matrix";
		}
		else {
			cout << "The matrix: \n";
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < col; j++) {
					cout << setw(4) << symm[i][j];
				}
				cout << "\n";
			}
			cout << "is not a Symmetric Matrix";
		}
	}
	else
		cout << "Use a Matrix with equal number of rows and columns.";
}