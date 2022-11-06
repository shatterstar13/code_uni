
// Muaz Saleem (BSEF21M036) : Program to find whether the accumulative profit or loss from multiple stock sales

#include <iostream>
#include <cstdlib>
using namespace std;
double input(double&, double&, double&, double&, double&, char&);  // function for input using address of the parameters
double profit_or_loss(int, double, double, double, double);
int main()
{
	char prompt{'0'};
	double no_of_shares{}, purchase_price{}, purchase_commission{}, sale_price{}, sale_commission{}, total_f{};
	while (prompt != 'q')   // keeps inputting until user inputs [Q/q]
	{
		input(no_of_shares, sale_price, sale_commission, purchase_price, purchase_commission, prompt);
	}
	total_f = profit_or_loss(no_of_shares, sale_price, sale_commission, purchase_price, purchase_commission);  // sums the return values
	                                                                                                           // from the multiple calls 
	if (total_f > 0)
	{
		cout << "\nThe total profits are: " << total_f;
	}
	else if (total_f < 0)
	{
		cout << "\nThe total loss is: " << total_f;
	}
}
double input(double& a, double& b, double& c, double& d, double& e, char& f) 
{
	static double total{};  // static variable so value stays the same after every iteration
	cout << "\nEnter the total number of shares: ";
	cin >> a;
	cout << "\nEnter the sale price per share: ";
	cin >> b;
	cout << "\nEnter the sale commission that was paid: ";
	cin >> c;
	cout << "\nEnter the price at which the shares were purchased: ";
	cin >> d;
	cout << "\nEnter the purchase commission that was paid: ";
	cin >> e;
	total += profit_or_loss(a, b, c, d, e); // goes to the next function to calculate
	cout << "\nEnter [Q/q] if you want to stop calculating. If not enter any other character: ";
	cin >> f;
	system("cls");
	return total;
}
double profit_or_loss(int a, double b, double c, double d, double e)
{
	double profitorloss{};
	profitorloss += (((a * b) - c) - ((a * d) + e));  // ((no. of shares * sale price) - sale commission) - 
	return profitorloss;                           // ((no. of shares * purchase price) + purchase commission) 
}
