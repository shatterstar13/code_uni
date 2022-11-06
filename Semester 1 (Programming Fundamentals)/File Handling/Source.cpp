#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream file1;
	file1.open("a.txt");
	string name;
	while (file1 >> name)
		cout << name << " ";
}