#include <iostream>
#include <iomanip>

using namespace std;

void destructor(int** arr, int r);

int main() {
	int row{}, col{};
	cout << "\nEnter number of rows in the array: ";
	cin >> row;
	cout << "\nEnter number of columns in the array: ";
	cin >> col;
	cout << "\n";
	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col]{i};
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << "\n";
	}
	destructor(arr, row);
	return 0;
}

void destructor(int** arr, int r)
{
	cout << "\nDeallocating dynamic Memory...\n";
	for (int i = 0; i < r; i++) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
}
