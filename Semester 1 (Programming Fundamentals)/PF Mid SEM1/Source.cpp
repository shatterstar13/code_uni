#include <iostream> 
using namespace std;
constexpr float cal_min = 0.36;
int main() {
	int min = 5;
	while (min <= 30) {
		cout << "The calories burned after " << min << " minutes are " << min * cal_min << endl;
		min += 5;
	}
}