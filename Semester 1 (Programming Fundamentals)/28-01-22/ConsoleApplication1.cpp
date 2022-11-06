#include <iostream>
using namespace std;
int main()
{
    int num, x=1,sum=0;
    cout << "Enter a Number ";
    cin >> num;
    while (x < num)
    {
        if (num % x == 0)
        {
            sum = sum + x;
        }
        x++;
    }
    if (sum == num)
    {
        cout << "\nIt is a Perfect Number";
    }
    else
        cout << "\nIt is not a Perfect Number";
    return 0;
    system("pause");
}