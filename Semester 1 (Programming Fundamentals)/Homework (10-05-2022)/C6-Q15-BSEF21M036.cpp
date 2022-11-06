
// Muaz Saleem - (BSEF21M036) : C6-Q15: Program to find total bill of outpatient or inpatient

#include <iostream>
using namespace std;
float patient(int, float, float, float); //for inpatient
float patient(float, float); //for outpatient
int main() 
{
	char prompt{};
	int days{-1};
	float rate{-1}, meds{-1}, serv{-1};
	cout << "Enter [I/i] if the patient was admitted as an inpatient.\n";
	cout << "Enter [O/o] if the patient was admitted as an outpatient.\n";
	cout << "Your Choice: ";
	cin >> prompt;
	if (prompt == 'I' || prompt == 'i') 
	{
		while (days < 1) 
		{
			cout << "Enter the number of days the patient spent at the hospital: ";
			cin >> days;
		}
		while (rate < 1) 
		{
			cout << "Enter the daily rate of the hospital room (in dollars): ";
			cin >> rate;
		}
		while (meds < 0) 
		{
			cout << "Enter the medication charges of the hospital (in dollars): ";
			cin >> meds;
		}
		while (serv < 0) 
		{
			cout << "Enter the charges for hospital services (labs etc.) (in dollars): ";
			cin >> serv;
		}
		cout << "\nThe total charges accrued by the inpatient are: $" << patient(days, rate, meds, serv);
	}
	else if (prompt == 'O' || prompt == 'o') 
	{
		while (serv < 0) 
		{
			cout << "Enter the charges for hospital services (labs etc.) (in dollars): ";
			cin >> serv;
		}
		while (meds < 0) 
		{
			cout << "Enter the medication charges of the hospital (in dollars): ";
			cin >> meds;
		}
		cout << "\nThe total charges accrued by the outpatient are: $" << patient(serv, meds);
	}
}

float patient(int a, float b, float c, float d)
{
	float total_charges{};
	total_charges = (a * b) + c + d;
	return total_charges;
}
float patient(float a, float b)
{
	float total_charges{};
	total_charges = a + b;
	return total_charges;
}
