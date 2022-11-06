#include <iostream>
#include <cmath>
using namespace std;
int decimaltobinary(int n, int s);
int main() {
	int dec{}, sign{};
	cout << "Enter any decimal number: ";
	cin >> dec;
	dec < 0 ? sign = -1 : sign = 1;
	dec = abs(dec);
	cout << "The decimal number: " << dec << " converted to binary is: " << decimaltobinary(dec, sign);
}

int decimaltobinary(int n, int s)
{
	long binary{}, rem{};
	int place = 1;
	while (n != 0) {
		 rem = n % 2;
		 binary += (rem * place);
		 place *= 10;
		 n /= 2;
	}
	return binary*s;
}
