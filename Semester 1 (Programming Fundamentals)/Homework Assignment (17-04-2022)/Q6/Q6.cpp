#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
	char RoS[3][30];
	int R, C, S, temp = 0, sum_R = 0, sum_C = 0, sum_S = 0, most = 0;
	ifstream data;
	data.open("RainOrShine.txt");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 30; j++) {
			data >> RoS[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		R = 0, S = 0, C = 0;
		for (int j = 0; j < 30; j++) {
			if (RoS[i][j] == 'R') {
				R++;
			}
			else if (RoS[i][j] == 'C') {
				C++;
			}
			else if (RoS[i][j] == 'S') {
				S++;
			}
			if (R > most) {
				most = R;
				temp = i;
			}
		}
		sum_R += R;
		sum_C += C;
		sum_S += S;
		if (i == 0) {
			cout << "There were " << R << " Rainy Days, " << C << " Cloudy Days, and " << S << " Sunny Days in the month of June.\n\n";
		}
		else if (i == 1) {
			cout << "There were " << R << " Rainy Days, " << C << " Cloudy Days, and " << S << " Sunny Days in the month of July.\n\n";
		}
		else if (i == 2) {
			cout << "There were " << R << " Rainy Days, " << C << " Cloudy Days, and " << S << " Sunny Days in the month of August.\n\n";
		}
	}
	cout << "There were a total of " << sum_R << " Rainy Days, " << sum_C << " Cloudy Days, and " << sum_S << " Sunny Days in the whole three month period.\n\n";
	if (temp == 0) {
		cout << "The month of June had the most Rainfall. Which was " << most << " Days.\n\n";
	}
	else if (temp == 1) {
		cout << "The month of July had the most Rainfall. Which was " << most << " Days.\n\n";
	}
	else if (temp == 2) {
		cout << "The month of August had the most Rainfall. Which was " << most << " Days.\n\n";
	}
}
