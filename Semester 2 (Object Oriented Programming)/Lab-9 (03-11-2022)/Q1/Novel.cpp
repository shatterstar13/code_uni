#include "Novel.h"
#include <iostream>

using namespace std;

Novel::Novel()
{
	title = "";
	author = "";
	pages = 0;
}

Novel::Novel(string t, string a, int p)
{
	title = t;
	author = a;
	pages = p;
}

void Novel::showDetails() const
{
	cout << "\nThe Title of the novel is: " << title;
	cout << "\nThe Name of the Author is: " << author;
	cout << "\nThe number of Pages in the novel is: " << pages;
	cout << "\n\n";
}

void Novel::setTitle(string t)
{
	title = t;
}

void Novel::setAuthor(string a)
{
	author = a;
}

void Novel::setPages(int p)
{
	pages = p;
}

string Novel::getTitle() const
{
	return title;
}

string Novel::getAuthor() const
{
	return author;
}

int Novel::getPages() const
{
	return pages;
}

Novel::~Novel()
{
}
