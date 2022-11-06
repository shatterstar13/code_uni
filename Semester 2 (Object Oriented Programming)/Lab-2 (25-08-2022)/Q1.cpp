#include <iostream>
#include <string>

using namespace std;

struct MovieData
{
	string title{}, director{};
	int year{}, runningTime{};
};

MovieData inputStruct(MovieData &mov){
	cout << "Enter the name of the movie: ";
	getline(cin, mov.title);
	cout << "Enter the name of the director: ";
	getline(cin, mov.director);
	cout << "Enter the release year of the movie: ";
	cin >> mov.year;
	cout << "Enter the running time of the movie (in minutes): ";
	cin >> mov.runningTime;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\n\n";

	return mov;

}

void displayStruct(const MovieData mov) {
	static int count = 1;
	cout << "\nThe name of movie #"<<count <<" is: "<<mov.title;
	cout << "\nThe Director of movie #" << count << " is: " << mov.director;
	cout << "\nThe Year of release of movie #" << count << " is: " << mov.year;
	cout << "\nThe Running Time of movie #" << count << " is: " << mov.runningTime;

	count++;
	cout << "\n\n";
}

int main() {
	MovieData movie1, movie2;

	movie1 = inputStruct(movie1);
	movie2 = inputStruct(movie2);

	displayStruct(movie1);
	displayStruct(movie2);

	cout << "\n\n";
	cout << "\n\n";
	return 0;
}