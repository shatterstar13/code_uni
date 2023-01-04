#include "ApplePhone.h"
#include "MobilePhone.h"
#include <iostream>
#include <string>

using namespace std;

ApplePhone::ApplePhone(): MobilePhone(0, "", "")
{
	cout << "\nHello Apple!";
	iOSVersion = "";
}

ApplePhone::ApplePhone(int i, string d, string n, string iOS): MobilePhone(i, d, n)
{
	cout << "\nHello Apple!";
	iOSVersion = iOS;
}

ApplePhone::~ApplePhone()
{
	cout << "\nApple Phone Destroyed...";
}

void ApplePhone::launchSiri()
{
	cout << "\nTalking to Siri!";
}

void ApplePhone::launchPaper()
{
	cout << "\nUsing Paper App!";
}

string ApplePhone::getiOSVersion() const
{
	return iOSVersion;
}

void ApplePhone::setiOSVersion(string i)
{
	iOSVersion = i;
}
