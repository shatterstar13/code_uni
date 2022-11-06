#include <iostream>
using namespace std;
int main() {
	int num[100]{}, n = 0, sum = 0, count1 = 0, count2 = 0;
	float avg;
	cout << "Enter -1 to Quit.\n";
	cout << "************************************\n";
	cout << "Enter elements of the array: ";
	for (int count1 = 0; count1 < 100 && n!=-1; count1++) {
		cin >> n;
		if (!(n == -1 && n<=100)) {
			num[count1] = n;
			sum += num[count1];
			count2++;
		}
	}
	avg = sum / count2;
	cout << "Sum = " << sum << endl;
	cout << "Average = " << avg;
}