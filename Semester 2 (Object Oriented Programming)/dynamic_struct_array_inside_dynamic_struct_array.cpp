#include <iostream>
#include <string>

using namespace std;

struct membersDetails
{
	string name{};
	string rollNo{};
	double cgpa{};
};

struct Team 
{
	string teamName{};
	int noOfMembers{};
	membersDetails* members{};
};

void inputStruct(Team*, int);

int main() 
{
	int teamCount{};
	cout << "Enter the number of teams in the competition: ";
	cin >> teamCount;
	Team* teams = new Team[teamCount];
	inputStruct(teams, teamCount);
	
}

void inputStruct(Team* arr1, int count)
{
	for (int i = 0; i < count; i++) 
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\nEnter the name of Team #" << i + 1 << ": ";
		getline(cin, arr1[i].teamName);
		cout << "\nEnter the number of members in the team: ";
		cin >> arr1[i].noOfMembers;
		arr1[i].members = new membersDetails[arr1[i].noOfMembers];
		for (int j = 0; j < arr1[i].noOfMembers; j++) {
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "\nEnter the name of member #" << j + 1 << ": ";
			getline(cin, arr1[i].members[j].name);
			cout << "\nEnter the roll no. of member #" << j + 1 << ": ";
			getline(cin, arr1[i].members[j].rollNo);
			cout << "\nEnter the CGPA of member #" << j + 1 << ": ";
			arr1[i].members[j].cgpa;
		}
		cin.ignore();
	}
	
}