//BSEF21M036 ~~ Task 1 ~~ Assignment 2 ~~ OOP ~~ Madiha Khalid

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int superDigit(int);

int main()
{
	int num{}, result{}, k{}, temp{}, size{};

	cout << "\n\nEnter the number: ";
	cin >> num;

	cout << "\nEnter the number of times it will be concatenated: ";
	cin >> k;
	cout << "\n\n";

	if (k > 1)
	{
		string s = to_string(num);

		string res{};

		for (int i = 0; i < k; i++)
		{
			res += s;
		}

		temp = stoi(res);

		cout << "\nThe concatenated digit is: " << temp;

		size = log10(temp) + 1;

		result = superDigit(temp);

		while (static_cast<int>((log10(result) + 1)) != 1)
		{
			result = superDigit(result);
		}

		cout << "\n\nThe super digit of " << temp << " is: " << result;
		cout << "\n\n";
	}

	else
	{
		size = log10(num) + 1;

		if (size == 1)
		{
			cout << "\n\nThe super digit of " << num << " is itself.\n\n";
		}

		else
		{
			result = superDigit(num);

			while (static_cast<int>((log10(result) + 1)) != 1)
			{
				result = superDigit(result);
			}

			cout << "\n\nThe super digit of " << num << " is: " << result;
			cout << "\n\n";
		}
	}	
}

int superDigit(int num)
{
	int rem{}, sum{};

	while (num != 0)
	{
		rem = num % 10;
		sum += rem;
		num /= 10;
	}

	return sum;
}