#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define row 10
#define col 10
int main()
{
	int num[row][col]{}	, a = 0, b = 0;
	cout << "Enter number of rows in the array: ";
	cin >> a;
	cout << "Enter number of columns in the array: ";
	cin >> b;
	for (int i = 0; i < a; i++) 
	{
		for (int j = 0; j < b; j++) 
		{
			cout << "Enter value at index [" << i << "][" << j << "]: ";
			cin >> num[i][j];
		}
	}
	for (int i = 0; i < a; i++) 
	{
		for (int s = 0; s < i; s++)
		{
			cout << "  ";
		}
		for (int j = i; j < b; j++) 
		{
			cout << num[i][j] <<" ";
		}
		cout << "\n";
	}
}