#include <iostream>
using namespace std;

int main()
{
    int p, x = 3, y = 5;
    bool a = true, b = false;
    p = ((x | y) + (a + b));
    cout << "\a" << p;
    return 0;
}