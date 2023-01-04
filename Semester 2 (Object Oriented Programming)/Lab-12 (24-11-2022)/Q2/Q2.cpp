#include <iostream>

using namespace std;

template<typename T>
T getMin(T a, T b)
{
	return (a < b) ? a : b;
}

template<typename T1>
void printArray(T1* arr, int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() 
{
	int a = 10, b = 13; 

	cout << "\nEnter the first number: ";
	cin >> a;
	cout << "\nEnter second number: ";
	cin >> b;

	cout << "\nSmaller is: " << getMin(a, b) << endl;

	int n;
	//int arr[4] = { 1, 2, 3, 4 };

	cout << "\nEnter size of array: ";
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter value at index [" << i << "]: ";
		cin >> arr[i];
	}

	printArray(arr, n);

	delete[] arr;
	arr = nullptr;



	/*int** arr2D = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr2D[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "\nEnter Value at Index [" << i << "][" << j << "]: ";
			cin >> arr2D[i][j];
		}
	}


	for (int i = 0; i < n; i++)
	{
		delete[] arr2D[i];
		arr2D[i] = nullptr;
	}

	delete[] arr2D;
	arr2D = nullptr;*/
}

