#ifndef APPLEPHONE_H
#define APPLEPHONE_H

#include <string>
#include "MobilePhone.h"

using namespace std;

class ApplePhone: public MobilePhone
{
	string iOSVersion;
public:
	ApplePhone();
	ApplePhone(int, string, string, string);
	~ApplePhone();     // display message “Apple phone destroyed…”
	void launchSiri(); // display message “Talking to Siri”
	void launchPaper(); // display message “Using Paper app”
	string getiOSVersion() const; // returns iOS Version of phone
	void setiOSVersion(string); // sets iOS Version of phone 
};

#endif

