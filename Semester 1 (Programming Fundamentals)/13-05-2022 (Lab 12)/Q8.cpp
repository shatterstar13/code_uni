
// Muaz Saleem (BSEF21M036)  ;  Q8: Program that prints the reverse of an array and stores it in another one

#include <iostream>
#include <cstring>
using namespace std;
#define size 20
void reverse(char arr1[], char arr2[], int a);
int main() 
{
	char arr[size]{}, another[size]{};
	int size_arr{};
	cout << "Enter the string: ";
	cin.getline(arr, size);

	size_arr = strlen(arr);   // taking the size of the array in a variable
	reverse(arr, another, size_arr);
	
}

void reverse(char arr1[], char arr2[], int a) {
	for (int i = a - 1, j = 0; i >= 0 && j < a; i--, j++)
	{
		cout << arr1[i];
		arr2[j] = arr1[i];
	}
	arr2[a] = '\0';
	cout << "\n" << arr2;
}