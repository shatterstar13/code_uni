#pragma once

#ifndef BOX_H
#define BOX_H

#include <iostream>

using namespace std;

class Box
{
private:
	int length{};
	int width{};
	int height{};
	int volume{};
public:
	void setLength(int l, int i)
	{
		while (l < 0)
		{
			cout << "\nERROR: Invalid length! Enter again.\n";
			cout << "\nEnter the length of box #" << i + 1 << ": ";
			cin >> l;
		}
		length = l;
	}
	int getLength() const
	{
		return length;
	}
	void setWidth(int w, int i)
	{
		while (w < 0)
		{
			cout << "\nERROR: Invalid width! Enter again.\n";
			cout << "\nEnter the width of box #" << i + 1 << ": ";
			cin >> w;
		}
		width = w;
	}
	int getWidth() const
	{
		return width;
	}
	void setHeight(int h, int i)
	{
		while (h < 0)
		{
			cout << "\nERROR: Invalid width! Enter again.\n";
			cout << "\nEnter the height of box #" << i + 1 << ": ";
			cin >> h;
		}
		height = h;
	}
	int getHeight() const
	{
		return height;
	}
	void setVolume(int l, int w, int h)
	{
		volume = (l * w * h);
	}
	int getVolume() const
	{
		return volume;
	}
};

#endif 



