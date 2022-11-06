
// Muaz Saleem (BSEF21M036) ; Q1: Matrix Subtraction with funtions

#include <iostream>
#include <iomanip>
using namespace std;
#define row 3
#define col 3
void input1(int a[row][col]);
void input2(int b[row][col]);
void subtract(int a[row][col], int b[row][col]);
int main() 
{
	int arr1[row][col]{}, arr2[row][col]{};
	input1(arr1);  // inputting the first array
	cout << "\n";
	input2(arr2); // inputting the second array

	subtract(arr1, arr2);  // subtracting
}

void input1(int a[row][col])
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void input2(int b[row][col])
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> b[i][j];
		}
	}
}

void subtract(int a[row][col], int b[row][col])
{
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			a[i][j] -= b[i][j]; // stores the subtracted value in the first array 
		}
	}
	cout << "{\n";
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout <<setw(4) << a[i][j];
		}
		cout << "\n";
	}
	cout << "}";
}

