// Muaz Saleem (BSEF21M036) : A program which inputs starting population, birth rate and death rate
//                             and displays the increase in population per year
#include <iostream>
using namespace std;
float size(int, int, float, float);
int main() 
{
	int P{ 2 }, n{ 1 };
	float BP{ -1 }, DP{ -1 };
	while (P <= 2) 
	{
		cout << "Enter the starting size of the population: ";
		cin >> P;
	}
	while (BP < 0) 
	{
		cout << "Enter the annual birth rate: ";
		cin >> BP;
	}
	while (DP < 0) 
	{
		cout << "Enter the annual death rate: ";
		cin >> DP;
	}
	while (n <= 1) 
	{
		cout << "Enter the number of years for which the increase in population needs to be displayed: ";
		cin >> n;
	}
	cout << "The new population size for year " << n << " is: " << size(P, n, BP, DP);
}

float size(int a, int b, float c, float d)
{
	float N{};
	for (int i = 0; i < b; i++) 
	{
		N+= (a + c - d);
	}
	return N;
}
