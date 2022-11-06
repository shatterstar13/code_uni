#include <iostream>
using namespace std;

struct Student
{
	string name = {};
	string rollNo = {};
	float cgpa = 0;
};

struct Team
{
	string teamName = {};
	int totalmembers = 0;
	Student* detailOfMembers = {};
	int score = 0;
};

Team findWinner(Team*, int);
int main()
{
	int count;
	Team highest;
	cout << "Enter total teams:";
	cin >> count;
	Team* team = new Team[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Enter name of Team " << i + 1 << " :";
		cin >> team[i].teamName;
		cout << "Enter total members:";
		cin >> team[i].totalmembers;

		for (int j = 0; j < team[i].totalmembers; j++)
		{
			cin.ignore();
			cout << "Enter name of member " << j + 1 << " :";
			cin >> team[i].detailOfMembers->name;
			cout << "Enter Roll# of member " << j + 1 << " :";
			cin >> team[i].detailOfMembers->rollNo;
			cout << "Enter CGPA of member " << j + 1 << " :";
			cin >> team[i].detailOfMembers->cgpa;
		}

		cout << "Enter Score of team:";
		cin >> team[i].score;

		highest = findWinner(&team[i], count);

	}
	cout << "Winner is:" << highest.teamName;

	delete[] team;
	team = nullptr;
}

Team findWinner(Team* teams, int teamSize)
{
	Team highestScore;
	highestScore.score = teams[0].score;
	for (int i = 1; i < teamSize; i++)
	{
		if (teams[i].score > highestScore.score)
		{
			highestScore.score = i;
			highestScore.teamName = teams[i].teamName;
		}
	}
	return highestScore;
}