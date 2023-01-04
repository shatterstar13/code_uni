#include <iostream>
#include "Date.h"
#include "Time.h"
#include "DateTime.h"

using namespace std;

int main()
{
	DateTime dt(3, 03, 15, 10, 11, 2022);
	dt.showFormattedDateTime();
}