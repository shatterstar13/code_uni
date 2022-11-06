#include<iostream>
#include <cmath>
constexpr auto PI = 3.1415926535;
using namespace std;
int area_crc(float l, double area) {
	cout << "Enter radius of Circle ";
	cin >> l;
	if (l >= 0) {
		area = PI * pow(l, 2);
		cout << "Area of Circle is " << area << endl;
	}
	return area;
}
int area_rct(float l, float w, double area) {
	cout << "Enter height of Rectangle ";
	cin >> l;
	cout << "Enter width of Rectangle ";
	cin >> w;
	if (l >= 0 && w >= 0) {
		area = l * w;
		cout << "Area of Rectangle is " << area << endl;
	}
	return area;
}
int area_tr(float l, float w, double area) {
	cout << "Enter height of Triangle ";
	cin >> l;
	cout << "Enter base of Triangle ";
	cin >> w;
	if (l >= 0 && w >= 0) {
		area = (l * w) * 0.5;
		cout << "Area of Triangle is " << area << endl;
	}
	return area;
}
float l = 0, w = 0;
double area = 0;

int main() {
	int prompt;
	cout << "1. Calculate Area of a Circle " << endl;
	cout << "2. Calculate Area of a Rectangle  " << endl;
	cout << "3. Calculate Area of a Triangle  " << endl;
	cout << "4. Quit " << endl;
	cout << "Enter Your Choice (1-4): ";
	cin >> prompt;
	if (prompt != 4) {
		if (prompt == 1) {
			area_crc(l, area);
		}
		else if (prompt == 2) {
			area_rct(l, w, area);
		}
		else if (prompt == 3) {
			area_tr(l, w, area);
		}
		else {
			cout << "Error. " << "Enter a number between 1 and 4" << endl;
		}
	}
	return 0;
}