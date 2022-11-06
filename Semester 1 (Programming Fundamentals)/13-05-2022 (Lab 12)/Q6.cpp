#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
#define size 50
int main() {
	char arr[size]{};
	int temp{0}, size_of{};
	cout << "Enter the string: ";
	cin.getline(arr, size);
	size_of = strlen(arr);
	for (int i = 0; i < size_of; i++) {
		if (arr[i] >= 48 && arr[i] <= 57) {
			temp = (arr[i] - 48) + (temp * 10);
		}
	}
	cout <<"As Integer: " << temp;
}