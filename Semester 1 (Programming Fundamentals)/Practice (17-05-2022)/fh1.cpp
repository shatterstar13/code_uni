#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	int row{}, col{};
	int arr1[20][20]{}, arr2[20][20]{}, arr3[20][20];
	ifstream data;
	data.open("m.txt");
	data >> row;
	data >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			data >> arr1[i][j];
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			data >> arr2[i][j];
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr3[i][j] = (arr1[i][j] + arr2[i][j]);
		}
	}
	ofstream data2;
	data2.open("addd.txt");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			data2 << "   " << arr3[i][j];
		}
		data2 << "\n";
	}
}