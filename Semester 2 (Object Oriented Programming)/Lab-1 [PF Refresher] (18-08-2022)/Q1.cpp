#include <iostream>
#include <iomanip>

using namespace std;

int *resizeArray(int *arr, int n);

int main() 
{
	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	cout << "\n";

	int* arr1 = new int[n];

	for (int i = 0; i < n; i++) 
	{
		cout << "Enter a number: ";
		cin >> arr1[i];
		cout << "\n";
	}

	int* arr2 = resizeArray(arr, n);

	/*int n2 = n * 2;
	int* arr2 = new int[n2]{};
	resizeArray(arr1, arr2, n);*/

	for (int i = 0; i < n; i++) {
		cout << setw(4) << arr2[i];
	}

	delete[] arr1;
	arr1 = nullptr;

	delete[] arr2;
	arr2 = nullptr;

}
int *resizeArray(int *arr, int n) 
{
	/*int n2 = n * 2;
	copy(arr1, arr1 + n, arr2);
	delete[] arr1;
	arr1 = nullptr;
	for (int i = 0; i < n2 - 1; i++) {
		(arr2[i + 4]) = (arr2[i] * 2);
	}
	return 0;*/

	int* returnArray = new int[size*2];

	copy(arr, arr + n, returnArray);

	for (int i = 0; i < size; i++)
	{
		returnArray[i + size] = arr[i] * 2;
	}

	return returnArray;
}