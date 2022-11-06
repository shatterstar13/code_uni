#include <iostream>

using namespace std;

class Array
{
public:
	Array(int);
	~Array();
	bool& operator[](int);
	friend istream& operator>>(istream&, Array&);
	friend ostream& operator<<(ostream&, Array&);
private:
	bool* binary;
	int size;
};

Array::Array(int size)
{
	this->size = size;
	binary = new bool[size];
	for (int i = 0; i < size; i++)
	{
		binary[i] = 0;
	}
}

bool& Array::operator[](int index)
{
	return this->binary[index];
}

istream& operator>>(istream& in, Array& obj)
{
	int temp{};
	for (int i = 0; i < obj.size; i++)
	{
		cout << "Enter value at index [" << i << "]: ";
		/*cin >> temp;
		while (!(temp == 0 || temp == 1))
		{
			cout << "ERROR Invalid! Try Again.\n";
			cout << "Enter value at index [" << i << "]: ";
			cin >> temp;
			if (temp == 0 || temp == 1)
			{
				in >> obj[i];
			}
		}*/
		in >> obj[i];
	}
	return in;
}

ostream& operator<<(ostream& out, Array& obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		cout << "\nValue at index [" << i << "] is: ";
		out << obj[i];
	}
	return out;
}

Array::~Array()
{
	delete[] binary;
	binary = nullptr;
}

int main()
{
	Array mine(8);
	cin >> mine;
	cout << mine;
}