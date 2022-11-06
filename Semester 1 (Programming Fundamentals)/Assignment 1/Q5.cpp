#include<iostream>
using namespace std;
int main() {
	int inner, outer, num=1,j=1;
	for (outer = 1; outer <= 5; outer++) {
		for (inner = 1; inner <= j;inner++) {
			cout << num << " ";
				num++;
		}
		j += 2;
		cout << endl;
	}
	/*int k = 7, num1 = 16;
	for (outer = 4; outer >= 1; outer--) {
		for (inner = 1; inner <= k; inner++) {
			cout << num1 << " ";
			num1--;
		}
		k -= 2;
		cout << endl;
	}*/
}