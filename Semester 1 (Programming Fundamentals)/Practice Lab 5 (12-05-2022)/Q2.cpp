#include <iostream>
#define size 50
using namespace std;
int length(char a[]);
bool isSame(char a[], char b[], int c);
int main() {
	char arr1[size]{}, arr2[size]{}, size_of_1{}, size_of_2{};
	cout << "Enter the first string: ";
	cin.getline(arr1, size);
	cout << "Enter the second string: ";
	cin.getline(arr2, size);
	size_of_1 = length(arr1);
	size_of_2 = length(arr2);
	if (size_of_1 != size_of_2) {
		cout << "The two strings are not the same.";
	}
	else {
		bool flag = isSame(arr1, arr2, size_of_1);
		if (flag == true) {
			cout << "The two strings are the same.";
		}
		else if (flag == false) {
			cout << "The two strings are not the same.";
		}
	}
}

int length(char a[])
{
	int i{ 0 };
	for (; a[i] != '\0'; i++);
	return i;
}

bool isSame(char a[], char b[], int c)
{
	int count{ 0 };
	for (int i = 0; i < c; i++) {
		if (a[i] == b[i]) {
			count++;
		}
	}
	if (count == c) {
		return true;
	}
	return false;
}
