#include <iostream>
using namespace std;
int main() {
	char arr[40] = "Islamabad";
	char *p;
	p = arr;
	while (*p) {
		if (*p >= 'a' && *p <= 'z') {
			*p -= 32;
		}
		p++;
	}
	p--;
	while (p >= arr) {
		cout << *p;
		p--;
	}
}