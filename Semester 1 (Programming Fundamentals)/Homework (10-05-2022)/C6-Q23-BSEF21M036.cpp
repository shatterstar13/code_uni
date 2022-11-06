
// Muaz Saleem (BSEF21M036) : Program to put a list of all the prime numbers between 1 and 100 into a file

#include <iostream>
#include <fstream>
using namespace std;
void isPrime(ofstream&); // putting the address of the file object as a parameter
int main()
{
	int num;
	ofstream list_prime;
	isPrime(list_prime);  // passing the empty file as argument
	cout << "\n\t\tFinished!\n\n";
}

void isPrime(ofstream& f)
{
	f.open("list_prime.txt");
	for (int count = 1; count <= 100; count++) {
		bool flag{ true };
		if (!(count == 1)) {     // since 1 is not a prime number
			for (int x = 2; x <= count / 2; x++)
			{
				if (count % x == 0)
				{
					flag = false;
				}
			}
			if (flag == true)    // only enters if the number is prime
			{
				f << count << "\t";
			}
		}
	}
}
