
// Muaz Saleem (BSEF21M036) ; Q2: Matrix multiplication with funtions

#include <iostream>
#include <iomanip>
using namespace std;
#define row1 2
#define col1 2
#define row2 2
#define col2 2
void input1(int a[row1][col1]);   // input functions
void input2(int b[row2][col2]);
void multiply(int a[row1][col1], int b[row2][col2], int[row1][col2]);  // multiplication which takes three arrays as parameters
int main()
{
	int arr1[row1][col1]{}, arr2[row2][col2]{}, mult[row1][col2]{};
	input1(arr1);
	cout << "\n";
	input2(arr2);

	multiply(arr1, arr2, mult);
}

void input1(int a[row1][col1])
{
	for (int i = 0; i < row1; i++) 
	{
		for (int j = 0; j < col1; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void input2(int b[row2][col2])
{
	for (int i = 0; i < row2; i++) 
	{
		for (int j = 0; j < col2; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> b[i][j];
		}
	}
}

void multiply(int a[row1][col1], int b[row2][col2], int mult[row1][col2])
{
	if (col1 == row2)   // checks if columns of first and rows of second are equal
	{
		for (int i = 0; i < row1; i++)   // rows of first
		{
			for (int j = 0; j < col2; j++)   // columns of second
			{
				mult[i][j] = 0;
				for (int k = 0; k < col1; k++) {
					mult[i][j] += (a[i][k] * b[k][j]);   // stores the result in another array
				}
				cout << setw(6) << mult[i][j];  // displays as the loop progresses
			}
			cout << "\n";
		}
		cout << "}";
	}  //(col1 == row2)
	else {
		cout << "Use same columns of first and rows of second must be the same.";
	}
		
}

