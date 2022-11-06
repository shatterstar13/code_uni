int gcd(int u, int v);

class fraction
{
private:
	int	 numerator;
	int	 denominator;
	void reduce();

public:
	fraction(int n = 0, int d = 1);

	fraction add(fraction f2) const;
	fraction sub(fraction f2) const;
	fraction mult(fraction f2) const;
	fraction div(fraction f2) const;
	void	 print() const;
	void	 read();
};