#include "FeetInches.h"

class RoomDimension
{
	FeetInches length;
	FeetInches width;
public:
	RoomDimension()
	{
		length.setFeet(0);
		length.setInches(0);
		width.setFeet(0);
		width.setInches(0);
	}

	RoomDimension(FeetInches l, FeetInches w)
	{
		length.setFeet(l.getFeet());
		length.setInches(l.getInches());
		width.setFeet(w.getFeet());
		width.setInches(w.getInches());
	}

	FeetInches getLength() const
	{
		return length;
	}

	FeetInches getWidth() const
	{
		return width;
	}
	FeetInches calculateArea()
	{
		return (length*width);
	}
	friend istream& operator>>(istream& in, RoomDimension& obj)
	{
		in >> length;
		return in;
	}
};