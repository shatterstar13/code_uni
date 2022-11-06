#include <iostream>
#include <string>
using namespace std;
int main() {
	int in2 = 1;
	for (int out = 1; out <= 4; out++) {
		for (int s = 4; s > out; s--) {
			cout << "  ";
		}
		for (int in = 1; in <= in2; in++) {
			cout << "* ";
		}
		in2 += 2;
		cout << endl;
	}
	int in3 = 5;
	for (int out = 3; out >= 1; out--) {
		for (int s = 4; s > out; s--) {
			cout << "  ";
		}
		for (int in = 1; in <= in3; in++) {
			cout << "* ";
		}
		in3 -= 2;
		cout << endl;
	}
	return  0;
}