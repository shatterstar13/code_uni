#ifndef MOBILEPHONE_H
#define MOBILEPHONE_H

#include <iostream>
#include <string>

using namespace std;

class MobilePhone
{
private:
	int mfgID;
	string mfgDate;
	string mfgName;
	bool state = false;
public:
	// Both of the constructors display "Phone made by the factory!" 
	MobilePhone (); // The default constructor
	MobilePhone (int, string, string); // Parameterized constructor
	// Setters 
	void setMfgID (int); 
	void setMfgDate (string);
	void setMfgName (string);
	// Getters 
	int getMfgID () const; 
	string getMfgDate () const; 
	string getMfgName() const;
	bool turnon(); // Sets the state of phone to true also displaying the message
					// "Phone turned on" and returning the state value
	void makeVoiceCall(int); // The function should accept a phone number as
							// parameter and display "Calling to [number]..."
	void recordAudio(); // The function should "start recording" the audio by
						// displaying the message "Speak into the microphone."
	void sendSMS(string, int); // The function should accept a message as string
								// as well as a recipient as int and display the message "The message has been sent."
	void turnoff(); // The function displays "Phone turned off" and sets the state
					// of the phone to false. A mobile can perform no more // functions when it is turned off so you have to handle the conditions too
	~MobilePhone(); // Destructor should output "Phone destroyed..."



};

#endif

