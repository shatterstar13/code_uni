#include <iostream>
#include "Fraction.h"
using namespace std;

int gcd(int u, int v);

fraction::fraction(int n, int d) : numerator(n), denominator(d)
{
	if (denominator == 0)
		throw "denominator = 0 error";

	reduce();
}



fraction fraction::add(fraction f2) const
{
	int	n = numerator * f2.denominator + f2.numerator * denominator;
	int	d = denominator * f2.denominator;

	return fraction(n, d);
}



fraction fraction::sub(fraction f2) const
{
	int	n = numerator * f2.denominator - f2.numerator * denominator;
	int	d = denominator * f2.denominator;

	return fraction(n, d);
}


fraction fraction::mult(fraction f2) const
{
	int	n = numerator * f2.numerator;
	int	d = denominator * f2.denominator;

	return fraction(n, d);
}


fraction fraction::div(fraction f2) const
{
	int	n = numerator * f2.denominator;
	int	d = denominator * f2.numerator;

	return fraction(n, d);
}


void fraction::print() const
{
	cout << endl << numerator << "/" << denominator << endl;
}



void fraction::read()
{
	cout << "Please enter the numerator: ";
	cin >> numerator;
	cout << "Please enter the denominator: ";
	cin >> denominator;

	if (denominator == 0)
		throw "denominator = 0 error";

	reduce();
}



void fraction::reduce()
{
	int	common = gcd(numerator, denominator);
	numerator /= common;
	denominator /= common;
}

int gcd(int u, int v)
{
	u = (u < 0) ? -u : u;
	v = (v < 0) ? -v : v;

	while (u > 0)
	{
		if (u < v)
		{
			int t = u;
			u = v;
			v = t;
		}

		u -= v;
	}

	return v;
}
