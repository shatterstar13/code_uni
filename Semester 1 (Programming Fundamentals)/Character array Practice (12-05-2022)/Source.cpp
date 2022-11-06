#include <iostream>
#include <conio.h>
using namespace std;
#define size 20
void input(char a[]);
int length(char a[]);
int main() {
	char arr1[size]{}, arr2[size]{};
	cout << "Enter string 1 (press space to stop).\n";
	input(arr1);
	cout << "Enter string 2 (press space to stop).\n";
	input(arr2);
	int x = length(arr1);
	for (int i = 0; arr2[i] != '\0'; i++) {
		arr1[x] = arr2[i];
		x++;
	}
	arr1[x] = '\0';
	cout << arr1;
}

void input(char a[])
{
	char temp{};
	bool flag = false;
	for (int i = 0; i < (size - 1) && !flag; i++) {
		temp = _getche();
		a[i] = temp;
		if (a[i] == 32) {
			flag = true;
		}
	}
	a[size - 1] = '\0';
	cout << endl;
}

int length(char a[])
{
	int i{ 0 };
	for (; a[i] != ' '; i++);
	return i;
}
