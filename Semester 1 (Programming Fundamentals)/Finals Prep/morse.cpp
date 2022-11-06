#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main() 
{
    char characters[36] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',
                           'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                           '0','1','2','3','4','5','6','7','8','9'};
    string morse[36] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                      "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-",
                      "..-","...-",".--","-..-","-.--","--..","-----",".----",
                      "..---","...--","....-",".....","-....","--...","---..","----."};
    char input[100]{};
    string convert{};
    cout<<"Enter a string: ";
    cin.getline(input,100);
    int size = strlen(input);
    //transform(input.begin(), input.end(), input.begin(), ::toupper);
    _strupr_s(input);
    for (int i = 0; i < 36; i++)
    {
        //cout << input[i]<<"\n";
        for(int j = 0; j < 36; j++)
        {
            if (input[i] == ' ') {
                convert += ' ';
            }
            //cout << characters[j] << "\n";
            else if(input[i] == characters[j])
            {
                convert += morse[j];
            }
        }
    }
    cout<<convert;
}