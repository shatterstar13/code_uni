#include <iostream>

using namespace std;

class Counter
{
private:
	int i; 
public:
	Counter(); 
	Counter(int a_val); 
	~Counter(); 
	void setCounter(int a_intgr); 
	void reset(); 
	int getCounter() const
	{
		return i;
	}
	void increment(); 
	void increment(int a_val);
	void decrement(); 
	void decrement(int a_val); 
};

Counter::Counter()
{
	i = 0;
}

Counter::Counter(int a_val)
{
	i = a_val;
}

void Counter::setCounter(int a_intgr)
{
	i = a_intgr;
}

void Counter::reset()
{
	i = 0;
}

void Counter::increment()
{
	i++;
}

void Counter::increment(int a_val)
{
	i += a_val;
}

void Counter::decrement()
{
	i--;
}

void Counter::decrement(int a_val)
{
	i -= a_val;
}

Counter::~Counter()
{
	cout << "\n\nObject is Destroyed . . . \n";
}

void showNumbers()
{
	int n1{}, n2{};

	cout << "Where to start: ";
	cin >> n1;

	cout << "Where to end: ";
	cin >> n2;
	
	Counter showNum(n1);

	if (n1 == n2)
	{
		cout << n1;
		cout << "\n\n\n";
	}

	else if (n2 < n1) 
	{
		for (; showNum.getCounter() >= n2; showNum.decrement())
		{
			cout << showNum.getCounter() << "\t";
		}
		cout << "\n\n\n";
	}

	else
	{
		for (; showNum.getCounter() <= n2; showNum.increment())
		{
			cout << showNum.getCounter() << "\t";
		}
		cout << "\n\n\n";
	}
}

int main()
{
	int length{}, width{};

	cout << "\nEnter the length of the rectangle: ";
	cin >> length;

	cout << "\nEnter the width of the rectangle: ";
	cin >> width;

	cout << "\n\n";

	Counter c(1), d(1);

	for (; c.getCounter() <= length; c.increment())
	{
		for (; d.getCounter() <= width; d.increment())
		{
			if (c.getCounter() == 1 || d.getCounter() == 1 || c.getCounter() == length || d.getCounter() == width)
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
		d.reset();
		d.increment();
	}

	cout << "\n\n\n";

	showNumbers();
}


