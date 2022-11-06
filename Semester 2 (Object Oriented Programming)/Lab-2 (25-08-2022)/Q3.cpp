#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n{}, flag = 0;
	cout << "\nEnter the number of rows or columns in the matrix (since it needs to be a square matrix only one is needed): ";
	cin >> n;
	int **arr = new int*[n];
	
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	cout << "\n";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\nEnter value at index [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}

	cout << "\n\n";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
			{
				if (arr[i][j] == 0)
					flag = 1;
			}
			else
			{
				if (arr[i][j] != 0)
					flag = 1;
			}
			
		}
	}

	if (flag == 1) {
		cout << "The entered array is not a diagonal Matrix: \n";
	}
	else {
		cout << "The entered array is a diagonal Matrix: \n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << setw(4) << arr[i][j];
			}
			cout << "\n";
		}
	}
}