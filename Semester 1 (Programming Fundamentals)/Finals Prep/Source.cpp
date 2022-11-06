#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	/*int rows{};
	cout << "Enter the number of rows: ";
	cin >> rows;
	int n=1;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			cout << n << " ";
		}
		for (int s = (rows - i); s >=0; s--) {
			cout << "  ";
		}
		for (int s = (rows - i); s >= 0; s--) {
			cout << "  ";
		}
		for (int j = 1; j <= i; j++) {
			cout << n << " ";
		}
		n++;
		cout << "\n";
	}*/
	/*int n1, r{}, n2, sum{};
	cout << "Enter a number: ";
	cin >> n1;
	n2 = n1;
	while (n1 != 0) {
		r = n1 % 10;
		sum = (sum * 10) + r;
		n1 /= 10;
	}
	if (sum == n2) {
		cout << "Palindrome.";
	}
	else
		cout << "Not";*/
	/*int n, fact{1};
	cout << "Enter a number: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	cout << fact;*/
	/*int n1, n2, r{}, sum{};
	cout << "Enter a number: ";
	cin >> n1;
	n2 = n1;
	int size = log10(n1)+1;
	while (n1 != 0) {
		r = n1 % 10;
		sum += (pow(r, size));
		n1 /= 10;
	}
	if (sum == n2) {
		cout << "Armstrong.";
	}
	else
		cout << "Not.";*/
	/*int n1, r{}, sum{};
	cout << "Enter a number: ";
	cin >> n1;
	while (n1 != 0) {
		r = n1 % 10;
		sum += r;
		n1 /= 10;
	}
	cout << sum;*/
	/*int n1, r{}, n2, sum{};
	cout << "Enter a number: ";
	cin >> n1;
	while (n1 != 0) {
		r = n1 % 10;
		sum = (sum * 10) + r;
		n1 /= 10;
	}
	cout << sum;*/
	/*int arr1[3][3]{}, arr2[3][3]{}, mult[3][3]{};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter a positive integer at index [" << i << "][" << j << "]: ";
			cin >> arr1[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter a positive integer at index [" << i << "][" << j << "]: ";
			cin >> arr2[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mult[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				mult[i][j] += (arr1[i][k] * arr2[k][j]);
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << setw(4) << mult[i][j];
		}
		cout << "\n";
	}*/
	/*int a{}, b{};
	cout << "Enter two numbers:\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = "<<a;
	cout << endl;
	cout << "b = "<<b;*/
	/*int dec{}, bin[10]{}, i{};
	cout << "Enter a decimal number: ";
	cin >> dec;
	for (i = 0; dec > 0; i++) {
		bin[i] = dec % 2;
		dec /= 2;
	}
	for (i = i - 1; i >= 0; i--) {
		cout << bin[i];
	}*/
/*char ch = 'A';
int i, j, k, m;
for (i = 1; i <= 5; i++) {
	for (j = 5; j >= i; j--) {
		cout << "   ";
	}
	for (k = 1; k <= i; k++) {
		cout << setw(3) << ch++;
	}
	ch--;
	for (m = 1; m < i; m++) {
		cout << setw(3) << --ch;
	}
	cout << "\n";
	ch = 'A';
}*/
/*int  ch = 1;
int i, j, k, m;
for (i = 1; i <= 5; i++) {
	for (j = 5; j >= i; j--) {
		cout << "   ";
	}
	for (k = 1; k <= i; k++) {
		cout << setw(3) << ch++;
	}
	ch--;
	for (m = 1; m < i; m++) {
		cout << setw(3) << --ch;
	}
	cout << "\n";
	ch = 1;
}*/
/*for (int i = 1; i <= 5; i++) {
	int a = 0, b = 1, c;
	cout << setw(3) << b;
	for (int j = 1; j < i; j++) {
		c = a + b;
		cout << setw(3) << c;
		a = b;
		b = c;
	}
	cout << "\n";
}*/
	/*struct book {
		string name{};
		int id{};
	}book1;
		book1.name = "MUAZ";
		book1.id = 13;
	cout << book1.name;
	cout << book1.id;*/
	/*int* marks;
	int n;
	cout << "Enter size: ";
	cin >> n;
	marks = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> marks[i];
	}
	for (int i = 0; i < n; i++) {
		cout << marks[i];
	}*/
	/*int n = 1, sum = 0;
	int limit{};
	cout << "Enter limit: ";
	cin >> limit;
	for (int i = 1; i <= limit; i++) {
		for (int j = 1; j <= i; j++) {
			sum += j;
		}
	}
	cout << sum;*/
	/*int l = 1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 5-i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k <= l; k++) {
			cout << "*";
		}
		l += 2;
		cout << endl;
	}*/
	/*int* p;
	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };
	p = arr;
	for (int i = 0; i < 5;i++) {
		cout << *p<<" ";
		p+=2;
	}*/
	/*int arr[10]{ 1,2,3,4,1,5,6,7,2,9 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i!=j) && (arr[i] == arr[j])) {
				arr[j]=0;
			}
		}
	}
	for (int i = 0; (i < 10); i++) {
		if(arr[i]!=0)
		cout << setw(3) << arr[i];
	}*/
	/*int num[6]{ 3,6,8,9,1,2 }, temp{}, k{};
	cout << "Enter k: ";
	cin >> k;
	for (int i = 0; i < 6; i++) {
		for (int j = i+1; j < 6; j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = k; i < 6; i++) {
		cout << setw(3) << num[i];
	}*/
	/*int num[8]{ 4, 5, 9, 12, 9, 22, 45, 7 }, temp{};
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (num[i] > num[j]) {
			temp = num[i];
			num[i] = num[j];
			num[j] = temp;
			}
		}
	}
	int comp{};
	for (int i = 0; i < 8; i+=2) {
		comp = num[i];
		num[i] = num[i + 1];
		num[i + 1] = comp;
	}
	for (int i = 0; i < 8; i++) {
		cout << setw(3) << num[i];
	}*/
	/*int num[7]{ 0, 9, -7, 2, -12, 11, -20 }, copy[7]{}, j{};
	for (int i = 0; i < 7; i++) {
		if (num[i] >= 0) {
			copy[j] = num[i];
			j++;
		}
	}
	for (int i = 0; i < 7; i++) {
		if (num[i] < 0) {
			copy[j] = num[i];
			j++;
		}
	}
	for (int i = 0; i < 7; i++) {
		cout << setw(3) << copy[i];
	}*/
    /*int num[7]{ 1,5,6,4,2,1,2 }, copy[7]{}, k{0};
    for (int i = 0; i < 7; i++) {
		for (int j = i + 1; j < 7; j++) {
			if (num[i] != num[j]) {
				copy[k] = num[i];
				k++;
			}
		}
    }
	for (int i = 0; i < k; i++) {
		cout << setw(3) << copy[i];
	}*/
}