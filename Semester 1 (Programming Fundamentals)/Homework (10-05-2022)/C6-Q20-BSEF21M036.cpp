
// Muaz Saleem (BSEF21M036) : Program to find whether a profit was made from sale of stocks or a loss

#include <iostream>
using namespace std;
double profit_or_loss(int, double, double, double, double);
int main()
{
	int no_of_shares{};
	double purchase_price{}, purchase_commission{}, sale_price{}, sale_commission{}, total{};
	cout << "Enter the total number of shares: ";
	cin >> no_of_shares;
	cout << "Enter the sale price per share: ";
	cin >> sale_price;
	cout << "Enter the sale commission that was paid: ";
	cin >> sale_commission;
	cout << "Enter the price at which the shares were purchased: ";
	cin >> purchase_price;
	cout << "Enter the purchase commission that was paid: ";
	cin >> purchase_commission;
	total = profit_or_loss(no_of_shares, sale_price, sale_commission, purchase_price, purchase_commission);
	if (total > 0) 
	{
		cout << "The profits earned are: " << total;
	}
	else if (total < 0) 
	{
		cout << "The loss occured is: " << total;
	}
}

double profit_or_loss(int a, double b, double c, double d, double e)
{
	double profitorloss{};
	profitorloss = ((a * b) - c) - ((a * d) + e);  // ((no. of shares * sale price) - sale commission) - 
	return profitorloss;                           // ((no. of shares * purchase price) + purchase commission) 
}
