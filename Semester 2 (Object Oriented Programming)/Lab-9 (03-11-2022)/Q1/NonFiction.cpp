#include "NonFiction.h"


NonFiction::NonFiction(): Novel("", "", 0)
{
	inspiration = "";
}

NonFiction::NonFiction(string t, string a, int p, string i): Novel(t, a, p)
{
	inspiration = i;
}

void NonFiction::setData(string t, string a, int p, string i)
{
	inspiration = i;
	Novel::setTitle(t);
	Novel::setAuthor(a);
	Novel::setPages(p);
}

void NonFiction::showDetails()
{
	Novel::showDetails();
	cout << "\nThe inspiration for the Novel is: " << inspiration;
	cout << "\n\n";
}

string NonFiction::getInspiration() const
{
	return inspiration;
}

NonFiction::~NonFiction()
{
}
