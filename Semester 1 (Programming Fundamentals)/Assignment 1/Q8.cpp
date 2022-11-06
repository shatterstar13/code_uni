#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int inner, outer, num, rows, space;
	cout << "Enter number of rows ";
	cin >> rows;
	for (outer = 0; outer < rows; outer++) {
		num = 1;
		for (space = 1; space < (rows - outer); space++) {
			cout << "  ";
		}
		for (inner = 0; inner <= outer; inner++) {
			cout << setw(4) << num << " ";
			num = num * (outer - inner) / (inner + 1);
		}
		cout << endl;
	}
}