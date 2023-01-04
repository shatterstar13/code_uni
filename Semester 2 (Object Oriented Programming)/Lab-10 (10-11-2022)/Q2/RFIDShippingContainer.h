#ifndef RFIDShippingContainer_h
#define RFIDShippingContainer_h

#include "ShippingContainer.h"
#include <string>

using namespace std;

class RFIDShippingContainer: public ShippingContainer
{
private:
	string desc[10];
	const int idx = 0;
public:
	RFIDShippingContainer();
	void add(string);
};

#endif

