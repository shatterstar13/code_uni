#include <iostream>
using namespace std;
int main() {
	double wav_l;
	cout << "Enter wavelength in meters ";
	cin >> wav_l;
	if (wav_l >= 10e-2) {
		cout << "They are Radiowaves";
	}
	else if(wav_l <= 10e-2 && wav_l >= 10e-3) {
		cout << "They are Microwaves";
	}
	else if (wav_l <= 10e-3 && wav_l >= 7*10e-7) {
		cout << "They are Infrared Rays";
	}
	else if (wav_l <= 7 * 10e-7 && wav_l>= 4 * 10e-7) {
		cout << "They are Visible Light Rays";
	}
	else if (wav_l <= 4 * 10e-7 && wav_l >= 10e-8) {
		cout << "They are Ultraviolet Rays";
	}
	else if (wav_l <= 10e-8 && wav_l >= 10e-11) {
		cout << "They are X-rays";
	}
	else if (wav_l <= 10e-11) {
		cout << "They are Gamma Rays";
	}
}