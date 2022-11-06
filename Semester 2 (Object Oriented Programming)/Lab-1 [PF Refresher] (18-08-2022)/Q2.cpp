#include <iostream>
#include <iomanip>
using namespace std;
#define row 30
#define col 30
int main()
{
    int rows, cols, flag = 0, arr[row][col]{};
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\n";
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "\n\n";
    if (rows == cols)
    {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter a number: ";
                cin >> arr[i][j];
                cout << "\n";
            }
        } 
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i == j)
                {
                    if (arr[i][j] == 0)
                        flag = 1;
                }
                else
                {
                    if (arr[i][j] != 0)
                        flag = 1;
                }
            } 
        }   
        cout << "\n\n";
        if (flag == 1) {
            cout << "The given array is not a diagonal matrix.";
            cout << "\n\n";
        }
        else
        {
            cout << "The entered array is a diagonal matrix.\n";
            cout << "\n";
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++) {
                    cout << setw(4) << arr[i][j] << " ";
                }
                    cout << "\n";
            }
            cout << "\n\n";
        }
    }
    else {
        cout << "Matrix is not a square matrix! Please Try Again.";
    }
    cout << "\n\n";
    return 0;
}