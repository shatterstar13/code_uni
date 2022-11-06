#include <iostream>
using namespace std;
int sum(int a, int b);
int main() {
	int a = 10, b = 67;
	cout<<sum(a, b);
}
int sum(int x, int y) {
	cout << x + y;
	return x + y;
}