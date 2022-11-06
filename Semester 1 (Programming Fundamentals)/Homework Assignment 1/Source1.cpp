#include <iostream>
using namespace std;
int main() {
	float cal, fat_g, cal_f,per_cal;
	cout << "Enter number of calories in food ";
	cin >> cal;
	cout << "Enter amount of fat grams in food ";
	cin >> fat_g;
	if ((cal && fat_g) >= 0) {
		cal_f = fat_g * 9;
		if (cal_f < cal) {
			per_cal = (cal_f / cal) * 100;
			cout << "The percentage amount of calories from fat are " << per_cal<<"%" << endl;
			if (per_cal < 30) {
				cout << "This food is low in fat";
			}
		}
		else
			cout << "Fat grams were incorrectly entered";
	}
}