#include <iostream>
//#include <cstring>
//#include <algorithm>
#define size 50
//using namespace std;
using std::cout;
using std::cin;
int main() {
	char arr1[size]{}, arr2[size]{}, temp[size]{};
	cout << "Enter the first string: ";
	cin.getline(arr1, size);
	cout << "Enter the second string: ";
	cin.getline(arr2, size);
	for (int i = 0; i < size - 1; i++) {
		temp[i] = arr1[i];
	}
	for (int i = 0; i < size - 1; i++) {
		arr1[i] = arr2[i];
	}
	for (int i = 0; i < size - 1; i++) {
		arr2[i] = temp[i];
	}
	//std::swap(arr1, arr2);
	cout << arr1 << "\n";
	cout << arr2 << "\n";
}