#include "MobilePhone.h"
#include <iostream>
#include <string>

using namespace std;

MobilePhone::MobilePhone()
{
	cout << "\nPhone made by the factory!";
	mfgID = 0;
	mfgDate = "";
	mfgName = "";
	state = false;
}

MobilePhone::MobilePhone(int i, string d, string n)
{
	cout << "\nPhone made by the factory!";
	mfgID = i;
	mfgDate = d;
	mfgName = n;
	state = false;
}

void MobilePhone::setMfgID(int i)
{
	mfgID = i;
}

void MobilePhone::setMfgDate(string d)
{
	mfgDate = d;
}

void MobilePhone::setMfgName(string n)
{
	mfgName = n;
}

int MobilePhone::getMfgID() const
{
	return mfgID;
}

string MobilePhone::getMfgDate() const
{
	return mfgDate;
}

string MobilePhone::getMfgName() const
{
	return mfgName;
}

bool MobilePhone::turnon()
{
	state = true;
	cout << "\nPhone turned on";
	return true;
}

void MobilePhone::makeVoiceCall(int n)
{
	if (state == true)
	{
		cout << "\nCalling [" << n << "]...";
	}
	else
		cout << "\nThe Phone is turned off";
}

void MobilePhone::recordAudio()
{
	if (state == true)
	{
		cout << "\nRecording Audio\n";
		cout << "Speak into the microphone.";
	}
	else
		cout << "\nThe Phone is turned off";
}

void MobilePhone::sendSMS(string m, int n)
{
	if (state == true)
	{
		cout << "\nThe message has been sent.";
	}
	else
		cout << "\nThe Phone is turned off";
}

void MobilePhone::turnoff()
{
	state = false;
	cout << "\nPhone turned off!";
}

MobilePhone::~MobilePhone()
{
	cout << "\nPhone destroyed...";
}
