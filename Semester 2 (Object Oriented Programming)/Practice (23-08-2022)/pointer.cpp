#include <iostream>
#include <iomanip>

using namespace std;

int* getVariable();

int main() {
	int* a;
	a = getVariable();
	cout << *a << endl;
	delete a;
	a = nullptr;
	return 0;
}

int* getVariable(){
	int* var = new int;
	*var = 10;
	return var;
}