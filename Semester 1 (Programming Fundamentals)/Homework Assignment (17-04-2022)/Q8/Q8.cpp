#include <iostream>
#include <iomanip>
#define row 3
#define col 3
using namespace std;
int main() {
	int num[row][col]{}, sum = 0, flag = 1, initial = 0;
	cout << "Enter an array with equal number of rows and columns.\n\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col;) {
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> num[i][j];
			if (num[i][j] <= (row * col)) {
				j++;
			}
			else
				cout << "Enter a value less than " << row * col << ".";
		}
	}
	for (int i = 0; i < col; i++) {
		initial += num[0][i];
	}
	for (int i = 0; i < row; i++) {
		sum = 0;
		for (int j = 0; j < col; j++) {
			sum += num[i][j];
		}
		//cout << sum << endl;;
		if (sum != initial) {
			flag = 0;
		}
	}
	for (int i = 0; i < row; i++) {
		sum = 0;
		for (int j = 0; j < col; j++) {
			sum += num[j][i];
		}
		//cout << sum << endl;
		if (sum != initial) {
			flag = 0;
		}
	}
	sum = 0;
	for (int i = 0; i < row; i++) {
		sum += num[i][i];
	}
	//cout << sum << endl;
	if (sum != initial) {
		flag = 0;
	}
	sum = 0;
	for (int i = 0; i < row; i++) {
		sum += num[i][(row - 1) - i];
	}
	//cout << sum << endl;
	if (sum != initial) {
		flag = 0;
	}
	if (flag == 1) {
		cout << "The array: \n";
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << setw(4) << num[i][j];
			}
			cout << endl;
		}
		cout << "is a Lo Shu Square.";
	}
	else if (flag == 0) {
		cout << "The array: \n";
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << setw(4) << num[i][j];
			}
			cout << endl;
		}
		cout << "is a not Lo Shu Square.";
	}
}