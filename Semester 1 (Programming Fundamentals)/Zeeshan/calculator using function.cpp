#include<iostream>
using namespace std;
int calculator(int a,char ch,int b);
int main()
{
	 int n1,n2;
	 cout<<"Enter the first Number: "<<endl;
	 cin>>n1;
	 cout<<"Enter the Second Number: "<<endl;
	 cin>>n2;
	 char c;
	 cout<<"Enter the Operator: "<<endl;
	 cin>>c;
	 cout<<calculator(n1,c,n2);
}
 int calculator(int a,char ch,int b){
 	if(ch =='+')
	 {
 		cout<<"The Sum is: ";
 		return a+b;
	 }
	 if(ch=='-')
	 {
 		cout<<"The Difference is: ";
 		return a-b;
	 }
	 if(ch=='*')
	 {
 		cout<<"The Multiplication is: ";
 		return a*b;
	 }
	 if(ch=='/')
	 {
 		cout<<"The divison is: ";
 		return a/b;
	 }
 }
