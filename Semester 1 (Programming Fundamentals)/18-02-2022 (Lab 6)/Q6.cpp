#include<iostream>
using namespace std;
int main()
{
	int t_sec, h, m, s;
	cout << "Enter total number of seconds ";
	cin >> t_sec;
	h = t_sec / 3600;
	m = (t_sec % 3600) / 60;
	s = t_sec % 60;
	cout << h << "::" << m << "::" << s;
}