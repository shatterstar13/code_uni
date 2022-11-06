#include <iostream>
using namespace std;
int main() {
	int out, in1, in2, num = 1 , n;
	cout << "Enter number of rows ";
	cin >> n;
	for (int out = n; out >= 1; out--) {
		for (int in1 = 1; in1 <= out; in1++) {
			cout << "* ";
		}
		cout << endl;
			for (int in2 = 1; in2 < out; in2++)
			{
				cout << num << " ";
			}
			num++;
			cout << endl;
	}
}