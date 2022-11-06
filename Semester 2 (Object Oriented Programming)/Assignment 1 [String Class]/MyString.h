// ~~ BSEF21M036 [Muaz Saleem] ~~ OOP SE - Assignment 1 ~~ Madiha Khalid ~~ 

#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

using namespace std;

class MyString
{
private:
	char* str;
	int length;
public:
	MyString();    //default constructor
	MyString(const char*);    //parameterized constructor
	MyString(const MyString&);    //copy constructor 
	~MyString();    //destructor
	void display() const;    //display string
	int getLength() const;    //returns length of the string
	const MyString& operator=(const MyString&);    //overloading assignment operator
	friend ostream& operator<<(ostream&, const MyString&);    //overloading stream insertion operator as friend function
	friend istream& operator>>(istream&, MyString&);    //overloading stream extraction operator as friend function
	MyString operator+(const MyString&) const;    //overloading + operator, you can perform concatenation using + operator
	bool operator==(const MyString&) const;    //overloading == operator
	bool operator<(const MyString&) const;    //overloading < operator
	bool operator<=(const MyString&) const;    //overloading <= operator
	const MyString& operator += (const MyString&);    //overloading += operator
	void setStr(const char*);    //set data member of instance
	operator int();    //for conversion from 'MyString' to 'int' 
	operator char* ();    //for conversion from 'MyString' to 'char*' (C-style string) 
	MyString& operator++();    //overloading pre-increment operator 
	//MyString& operator++(int);    //overloading post-increment operator
	MyString subString(int, int) const;    //returns substring of the string from index 'start' to 'end' 
	int find(const MyString&) const;    //returns index of first occurence of substring in the string 
	int find(const char&) const;     //returns index of first occurence of char in the string 
	int find(const MyString&, int) const;     //returns index of first occurence of substring in the string after index 'start'
	int rfind(const MyString&) const;    //returns index of last occurence of substring in the string  
	int rfind(const char&) const;    //returns index of last occurence of char in the string
};

#endif
