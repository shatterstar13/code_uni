#ifndef MANUALSHIPPINGCONTAINER_H
#define MANUALSHIPPINGCONTAINER_H

#include "ShippingContainer.h"
#include <string>

using namespace std;

class ManualShippingContainer : public ShippingContainer
{
private:
	string manifest;
public:
	ManualShippingContainer();
	ManualShippingContainer(string);
	void setManifest(string);
	string getManifest() const;
};

#endif