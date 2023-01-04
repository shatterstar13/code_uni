#ifndef FICTION_H
#define FICTION_H

#include <string>
#include <iostream>
#include "Novel.h"

using namespace std;

class Fiction: public Novel
{
	int level;
	string type;
public: 
	Fiction();
	Fiction(string, string, int, string, int);
	~Fiction();
	void showDetails();
	void setLevel(int);
	void setType(string);
	string getType() const;
	int getLevel() const;
};

#endif

