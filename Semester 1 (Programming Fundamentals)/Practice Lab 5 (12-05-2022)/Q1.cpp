#include <iostream>
using namespace std;
#define size 20
int length(char a[]);
int main() {
	char arr[size]{};
	cin.getline(arr, size);
	cout << length(arr);
}
int length(char a[])
{
	int i{ 0 };
	for (; a[i] != '\0'; i++);
	return i;
}