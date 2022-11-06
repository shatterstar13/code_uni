#include <iostream>
using namespace std;
#define max 10
int *maxmin(int ar[], int v);
int main()
{
	int  arr[max];
	int n, i, *p;
	cout << "Number of values you want to input: ";
	cin >> n;
	cout << "Input " << n << " values\n";
	for (i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}
	p = maxmin(arr, n);
	cout << "Minimum value is: " << *p++ << "\n";
	cout << "Maximum value is: " << *p << "\n";
}
int *maxmin(int arra1[], int v)
{
	int i;
	static int result_mm[2];
	result_mm[0] = arra1[0];
	result_mm[1] = arra1[0];
	for (i = 1; i < v; i++)
	{
		if (result_mm[0] > arra1[i])
			result_mm[0] = arra1[i];
		if (result_mm[1] < arra1[i])
			result_mm[1] = arra1[i];
	}
	return result_mm;
}
