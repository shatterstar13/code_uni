#include "Fraction.h"
#include <iostream>
#include <cmath>

using namespace std;

Fraction::Fraction(int a_nmrator, int a_dnmnator)
{
	while (a_dnmnator == 0)
	{
		cout << "\nERROR Invalid! Try Again.";
		cout << "\nEnter the denominator: ";
		cin >> a_dnmnator;
		if (a_dnmnator != 0)
		{
			numerator = a_nmrator;
			denominator = a_dnmnator;
			this->reduce();
		}
	}
	numerator = a_nmrator;
	denominator = a_dnmnator;
	this->reduce();
}

Fraction::Fraction(const Fraction& a_Frac)
{
	this->numerator = a_Frac.numerator;
	this->denominator = a_Frac.denominator;
}

Fraction::~Fraction()
{
	cout << "Object is destroyed.\n";
}

void Fraction::setDenominator(int a_dnmnator)
{
	while (a_dnmnator == 0)
	{
		cout << "\nERROR Invalid! Try Again.";
		cin >> a_dnmnator;
	}
	denominator = a_dnmnator;
}

void Fraction::setNumerator(int a_nmrator)
{
	numerator = a_nmrator;
}

int Fraction::getDenominator() const
{
	return this->denominator;
}

int Fraction::getNumerator() const
{
	return this->numerator;
}

Fraction Fraction::operator+(const Fraction& obj)
{
	Fraction res;
	res.numerator = (this->numerator * obj.denominator) + (this->denominator * obj.numerator);
	res.denominator = this->denominator * obj.denominator;
	res.reduce();
	return res;
}

Fraction Fraction::operator-(const Fraction& obj)
{
	Fraction res;
	res.numerator = (this->numerator * obj.denominator) - (this->denominator * obj.numerator);
	res.denominator = this->denominator * obj.denominator;
	res.reduce();
	return res;
}

Fraction Fraction::operator*(const Fraction& obj)
{
	Fraction res;
	res.numerator = this->numerator * obj.numerator;
	res.denominator = this->denominator * obj.denominator;
	res.reduce();
	return res;
}

Fraction Fraction::operator/(const Fraction& obj)
{
	Fraction res;
	res.numerator = this->numerator * obj.denominator;
	res.denominator = this->denominator * obj.numerator;
	res.reduce();
	return res;
}

void Fraction::reduce()
{
	int factor = gcd(this->numerator, this->denominator);
	this->numerator /= factor;
	this->denominator /= factor;
}

int Fraction::gcd(int num1, int num2)
{
	if (num1 == 0)
	{
		return num2;
	}
	else if (num2 == 0)
	{
		return num1;
	}
	else
	{
		int temp;
		while ((num1 % num2) > 0)
		{
			temp = (num1 % num2);
			num1 = num2;
			num2 = temp;
		}
		return num2;
	}
}

bool Fraction::operator==(const Fraction& obj)
{
	if ((this->numerator == obj.numerator) && (this->denominator == obj.denominator))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool Fraction::operator<(const Fraction& obj)
{
	
	if ((static_cast<double>(this->numerator) / this->denominator) < (static_cast<double>(obj.numerator) / obj.denominator))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator!=(const Fraction& obj)
{
	if (*this == obj)
	{
		return false;
	}
	else
	{
		return true;
	}
}

Fraction Fraction::operator-()
{
	Fraction temp;
	if ((this->numerator < 0) && (this->denominator < 0))
	{
		temp.numerator = this->numerator;
		temp.denominator = this->denominator;
	}
	if (this->numerator < 0)
	{
		temp.numerator = this->numerator;
		temp.denominator = -this->denominator;
	}
	else if (this->denominator < 0)
	{
		temp.numerator = -this->numerator;
		temp.denominator = this->denominator;
	}
	else
	{
		temp.numerator = -this->numerator;
		temp.denominator = -this->denominator;
	}
	return temp;
}

Fraction& Fraction::operator++()
{
	++this->numerator;
	++this->denominator;
	this->reduce();
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	++this->numerator;
	++this->denominator;
	this->reduce();
	return temp;
}

Fraction& Fraction::operator+=(const Fraction& obj)
{
	*this = *this + obj;
	this->reduce();
	return *this;
}

Fraction& Fraction::operator^(int exp)
{
	this->numerator = pow(this->numerator, exp);
	this->denominator = pow(this->denominator, exp);
	this->reduce();
	return *this;
}

ostream& operator<<(ostream& objOut, const Fraction& obj)
{
	//objOut << "The numerator is: " << obj.numerator;
	//objOut << "\nThe denominator is: " << obj.denominator;
	if (obj.denominator == 1)
	{
		objOut << "The Fraction is: " << obj.numerator;
	}
	else
	{
		objOut << "The Fraction is: " << obj.numerator << "/" << obj.denominator;
	}
	cout << "\n\n";
	return objOut;
}

istream& operator>>(istream& objIn, Fraction& obj)
{
	obj.denominator = 0;
	while (obj.denominator == 0)
	{
		cout << "\nEnter the numerator and the denominator (Space Seperated): ";
		objIn >> obj.numerator;
		cin.ignore();
		objIn >> obj.denominator;
		if (obj.denominator == 0)
		{
			cout << "\nERROR Invalid! Try Again.";
		}
	}
	obj.reduce();

	//cout << "Enter the denominator: ";

	cout << "\n\n";
	return objIn;
}

