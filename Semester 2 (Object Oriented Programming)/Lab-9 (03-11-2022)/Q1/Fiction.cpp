#include "Fiction.h"

Fiction::Fiction(): Novel("", "", 0)
{
	level = 0;
	type = "";
}

Fiction::Fiction(string t, string a, int p, string g, int l): Novel(t, a, p)
{
	type = g;
	level = l;
}


Fiction::~Fiction()
{
}

void Fiction::showDetails()
{
	Novel::showDetails();
	cout << "\nThe Genre of the Novel is: " << type;
	cout << "\nThe level of the Novel is: " << level;
	cout << "\n\n";
}

void Fiction::setLevel(int l)
{
	level = l;
}

void Fiction::setType(string g)
{
	type = g;
}

string Fiction::getType() const
{
	return type;
}

int Fiction::getLevel() const
{
	return level;
}
