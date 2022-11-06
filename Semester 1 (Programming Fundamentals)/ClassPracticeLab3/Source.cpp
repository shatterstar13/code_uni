#include <iostream>
#define size  20
using namespace std;
int main() {
	int num[size], temp;
	for (int i = 0; i < size; i++) {
		cout << "Enter an integer: ";
		cin >> num[i];
	}
	for (int i = 0; i < size; i+=2) {
		for (int j = i + 1; j < size; j+=2) {
			temp = num[i];
			num[i] = num[j];
			num[j] = temp;
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		cout << num[i] << " ";
	}
}