#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
#include <cmath>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;
	int gcd(int num1, int num2); 
public:
	Fraction(int a_nmrator = 0, int a_dnmnator = 1);
	Fraction(const Fraction& a_Frac); 
	~Fraction(); 
	void setDenominator(int a_dnmnator);
	void setNumerator(int a_nmrator);
	int getDenominator() const;
	int getNumerator() const;
	void reduce(); 
	Fraction operator+(const Fraction&); 
	Fraction operator-(const Fraction&); 
	Fraction operator*(const Fraction&); 
	Fraction operator/(const Fraction&);
	bool operator==(const Fraction&); 
	bool operator<(const Fraction&); 
	bool operator!=(const Fraction&); 
	Fraction operator-(); 
	Fraction& operator++();
	Fraction operator++(int); 
	friend ostream& operator<<(ostream&, const Fraction&); 
	friend istream& operator>>(istream&, Fraction&); 
	Fraction& operator+=(const Fraction&);
	Fraction& operator^(int); 
};

#endif

