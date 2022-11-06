#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
private:
	int length{ 12 };
	int width{ 40 };
public:
	int getLength()
	{
		return length;
	}
	int getWidth()
	{
		return width;
	}
	void draw(int l, int w)
	{
		for (int i = 1; i <= l; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (i == 1 || j == 1 || i == l || j == w)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				
			}
			cout << "\n";
		}
	}
};

int main() {
	Rectangle rect;
	int l = rect.getLength();
	int w = rect.getWidth();
	cout << "\nLength: " << l << "\nWidth: " << w;
	cout << "\n\n";
	rect.draw(l, w);
	return 0;
}