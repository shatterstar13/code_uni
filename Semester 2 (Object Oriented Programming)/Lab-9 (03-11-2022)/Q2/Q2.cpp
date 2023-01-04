#include <iostream>
#include "MobilePhone.h"
#include "ApplePhone.h"

using namespace std;

int main()
{
	ApplePhone a(007, "23-05-2003", "muaz", "v.17");
	a.turnon();
	a.makeVoiceCall(1234);
	a.launchPaper();
	a.turnoff();
}