#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct StudentData
{
	string name, rollNum;
	double cgpa = 0;
};
void populateArray(StudentData*, const int size);
StudentData findCR(const StudentData*, const int size);
void printDropOutStudents(StudentData*, const int size);
void printProbations(StudentData*, const int size);
void printStudentData(string, StudentData*, const int size);

int main()
{
	const int SIZE = 30;
	StudentData studs[SIZE];
	populateArray(studs, SIZE);
	StudentData getCR = findCR(studs, SIZE);
	cout << "_____\n";
	cout << "\nThe CR is:\n";
	cout << "_____\n";
	cout << "\nNAME: " << getCR.name;
	cout << "\nROLL#: " << getCR.rollNum;
	cout << "\nCGPA: " << getCR.cgpa << endl << endl;
	printDropOutStudents(studs, SIZE);
	printProbations(studs, SIZE);
	string inputRollNo;
	cout << "\n\nEnter the Roll No. of the student you want to get information about: ";
	cin >> inputRollNo;
	printStudentData(inputRollNo, studs, SIZE);
}
void populateArray(StudentData* students, const int size)
{
	ifstream fin;
	fin.open("Students.txt");
	if (!fin)
	{
		cout << "ERROR!file is not readed.\n";
	}
	else
	{
		cout << "\"File Successfully read\"\n\n";
		for (int i = 0; i < size; i++)
		{

			getline(fin >> ws, students[i].rollNum, ',');
			getline(fin >> ws, students[i].name, ',');
			fin >> students[i].cgpa;

		}
		fin.close();

	}
}

StudentData findCR(const StudentData* gPA, const int size)
{

	StudentData CR;
	CR.cgpa = gPA[0].cgpa;
	for (int i = 0; i < 30; i++) {
		if (gPA[i].cgpa > CR.cgpa) {
			CR.cgpa = gPA[i].cgpa;
			CR.name = gPA[i].name;
			CR.rollNum = gPA[i].rollNum;
		}
	}

	return CR;
}

void printDropOutStudents(StudentData* dropOuts, const int size)
{
	cout << "________________\n";
	cout << "\nTHE LIST OF DROP OUT STUDENTS IS BELOW : \n";
	cout << "________________\n\n\n";
	for (int i = 0; i < size; i++)
	{
		if (dropOuts[i].cgpa < 1.70)
		{
			cout << "\tRoll #: " << dropOuts[i].rollNum << endl;
			cout << "\tNAME: " << dropOuts[i].name << endl;
			cout << "\tCGPA: " << dropOuts[i].cgpa << endl;
			cout << endl;
		}
	}
}

void printProbations(StudentData* probation, const int size)
{
	cout << "________________\n";
	cout << "\nTHE LIST OF PROBATED STUDENTS IS BELOW : \n";
	cout << "________________\n\n";
	for (int i = 0; i < size; i++)
	{
		if (probation[i].cgpa > 2.30 && probation[i].cgpa < 2.70)
		{
			cout << "\tRoll#: " << probation[i].rollNum << endl;
			cout << "\tNAME:" << probation[i].name << endl;
			cout << "\tCGPA = " << probation[i].cgpa << endl << endl;
		}
	}
	cout << endl;
}

void printStudentData(string rollNo, StudentData* data, const int size)
{
	for (int i = 0; i < size; i++)
	{
		//char degree = data[i].rollNum.substr(0, 4);
		if (rollNo == data[i].rollNum)
		{
			rollNo = data[i].rollNum;
			string degree = rollNo.substr(0, 3);
			string session = rollNo.substr(3, 3);
			char section = rollNo[6];
			if (degree == "BSE" && session == "F16" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2016 - 2020\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F16" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2016 - 2020\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F18" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2018 - 2022\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F18" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2018 - 2022\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F19" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2019 - 2023\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F19" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2019 - 2023\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F20" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2020 - 2024\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F20" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2020 - 2024\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F21" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2021 - 2025\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BSE" && session == "F21" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Software Engineering\n";
				cout << "Session: 2021 - 2025\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Software Engineering, Old Campus.";
			}
			else if (degree == "BCS" && session == "F16" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2016 - 2020\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F16" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2016 - 2020\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F18" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2018 - 2022\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F18" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2018 - 2022\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F19" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2019 - 2023\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F19" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2019 - 2023\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F20" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2020 - 2024\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F20" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2020 - 2024\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F21" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2021 - 2025\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}
			else if (degree == "BCS" && session == "F21" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Computer Science\n";
				cout << "Session: 2021 - 2025\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Computer Science, Old Campus.";
			}

			else if (degree == "BIT" && session == "F16" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2016 - 2020\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F16" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2016 - 2020\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F18" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2018 - 2022\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F18" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2018 - 2022\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F19" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2019 - 2023\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F19" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2019 - 2023\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F20" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2020 - 2024\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F20" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2020 - 2024\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F21" && section == 'A')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2021 - 2025\n";
				cout << "Section : Afternoon\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else if (degree == "BIT" && session == "F21" && section == 'M')
			{
				cout << "NAME:" << data[i].name << endl;
				cout << "Degree: BS Information Technology\n";
				cout << "Session: 2021 - 2025\n";
				cout << "Section : Morning\n";
				cout << "Department : Department of Information Technology, Old Campus.";
			}
			else
				cout << "Record against roll number is not found.";
		}
	}
	cout << endl;
}