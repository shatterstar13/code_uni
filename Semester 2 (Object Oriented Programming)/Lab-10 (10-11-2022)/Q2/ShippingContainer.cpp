#include "ShippingContainer.h"



ShippingContainer::ShippingContainer()
{
	cont_id = 0;
}

ShippingContainer::ShippingContainer(int id)
{
	cont_id = id;
}

void ShippingContainer::setID(int id)
{
	cont_id = id;
}

int ShippingContainer::getID() const
{
	return cont_id;
}

