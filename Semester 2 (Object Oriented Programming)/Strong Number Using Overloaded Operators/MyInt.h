#include <iostream>

using namespace std;

class MyInt
{
private:
	int num;
public:
	MyInt();
	MyInt(const MyInt&);
	void setNum(int val);
	int getNum() const;
	friend istream& operator>>(istream&, MyInt&);
	friend bool isStrongNumber(MyInt);
};

