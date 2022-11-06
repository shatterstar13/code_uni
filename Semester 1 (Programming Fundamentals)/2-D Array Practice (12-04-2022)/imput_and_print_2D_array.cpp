#include <iostream>
using namespace std;
#define row 4
#define col 3
int main() {
	int two_d[row][col]{};
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "Enter value at index [" << i << "], [" << j << "]: ";
			cin >> two_d[i][j];
		}
	}
	cout << "{\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "  " << two_d[i][j] << "   ";
		}
		cout << "\n";
	}
	cout << "}";
}