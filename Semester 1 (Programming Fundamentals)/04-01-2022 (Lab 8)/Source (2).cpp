#include <iostream>
#include <fstream>
#include<cmath>
#include <string>
using namespace std;
int main() {
	/*string data;
	ofstream input;
	cout << "Write a multiple lines of text ";
	getline(cin,data);
	cout << endl;
	input.open("in.txt");
	input << data;
	ifstream dat;
	dat.open("in.txt");
	dat >> data;
	cout << data;*/

	/*int rows, columns, out, in;
	cout << "Enter Rows ";
	cin >> rows;
	cout << "Enter Columns ";
	cin >> columns;
	for (int out = 1; out <= columns; out++) {
		for (int in = 1; in <= rows; in++) {
			cout << "+ ";
		}
		cout << endl;
	}*/

	/*int n, count = 1;
	long double sum = 0;
	cout << "Enter N ";
	cin >> n;
	for (count = 1; count <= n; count++) {
		sum += pow(count, count+1);
	}
	cout << sum;*/

	/*int w, d;
	for (int w = 1; w <= 3; w++) {
		cout << "Week " << w << ":" << endl;
		for (int day = 1; day <= 7; day++) {
			cout << "\t" << "Day " << day << ":" << endl;
		}
		cout << "...  ..  ..." << endl;
	}*/

	/*int num1, num2, x, flag;
	cout << "Enter first number ";
	cin >> num1;
	cout << "Enter second number ";
	cin >> num2;
	for (; num1 <= num2; num1++) {
		flag = 1;
		for (x = 2; x <= num1/2; x++)
		{
			if (num1 % x == 0)
			{
				flag = 0;
			}
		}
		if (flag == 1) {
			cout << num1 << endl;
		}

	}*/

	/*int x, n, f, y, sum = 0, n2;
	cout << "Enter a number ";
	cin >> n;
	n2 = n;
	while (n != 0) {
		f = 1;
		x = n % 10;
		for (int i = 1; i <= x; i++) {
			f = f * i;
		}
		sum += f;
		n /= 10;
	}
	if (sum == n2) {
		cout << n2 << " is a strong number";
	}
	else
		cout << n2 << " is not a strong number";*/

		/*int num2, x, flag;
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
				cout << "(" << num3<<"," <<num1<<")" << " ";
			}
		}*/

/*long double sum = 0;
long double sum2 = 0;;
	for (int k = 1; k <= pow(10, 6); k++)
	{
		sum = 4 * (pow(-1, k + 1) / (2 * k - 1));
		sum2 += sum;
	}
	cout << sum2;*/
}