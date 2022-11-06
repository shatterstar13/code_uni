#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define row 3
#define col 2
int main() 
{
	int num[row][col]{}, square[row][col]{};
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> num[i][j];
		}
	}
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			square[i][j] = pow(num[i][j], 2);
		}
	}
	for (int i = 0; i < row; i++) 
	{
		for (int j = 0; j < col; j++) 
		{
			cout << setw(4) << square[i][j];
		}
		cout << "\n";
	}
}