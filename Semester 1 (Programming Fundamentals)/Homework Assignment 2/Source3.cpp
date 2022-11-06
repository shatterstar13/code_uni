#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream a;
	string b, f, l;
	a.open("LineUp.txt");
	a >> b;
	f = l = b;
	while (a >> b) {
		if (b < f) {
			cout << "First name " << f;
		}
		if (b > l) {
			cout << "Last name " << l;
		}
	}
}