#include <iostream>
#include <iomanip>
#include <cmath>
constexpr float car_dio = 258.0, air = 331.5, hel = 972.0, hyd = 1270.0;
using namespace std;
int main() {
	char prompt = '0';
	double length;
	float time=1;
	if (time >= 0 && time <= 30) {
		cout << "Enter 'C' or 'c' to select speed of sound in Carbon Dioxide " << endl;
		cout << "Enter 'A' or 'a' to select speed of sound in Air " << endl;
		cout << "Enter 'H' or 'h' to select speed of sound in Hydrogen " << endl;
		cout << "Enter 'S' or 's' to select speed of sound in Helium " << endl;
		cout << "Your selection: ";
		cin >> prompt;
		cout << "Enter the time the sound wave took to travel in the selected medium from its point of origin in seconds: ";
		cin >> time;
		cout << endl;
	}
		if (prompt == 'a' || prompt == 'A') {
			length = time* air;
			cout << "The length travelled by the sound wave in air is: " << length << " meters";
		}
		if (prompt == 'C' || prompt == 'c') {
			length = time * car_dio;
			cout << "The length travelled by the sound wave in Carbon Dioxide is: " << length << " meters";
		}
		if (prompt == 'H' || prompt == 'h') {
			length = time * hyd;
			cout << "The length travelled by the sound wave in Hydrogen is: " << length << " meters";
		}
		if (prompt == 'S' || prompt == 's') {
			length = time * hel;
			cout << "The length travelled by the sound wave in Helium is: " << length << " meters";
		}
}