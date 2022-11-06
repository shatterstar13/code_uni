// ~~ BSEF21M036 [Muaz Saleem] ~~ OOP SE - Assignment 1 ~~ Madiha Khalid ~~ 

#include "MyString.h"

MyString::MyString()		//default constructor
{
	length = 0;

	str = new char;
	*str = '\0';
}

MyString::MyString(const char* ch)		//parameterized constructor
{
	int i = 0;

	while (ch[i] != '\0')
	{
		length++;
		i++;
	}

	str = new char[length + 1];

	for (int i = 0; i < length; i++)
	{
		str[i] = ch[i];
	}

	str[length] = '\0';
}

MyString::MyString(const MyString& obj)		//copy constructor
{
	length = obj.length;

	str = new char[length + 1];

	for (int i = 0; i < length; i++)
	{
		str[i] = obj.str[i];
	}

	str[length] = '\0';
}

MyString::~MyString()		//destructor
{
	delete[] str;
	str = nullptr;
} 

void MyString::display() const		//display string
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		cout << str[i];
	}
}

int MyString::getLength() const		//returns length of the string
{
	return length;
}

const MyString& MyString::operator=(const MyString& obj)		//overloading assignment operator
{
	if (this != &obj)
	{
		this->setStr(obj.str);
	}

	return *this;
}

MyString MyString::operator+(const MyString& obj) const		//overloading + operator, you can perform
{															//concatenation using + operator
	MyString temp;

	temp.length = this->length + obj.length;
	temp.str = new char[temp.length + 1];
	
	int i{};

	for (i = 0; str[i] != '\0'; i++)
	{
		temp.str[i] = this->str[i];
	}
	
	for (int j = i, k = 0; j < temp.length; j++, k++)
	{
		temp.str[j] = obj.str[k];
	}

	temp[temp.length] = '\0';

	return temp;
}

bool MyString::operator==(const MyString& obj) const		//overloading == operator
{
	int counter = 0;

	if (length != obj.length)
	{
		return false;
	}

	else
	{
		for (int i = 0; i < length; i++)
		{
			if (this->str[i] != obj.str[i])
			{
				return false;
			}

			else if (this->str[i] == obj.str[i])
			{
				counter++;
			}
		}
	}

	if (counter == length)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool MyString::operator<(const MyString& obj) const		//overloading < operator
{
	int counter = 0;

	for (int i = 0; i < length; i++)
	{
		if (this->str[i] < obj.str[i])
		{
			counter++;
		}
	}

	if (counter == length)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool MyString::operator<=(const MyString& obj) const		//overloading <= operator
{
	int counter = 0;

	for (int i = 0; i < length; i++)
	{
		if (this->str[i] <= obj.str[i])
		{
			counter++;
		}
	}

	if (counter == length)
	{
		return true;
	}

	else
	{
		return false;
	}
}


const MyString& MyString::operator+=(const MyString& obj)		//overloading += operator
{
	*this = *this + obj;
	return *this;
}

void MyString::setStr(const char* ch)		//set data member of instance
{
	while (ch[length] != '\0')
	{
		length++;
	}

	delete[] str;
	
	str = new char[length + 1];

	for (int i = 0; i < length; i++)
	{
		str[i] = ch[i];
	}

	str[length] = '\0';
}

MyString::operator int()		//for conversion from 'MyString' to 'int'
{
	int temp = 0;

	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			temp = (str[i] - 48) + (temp * 10);
		}

		else
		{
			cout << "\n\n\tOnly works on Digits. Character will be skipped!\n";
		}
	}

	return temp;
}

MyString::operator char* ()		//for conversion from 'MyString' to 'char*' (C-style string)
{
	char* temp = new char[length + 1];
	
	for (int i = 0; i < length; i++)
	{
		temp[i] = str[i];
	}

	temp[length] = '\0';

	return temp;
}

MyString& MyString::operator++()		//overloading pre-increment operator
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		this->str[i]++;
	}
	return *this;
}

//MyString& MyString::operator++(int)
//{
//	MyString temp(*this);
//
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		this->str[i]++;
//	}
//
//	return temp;
//}

MyString MyString::subString(int start, int end) const		//returns substring of the string from index 'start' to 'end'
{
	MyString temp;

	temp.length = end - start;
	temp.str = new char[temp.length + 1];
	
	for (int i = start, j = 0; i <= end; i++, j++)
	{
		temp.str[j] = str[i];
		
	}

	return temp;
}

int MyString::find(const MyString& obj) const		//returns index of first occurence of substring in the string
{
	int index{};

	if (obj.length == 1)
	{
		for (int i = 0; i < length;)
		{
			if (str[i] == obj.str[0])
			{
				return i;
			}

			else
			{
				return -1;
			}
		}
	}

	else
	{
		for (int i = 0; i < length;)
		{
			if (str[i] == obj.str[0])
			{
				index = i;
				break;
			}

			else
			{
				i++;
			}
		}

		for (int i = index, j = 0; i < obj.length;)
		{
			if (str[i] == obj.str[j])
			{
				i++;
				j++;
			}

			else
			{
				return -1;
			}
		}

		return index;
	}
}

int MyString::find(const char& ch) const		//returns index of first occurence of char in the string
{
	for (int i = 0; i < length; i++)
	{
		if (str[i] == ch)
		{
			return i;
		}
	}

	return -1;
}

int MyString::find(const MyString& obj, int start) const		//returns index of first occurence of substring
{																//in the string after index 'start'
	int index{};

	if (obj.length == 1)
	{
		for (int i = start; i < length;)
		{
			if (str[i] == obj.str[0])
			{
				return i;
			}

			else
			{
				return -1;
			}
		}
	}

	else
	{
		for (int i = start; i < length;)
		{
			if (str[i] == obj.str[0])
			{
				index = i;
				break;
			}

			else
			{
				i++;
			}
		}

		for (int i = index, j = 0; i < obj.length;)
		{
			if (str[i] == obj.str[j])
			{
				i++;
				j++;
			}

			else
			{
				return -1;
			}
		}

		return index;
	}
}

int MyString::rfind(const MyString& obj) const		//returns index of last occurence of substring in the string
{
	int index{};

	if (obj.length == 1)
	{
		for (int i = 0; i < length;)
		{
			if (str[i] == obj.str[0])
			{
				index = i;
				i++;
			}

			else
			{
				index = -1;
				i++;
			}
		}
		
		return index;
	}

	else
	{
		for (int i = 0; i < length;)
		{
			if (str[i] == obj.str[0])
			{
				index = i;
				i++;
			}

			else
			{
				i++;
			}
		}

		for (int i = index, j = 0; j < obj.length;)
		{
			if (str[i] == obj.str[j])
			{
				i++;
				j++;
			}
			else
			{
				return -1;
			}
		}

		return index;
	}	
}

int MyString::rfind(const char& ch) const		//returns index of last occurence of char in the string
{
	int index = 0;

	for (int i = 0; i < length;)
	{
		if (str[i] == ch)
		{
			index = i;
			i++;
		}
		else if (str[i] != ch)
		{
			index = -1;
			i++;
		}
	}

	if (index >= 0)
		return index;
	else
		return -1;
}

ostream& operator<<(ostream& out, const MyString& obj)		//overloading stream insertion operator as friend function
{
	for (int i = 0; obj.str[i] != '\0'; i++)
	{
		out << obj.str[i];
	}
	 
	return out;
}

istream& operator>>(istream& in, MyString& obj)		//overloading stream extraction operator as friend function
{	
	int n = 10, i{};
	
	char* temp = new char[n + 1];

	bool flag = true;
	
	for (i = 0; flag; i++) 
	{
		in.get(temp[i]);

		if (temp[i] == 10)
		{
			flag = false;
		}

		if (i == n - 1)
		{
			n++;

			char* temp2 = new char[n + 1];

			for (int j = 0; j <= i; j++)
			{
				temp2[j] = temp[j];
			}
			
			delete[] temp;

			temp = temp2;
		}
	}
	
	temp[i - 1] = '\0';
	
	delete[] obj.str;
	
	obj.length = i-1;

	obj.str = temp;
	
	return in;
}