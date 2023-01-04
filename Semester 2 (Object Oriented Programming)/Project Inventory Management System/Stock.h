#ifndef STOCK_H
#define STOCK_H

#include <string>
#include "Item.h"
#include <iostream>
#include <fstream>
//#include <Windows.h>

using namespace std;

class Stock
{

private:
	Item* items;
	int size;
	int capacity;
	void resize();

public:
	Stock(int capacity = 1);
	Stock(const Stock& stock);
	~Stock();

	Item* getItems() const;
	Item getItem(int) const;
	int getSize() const;
	int getCapacity() const;

	void setItems(Item*);
	void setSize(int);
	void setCapacity(int);
	void setItem(Item, int);

	void saveStock();
	void loadStock();

	void addItem(Item);
	void removeItem(string);
	int updateItem(string);
	void updateItem(int, string);
	int searchItem(string);
	int searchItemName(string);
	void printStock();

	void gotoXY(int, int);

	Stock operator=(const Stock& stock);

};

#endif // !STOCK_H
