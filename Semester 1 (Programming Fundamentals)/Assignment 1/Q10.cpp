#include<iostream>
constexpr auto PI = 3.14;;
using namespace std;
void area_sq(float l, float area) {
	cout << "Enter side of square ";
	cin >> l;
	area = l *l;
	cout << "Area of Square is " << area << endl;
}
void area_tr(float l, float w, float area) {
	cout << "Enter height of Triangle ";
	cin >> l;
	cout << "Enter base of Triangle ";
	cin >> w;
	area = (l * w) / 2;
	cout << "Area of Triangle is " << area << endl;
}
void area_crc(float l, float area, float m) {
	cout << "Enter radius of Circle ";
	cin >> l;
	m = l * l;
	area = PI *(m);
	cout << "Area of Circle is " << area << endl;
}
void area_rct(float l, float w, float area) {
	cout << "Enter height of Rectangle ";
	cin >> l;
	cout << "Enter width of Rectangle ";
	cin >> w;
	area = l * w;
	cout << "Area of Rectangle is " << area << endl;
}
float l = 0, w = 0, area = 0, m;

int main() {
	char op;
	cout << "Press [C/c] for area of Circle " << endl;
	cout << "Press [S/s] for area of Square " << endl;
	cout << "Press [R/r] for area of Rectangle " << endl;
	cout << "Press [T/t] for area of circle " << endl;
	cin >> op;
	if (op == 'C' || op == 'c') {
		area_crc(l, area, m);
	}
	if (op == 'S' || op == 's') {
		area_sq(l, area);
	}
	if (op == 'T' || op == 't') {
		area_tr(l, w, area);
	}
	if (op == 'R' || op == 'r') {
		area_rct(l, w, area);
	}
	return 0;
}