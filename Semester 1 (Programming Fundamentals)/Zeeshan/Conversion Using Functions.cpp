//#include<iostream>
//#include<string>
//using namespace std;
/*int sum(int n) {
	int add = n * (n + 1) / 2;  //Sum of n Natural Numbers
	return add;
}
int main() {
	int n;
	cout << "Enter the Number " << endl;
	cin >> n;
	cout << "The Sum of First " << n << " Numbers is " << endl;
	cout << sum(n);
}*/
  /*bool check(int x, int y, int z) {
	int a = max(x, max(y, z));
	int b, c;
	if (a == x) {
		b = y;
		c = z;
	}
	else if (a == y) {
		b = x;
		c = z;
	}
	else
		b = x;
	   c = y;
	   if (a * a == b * b + c * c) {
		   return true;
	   }
	   else
		   return false;
}
int main() {
	int x, y, z;
	cin >> x >> y >> z;
	if (check(x, y, z)) {
		cout << "yes it is p triangle";
	}
	else
		cout << "It is Not";
}*/
/*int binarytodecimal(int n) {
	int sum = 0;
	int x = 1; //x work as base   
	while (n > 0) { 
		int y = n % 10; //this give us last digit 
		sum += x * y; //sum store the decimal number 
		x *= 2; //base is multiple by 2
		n /= 10;
	}
	return sum;
}
int main() {
	int n;
	cout << "Enter binary Number ";
	cin >> n;
	cout << binarytodecimal(n);//use same function for octal conversion ;
}*/
/*int hexatodecimal(string n)
{
	int sum = 0;                       
	int base = 1;
	int s = n.size();
	for (int i = s - 1; i >= 0; i--) {
		if (n[i] >= '0' && n[i] <= '9') 
		{
			sum += base * (n[i]-'0');
		}
		if (n[i] >= 'A' && n[i] <= 'F')
		{
			sum += base * (n[i]-'A'+10);
		}
		base *= 16;
	}
	return sum;
}
int main() {
	string n;
	cin >> n;
	cout << "Number in decimal is " << endl;
	cout << hexatodecimal(n);
}*/
/*void dectohexa(int n)
{
	char arr[100];
	int r = 0;
	int i = 0;
	while (n > 0) 
	{
		r = n % 16;
		if (r < 10) 
		{
			arr[i] = r + 48;
			i++;
		}
		else 
		{
			arr[i] = r + 55;
			i++;
		}
		n /= 16;
	}
	for (i = i - 1; i >= 0; i--) {
		cout << arr[i];
	}
  }
int main() {
	int num;
	cout << "Enter the Number ";
	cin >> num;
	dectohexa(num);
}*/
/*void dectobinary(int n) {
	int arr[100];
	int i;
	for (i = 0; n > 0; i++) {
		arr[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1; i >= 0; i--) {
		cout << arr[i];
	}
 }
int main() {
	int num;
	cout << "Enter the decimal Number " << endl;
	cin >> num;
	dectobinary(num);
  }*/
/*............................................................................................................*/




