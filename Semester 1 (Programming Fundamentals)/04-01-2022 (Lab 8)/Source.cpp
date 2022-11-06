#include <iostream>
using namespace std;
int main() {
	int num2, x, flag;
	cout << "Enter a number ";
	cin >> num2;
	for (int num1 = 1; num1 <= num2; num1++) {
		flag = 1;
		for (x = 2; x <= num1 / 2; x++)
		{
			if (num1 % x == 0)
			{
				flag = 0;
			}
		}
		if (flag == 1) {
			flag = 1;
			int num3;
			num3 = num1;
			num1 += 2;
			for (x = 2; x <= num1 / 2; x++)
			{
				if (num1 % x == 0)
				{
					flag = 0;
				}
			}
			if (flag == 1) {
				cout << "(" << num3 << "," << num1 << ")" << "," << " ";
			}
		}
	}
}