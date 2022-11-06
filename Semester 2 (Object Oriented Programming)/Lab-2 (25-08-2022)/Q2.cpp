#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

struct StudentData
{
	string name{}, rollNo{};
	float cgpa{};
};

int populateArray(StudentData *arr);
StudentData findCR(const StudentData *arr);
void printStruct(const StudentData *arr, int i);
void printDropOutStudents(const StudentData *arr);
void printProbations(const StudentData *arr);
void printStudentData(const StudentData *arr, string input);
void printDegree(string degree);
void printSection(char section);
void printDepartment(char department, string degree);

int main()
{
	StudentData arr[30]{};
	if (populateArray(arr) == -1)
	{
		exit(EXIT_FAILURE);
	};
	StudentData CR = findCR(arr);
	cout << "\nFollowing are the details of the CR: ";
	cout << "\n\n\tName: " << CR.name;
	cout << "\n\tRoll no.: " << CR.rollNo;
	cout << "\n\tCGPA.: " << CR.cgpa;
	printDropOutStudents(arr);
	printProbations(arr);
	string inputRollNo{};
	cout << "\n\nEnter the Roll No. of the student you want to get information about: ";
	cin >> inputRollNo;
	printStudentData(arr, inputRollNo);
}

int populateArray(StudentData *arr)
{
	ifstream file;
	file.open("Students.txt");
	if (file)
	{
		cout << "\tFile Read Successfully!\n";
		for (int i = 0; i < 30; i++)
		{
			getline(file >> ws, arr[i].rollNo, ',');
			getline(file >> ws, arr[i].name, ',');
			file >> arr[i].cgpa;
			// arr[i].rollNo.erase(0,1);
			// arr[i].name.erase(0, 1);
		}
		file.close();
	}
	else
	{
		cout << "\n\tError Reading File!";
		return -1;
	}
}

StudentData findCR(const StudentData *arr)
{
	StudentData CR{};
	CR.cgpa = arr[0].cgpa;
	for (int i = 0; i < 30; i++)
	{
		if (arr[i].cgpa > CR.cgpa)
		{
			CR.cgpa = arr[i].cgpa;
			CR.name = arr[i].name;
			CR.rollNo = arr[i].rollNo;
		}
	}

	return CR;
}

void printDropOutStudents(const StudentData *arr)
{
	cout << "\n\nList of Dropout Students:\n";
	for (int i = 0; i < 30; i++)
	{
		if (arr[i].cgpa < 2.70)
		{
			printStruct(arr, i);
		}
	}
}

void printProbations(const StudentData *arr)
{
	cout << "\n\nList of on Probation Students:\n";
	for (int i = 0; i < 30; i++)
	{
		if ((arr[i].cgpa < 2.30) && (arr[i].cgpa > 1.70))
		{
			printStruct(arr, i);
		}
	}
}

void printStruct(const StudentData *arr, int i)
{
	cout << "\n\tName: " << arr[i].name;
	cout << "\n\tRoll no.: " << arr[i].rollNo;
	cout << "\n\tCGPA: " << arr[i].cgpa;
	cout << "\n";
}

void printStudentData(const StudentData *arr, string input)
{
	string degree = input.substr(1, 2);
	string session = input.substr(4, 5);
	char section = input[6];
	char department = input[7];
	for (int i = 0; i < 30; i++)
	{
		if (arr[i].rollNo == input)
		{
			cout << "\nName: " << arr[i].name;
			printDegree(degree);
			cout << "\nSession: 20" << stoi(session) << "-20" << (stoi(session) + 4);
			printSection(section);
			printDepartment(department, degree);
		}
		else if (i == 29)
		{
			cout << "\n\t-> The Entered Roll No. is not Present in the Provided List.\n\n\n";
		}
	}
}

void printDegree(string degree)
{
	if (degree == "SE")
	{
		cout << "\nDegree: "
			 << "BS Software Engineering.";
	}
	else if (degree == "IT")
	{
		cout << "\nDegree: "
			 << "BS Information Technology.";
	}
	else if (degree == "CS")
	{
		cout << "\nDegree: "
			 << "BS Computer Science.";
	}
}

void printSection(char section)
{
	if (section == 'A')
	{
		cout << "\nSection: Afternoon.";
	}
	else if (section == 'M')
	{
		cout << "\nSection: Morning.";
	}
}

void printDepartment(char department, string degree)
{
	if (department == '0' && degree == "SE")
	{
		cout << "\nDepartment: Department of Software Engineering, Old Campus.";
	}
	else if (department == '0' && degree == "IT")
	{
		cout << "\nDepartment: Department of Information Technology, Old Campus.";
	}
	else if (department == '0' && degree == "CS")
	{
		cout << "\nDepartment: Department of Computer Science, Old Campus.";
	}
	else if (department == '5' && degree == "SE")
	{
		cout << "\nDepartment: Department of Software Engineering, New Campus.";
	}
	else if (department == '5' && degree == "IT")
	{
		cout << "\nDepartment: Department of Information Technology, New Campus.";
	}
	else if (department == '5' && degree == "CS")
	{
		cout << "\nDepartment: Department of Computer Science, New Campus.";
	}
	cout << "\n\n\n\n";
}
