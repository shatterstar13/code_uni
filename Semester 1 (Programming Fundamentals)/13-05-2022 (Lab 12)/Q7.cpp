#include <iostream>
#include <cstring>
using namespace std;
#define size 50
void spaces_small(char arr1[], char arr2[], int b);
int main() {
	char arr[size]{}, another[size]{};
	cout << "Enter a string: ";
	cin.getline(arr, size);
	int size_arr = strlen(arr);
	spaces_small(arr, another, size_arr);
}

void spaces_small(char arr1[], char arr2[], int b)
{
	for (int i = 0, j = 0; (i & j) < b && arr1[i] != '\0'; i++) {
		if (arr1[i] == 32) {
			arr2[j] = arr1[i];
			j++;
		}
		else if (arr1[i] >= 'a' && arr1[i] <= 'z') {
			arr2[j] = arr1[i];
			j++;
		}
	}
	arr1[size - 1] = '\0';
	cout << arr2;
}
