#include <iostream>
using namespace std;
int main() {
	int num[7]{ 1,2,3,4,5,6,7 };
	int size = sizeof(num) / sizeof(num[0]);
	int* p;
    p = num;
	int mult{};
	mult += num[0];
	while (*p<size) {
		mult *= *p;
		p++;
	}
	cout << mult;
}