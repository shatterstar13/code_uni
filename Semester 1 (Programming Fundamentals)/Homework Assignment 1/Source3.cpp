#include <iostream>
#include <iomanip>
#include <cmath>
constexpr float air = 1100, water = 4900, steel = 16400;
using namespace std;
int main() {
	char prompt='0';
	int length = 1;
	float time;
	if (length > 0) {
		cout << "Enter 'a' or 'A' to select speed of sound in air " << endl;
		cout << "Enter 'w' or 'w' to select speed of sound in water " << endl;
		cout << "Enter 's' or 'S' to select speed of sound in steel " << endl;
		cout << "Your selection: ";
		cin >> prompt;
		cout << "Enter the distance the sound wave will travel in the selected medium in feets: ";
		cin >> length; 
		cout << endl;
	}
	if (prompt == 'a' ||prompt== 'A') {
		time = length / air;
		cout << "The time taken for the sound wave to travel in air is: " << fixed << setprecision(4) << time << " seconds";
	}
	else if (prompt == 'w' || prompt == 'W') {
		time = length / water;
		cout << "The time taken for the sound wave to travel in water is: " << fixed << setprecision(4) << time << " seconds";
	}
	else if (prompt == 's' || prompt == 'S') {
		time = length / steel;
		cout << "The time taken for the sound wave to travel in steel is: " << fixed << setprecision(4) << time << " seconds";
	}
	
}