#include<iostream>
using namespace std;
 void eligible(int n);
 int main()
 {
 	int n;
 	cout<<"Enter the Number: ";
 	cin>>n;
 	eligible(n);
 }
  void eligible(int num)
  {
  	if(num>=18)
	  {
  		cout<<"He or She is Eligible for Voting: ";
	  }
	  else
	  cout<<"He or She is Not  Eligible for voting ";
  }
