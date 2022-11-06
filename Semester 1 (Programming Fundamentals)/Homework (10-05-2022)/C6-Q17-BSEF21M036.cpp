// Muaz Saleem (BSEF21M036) : A program which inputs starting population, birth rate and death rate, number of people who leave the city
//                             and move into the area each year displays the increase in population after n years
#include <iostream>
using namespace std;
float size(int, int, int, int, float, float);
int main() 
{
	int population{ 2 }, numYears{}, arrivals{ -1 }, departures{ -1 };
	float birthRate{ -1 }, deathRate{ -1 };
	while (population <= 2) 
	{
		cout << "Enter the starting size of the population: ";
		cin >> population;
	}
	while (birthRate < 0)
	{
		cout << "Enter the annual birth rate: ";
		cin >> birthRate;
	}
	while (deathRate < 0)
	{
		cout << "Enter the annual death rate: ";
		cin >> deathRate;
	}
	while (arrivals < 0)
	{
		cout << "Enter the number of people who move into the area annually: ";
		cin >> arrivals;
	}
	while (departures < 0)
	{
		cout << "Enter the number of people who move out of the area annually: ";
		cin >> departures;
	}
	while (numYears <= 1) 
	{
		cout << "Enter the number of years for which the increase in population needs to be displayed: ";
		cin >> numYears;
	}
	cout << "The new population size for year " << numYears << " is: " << size(population, numYears, arrivals, departures, birthRate, deathRate);
}

float size(int a, int b, int c, int d, float e, float f)
{
	float N{};
	for (int i = 0; i < b; i++) 
	{
		N += (a + c - d + c - d);
	}
	return N;
}
