#include <iostream>
using namespace std;
int *getArray(int);
int main()
{
	int* ptr = nullptr;
	int n;
	cout << "\nEnter number of elements in the array: ";
	cin >> n;
	ptr = getArray(n);
	for (int i = 0; i < n; i++)  
	{
		cout << "Value at index " << i + 1 << ": ";
		cout << *(ptr + i) << " ";
	}
	delete[] ptr;
	ptr = nullptr;
}
int *getArray(int n)
{
	int* temp = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter value at index " << i + 1 << ": ";
		cin >> *(temp + i);
	}
	return temp;
}

#include <iostream>
using namespace std;

int main()
{
	int rows, cols;

	cout << "\nEnter the number of students: ";
	cin >> rows;

	cout << "\nEnter the number of subjects: ";
	cin >> cols;

	//DMA of 2-D Arrays
	int** marks = new int* [rows] {};

	for (int i = 0; i < rows; i++)
	{
		marks[i] = new int[cols] {};
	}

	//Input
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "\nEnter marks of Student #" << i + 1 << " in Subject #" << j + 1 << ": ";
			//cin >> marks[i][j];
			cin >> *(*(marks + i) + j);
		}
	}
	//Output
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "\nMarks of Student #" << i + 1 << " in Subject #" << j + 1 << ": ";
			//cout << marks[i][j] << " ";
			cout << *(*(marks + i) + j);
			cout << "\n";
		}
	}

	//Deallocation of Dyanamically Allocated 2-D Arrays
	for (int i = 0; i < rows; i++)
	{
		delete[] marks[i];
		marks[i] = nullptr;
	}

	delete[] marks;
	marks = nullptr;
}

#include <iostream>
using namespace std;

int** allocateArray(int r, int c);
void inputArray(int** marks, int r, int c);
void displayArray(int** marks, int r, int c);
void deAllocateArray(int** marks, int r, int c);

int main()
{
	int rows, cols;

	cout << "\nEnter the number of students: ";
	cin >> rows;

	cout << "\nEnter the number of subjects: ";
	cin >> cols;

	int** array;
	array = allocateArray(rows, cols);
	inputArray(array, rows, cols);
	displayArray(array, rows, cols);
	deAllocateArray(array, rows, cols);

}

int** allocateArray(int r, int c)
{
	int** marks = new int* [r] {};

	for (int i = 0; i < r; i++)
	{
		marks[i] = new int[c] {};
	}
	return marks;
}

void inputArray(int** marks, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "\nEnter marks of Student #" << i + 1 << " in Subject #" << j + 1 << ": ";
			//cin >> marks[i][j];
			cin >> *(*(marks + i) + j);
		}
	}
}

void displayArray(int** marks, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "\nMarks of Student #" << i + 1 << " in Subject #" << j + 1 << ": ";
			//cout << marks[i][j] << " ";
			cout << *(*(marks + i) + j);
			cout << "\n";
		}
	}
}

void deAllocateArray(int** marks, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		delete[] marks[i];
		marks[i] = nullptr;
	}

	delete[] marks;
	marks = nullptr;
}

#include <iostream>
using namespace std;

int* resizeArray(int inArray[], const int size);

int main()
{
	int size;
	cout << "\nEnter size of the array: ";
	cin >> size;
	int* array = new int[size]{};

	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter value at index " << i + 1 << ": ";
		cin >> array[i];
	}

	int* array2;
	array2 = resizeArray(array, size);

	for (int i = 0; i < size*2; i++)
	{
		cout << array2[i];
	}

	delete[] array;
	array = nullptr;

	delete[] array2;
	array2 = nullptr;

	return 0;
}

int* resizeArray(int inArray[], const int size)
{
	int* array = new int[size*2];
	
	copy(inArray, inArray + size, array);

	for (int i = 0; i < size; i++)
	{
		array[i + size] = inArray[i] * 2;
	}
	
	return array;
}



#include <iostream>
using namespace std;
char* left(const char* target, const int count);
void destructor(char* p);
int main()
{
	int count = 0;
	int size = 0;
	cout << "Enter size of string:";
	cin >> size;
	char* arr = new char[size];
	cin.ignore();
	cin.clear();
	cout << "Enter String= ";
	cin.getline(arr, size);
	cout << "Enter count:";
	cin >> count;
	while (count > size)
	{
		cout << "Out of Range value!Enter count again so that count must be smallar than size.";
		cin >> count;
	}
	char* target = left(arr, count);
	for (int i = 0; i < count; i++)
	{
		cout << target[i];
	}
	destructor(arr);
	destructor(target);
}
char* left(const char* target, const int count)
{
	char* arr = new char[count];
	int i = 0;
	while (i < count)
	{
		arr[i] = target[i];
		i++;
	}
	return arr;
}

void  destructor(char* p)
{
	delete[] p;
	p = nullptr;
}


