#ifndef NONFICTION_H
#define NONFICTION_H

#include <string>
#include <iostream>
#include "Novel.h"

using namespace std;

class NonFiction : public Novel
{
	string inspiration;
public:
	NonFiction();
	NonFiction(string, string, int, string);
	~NonFiction();
	void setData(string, string, int, string);
	void showDetails();
	string getInspiration() const;
};

#endif

