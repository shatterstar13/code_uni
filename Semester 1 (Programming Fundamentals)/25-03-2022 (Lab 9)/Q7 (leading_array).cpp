#include <iostream>
using namespace std;
int main() {
	int num[7]{ 6,7,4,3,5,2 }, temp{};
	for (int i = 0; i < 6; i++) {
		bool lead = true;
		for (int j = i + 1; j < 6; j++) {
			if (num[j] > num[i]) {
				lead = false;
				break;
			}
		}
		if (lead) {
			cout << num[i]<<" ";
		}
	}
}