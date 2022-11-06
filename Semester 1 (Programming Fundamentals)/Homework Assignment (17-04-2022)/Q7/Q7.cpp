#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#define n 100
int main() {
	int num[n]{}, count = 0, temp, l, s;
	float sum = 0, avg = 0;
	string file;
	cout << "Enter the file name (numbers.txt): ";
	cin >> file;
	if (file != "numbers.txt") {
		cout << "\nEnter a valid name!\n\n";
	}
	else {
		ifstream data1;
		data1.open(file);
		while (data1 >> temp) {
			count++;
		}
		ifstream data2;
		data2.open(file);
		for (int i = 0; i < count; i++) {
			data2 >> num[i];
		}
		l = num[0];
		s = num[0];
		for (int i = 0; i < count; i++) {
			if (num[i] > l) {
				l = num[i];
			}
			if (num[i] < s) {
				s = num[i];
			}
			sum += num[i];
		}
		avg = sum / count;
		cout << "\n" << s << " is the lowest number in the file.\n\n";
		cout << l << " is the highest number in the file.\n\n";
		cout << sum << " is the sum of all the numbers in the file.\n\n";
		cout << avg << " is the average of all the numbers in the file.\n\n";
	}
}