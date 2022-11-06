#include <iostream>
using namespace std;
int fact(int n);
int main() {
	int sum{};
	for (int i = 1; i < 6; i++) {
		sum += (fact(i)) / i;
	}
	cout << sum;
}

int fact(int n)
{
	int count = 0, f = 1;
	while (count <= n-1) {
		f += (f * count);
		count++;
	}
	return f;
}
