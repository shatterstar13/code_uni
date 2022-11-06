#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
using std::ofstream;
int main() {
	string name, you;
	ofstream html;
	cout << "Enter Your Full Name ";
	getline(cin, name);
	cout << "Write something about yourself ";
	getline(cin, you);
	html.open("html.html");
	html << "<html>" << endl << "<head>" << endl << "</head>" << endl << "<body>" << endl;
	html << "<center>" << endl << "<h1>" << name << "</h1>" << endl << "</center>" << endl;
	html << "<hr/>" << endl << "<center>" << you << "</center>"<<"<hr/>" << endl << "</body>" << endl<< "</html>";
}
