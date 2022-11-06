
// Muaz Saleem (BSEF21M036) ; C7-Q21: Program to illustrate 2D array operations

#include <iostream>
#include <iomanip>
using namespace std;
#define row 2  // definition of row and column size
#define col 2
int getTotal(int arr[row][col]) // funtion to sum all the elements of a 2D array
{
    int sum = 0;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
float getAverage(int arr[row][col]) // funtion to find the average of all the elements of a 2D array
{
	float avg = 0, sum = 0;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			sum += arr[i][j];
		}
	}
	avg = sum / (row * col);
	return avg;
}
int getRowTotal(int arr[row][col], int n1)  // funtion to sum all the elements of a certain row in a 2D array
{
	int row_sum = 0;
	for (int j = 0; j < col; j++) 
	{
		row_sum += arr[n1][j];
	}
	return row_sum;
}
int getColumnTotal(int arr[row][col], int n2)  // funtion to sum all the elements of a certain column in a 2D array
{
	int col_sum = 0;
	for (int i = 0; i < row; i++)
	{
			col_sum += arr[i][n2];
	}
	return col_sum;
}
int getHighestInRow(int arr[row][col], int n3)  // funtion to find the highest value in certain row in a 2D array
{
	int l = arr[n3][0];
	for (int j = 0; j < col; j++) 
	{
		if (arr[n3][j] > l) 
		{
			l = arr[n3][j];
		}
	}
	return l;
}
int getLowestInRow(int arr[row][col], int n4)  // funtion to find the highest value in certain column in a 2D array
{
	int s = arr[n4][0];
	for (int j = 0; j < col; j++) 
	{
		if (arr[n4][j] < s) 
		{
			s = arr[n4][j];
		}
	}
	return s;
}
int main() 
{
	int arr[row][col], n1 = row + 1, n2 = col + 1, n3 = row + 1, n4 = row + 1;
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}
	while (n1 >= row) 
	{
		cout << "\nEnter a valid subscript of a row in the array for getRowTotal: ";
		cin >> n1;
	}
	while (n2 >= col) 
	{
		cout << "\nEnter a valid subscript of a column in the array for getColumnTotal: ";
		cin >> n2;
	}
	while (n3 >= row) 
	{
		cout << "\nEnter a valid subscript of a row in the array for getHighestInRow: ";
		cin >> n3;
	}
	while (n4 >= row) 
	{
		cout << "\nEnter a valid subscript of a row in the array for getLowestInRow: ";
		cin >> n4;
	}
	cout << "The result of the getTotal Function is: "<< getTotal(arr) << "\n";
	cout << "\nThe result of the getAverage Function is: "<< getAverage(arr) << "\n";
	cout << "\nThe result of the getRowTotal Function is: "<< getRowTotal(arr, n1) << "\n";
	cout << "\nThe result of the getColumnTotal Function is: " << getColumnTotal(arr, n2) << "\n";
	cout << "\nThe result of the getHighestInRow Function is: " << getHighestInRow(arr, n3) << "\n";
	cout << "\nThe result of the getLowestInRow Function is: " << getLowestInRow(arr, n4) << "\n";
}