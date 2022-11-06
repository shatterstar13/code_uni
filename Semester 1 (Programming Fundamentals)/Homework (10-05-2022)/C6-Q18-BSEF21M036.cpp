
// Muaz Saleem (BSEF21M036) : Program to find the total cost of having some area painted.

#include <iostream>
using namespace std;
const float labor_company{ 25.00 };  // constant values
const int sq_ft{ 110 }, labor{ 8 };
void input(int& , float& , float& ); // input function
void calculate(int, float, float);   // function for the final calculation
int main() 
{
	int room{1};
	float paint{ 10.00 }, wall_space{-1};
	
	
	input(room, paint, wall_space);
	
	calculate(room, paint, wall_space);
}
void input(int &a, float &b, float &c)
{
	while (a <= 1)
	{
		cout << "Enter the number of rooms that have to be painted: ";
		cin >> a;
	}
	while (b <= 10.00)
	{
		cout << "Enter the price of paint per gallon (in dollars): ";
		cin >> b;
	}
	while (c < 0)
	{
		cout << "Enter the square footage of wall space: ";
		cin >> c;
	}
}

void calculate(int a, float b, float c)
{
	double paint_gallons{}, labor_hours{}, paint_cost{}, labor_charges{}, total_cost;
	paint_gallons = (c * a) / sq_ft;  // amount of required paint  = (total area * no. of rooms) / 110. 
	labor_hours = paint_gallons * labor;
	paint_cost = paint_gallons *b;    // b is the cost of paint
	labor_charges = labor_hours * labor_company;
	total_cost = paint_cost + labor_charges;
	cout << "\nThe toatl cost of the paint job is: " << total_cost;
}
