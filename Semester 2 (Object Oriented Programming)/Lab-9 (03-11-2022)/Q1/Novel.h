#ifndef NOVEL_H
#define NOVEL_H

#include <string>

using namespace std;

class Novel
{
	string title, author;
	int pages;
public:
	Novel();
	Novel(string, string, int);
	~Novel();
	void showDetails() const;
	void setTitle(string);
	void setAuthor(string);
	void setPages(int);
	string getTitle() const;
	string getAuthor() const;
	int getPages() const;
};

#endif

