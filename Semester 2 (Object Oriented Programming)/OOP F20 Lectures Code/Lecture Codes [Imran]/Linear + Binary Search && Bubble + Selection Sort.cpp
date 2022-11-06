
//LINEAR SEARCH
#include <iostream>
using namespace std;

// Function prototype
int linearSearch( int*, int, int);
const int SIZE = 9;

int main()
{
    int array[SIZE] = { 1,2,3,4,5,6,7,8,9 };
    int found; 
    int value;    
    cout << "Enter the value you want to search for: ";
    cin >> value;

    found = linearSearch(array, SIZE, value);

    if (found == -1)
        cout << "That number does not exist in the array.\n";
    else
    {
        cout << "That number is found at element " << found+1;
        cout << " in the array.\n";
    }
    return 0;
}



int linearSearch(int* array, int size, int key)
{
    for (int  index = 0; index < size; index++)
    {
        if (array[index] == key)
        {
            return index;
        }
    }         
    return -1;
}


//BINARY SEARCH
#include <iostream>
using namespace std;

// Function prototype
int binarySearch( int*, int, int);
const int SIZE = 9;

int main()
{
    int array[SIZE] = { 1,2,3,4,5,6,7,8,9 };
    int found; 
    int value;    
    cout << "Enter the value you want to search for: ";
    cin >> value;

    found = binarySearch(array, SIZE, value);

    if (found == -1)
        cout << "That number does not exist in the array.\n";
    else
    {
        cout << "That number is found at element " << found+1;
        cout << " in the array.\n";
    }
    return 0;
}



int binarySearch(int* array, int size, int key)
{
    int start = 0,
        end = size,
        mid = 0;

    while ( start <= end)
    {
        mid = (start + end) / 2;     
        if (array[mid] > key)      
            end = mid - 1;
        else if (array[mid] < key)  
            start = mid + 1;
        else
            return mid;
    }
    return -1;
}


//BUBBLE SORT AN ARRAY
 //This program demonstrates the Bubble Sort algorithm.
#include <iostream>
using namespace std;

// Function prototypes
void bubbleSort(int[], int);
void swap(int&, int&);

int main()
{
    const int SIZE = 10;


    int values[SIZE];

    cout << "Enter values:\n";
    for (int i = 0;i < SIZE;i++)
        cin >> values[i];

    cout << "The unsorted values:\n";
    for (int i = 0;i < SIZE;i++)
        cout << values[i] << " ";
    cout << endl;


    bubbleSort(values, SIZE);


    cout << "The sorted values:\n";
    for (int i = 0;i < SIZE;i++)
        cout << values[i] << " ";
    cout << endl;

    return 0;
}

void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
        }
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

 //SELECTION SORT
#include <iostream>
using namespace std;

 //Function prototypes
void selectionSort(int*, int);
int minimumIndex(int*, int size, int start);
void swap(int&, int&);


int main()
{
    const int SIZE = 10;
    int values[SIZE]= {0};

    cout << "Enter values:\n";
    for (int i = 0;i < SIZE;i++)
        cin >> values[i];

     //Display the unsorted array.
    cout << "The unsorted values:\n";
    for (int i = 0;i < SIZE;i++)
        cout << values[i] << " ";
    cout << endl;

     //Sort the array.
    selectionSort(values, SIZE);

     //Display the sorted array.
    cout << "The sorted values:\n";
    for (int i = 0;i < SIZE;i++)
        cout << values[i] << " ";
    cout << endl;

    return 0;
}

void selectionSort(int* array, int size)
{
    int minIndex;

    for (int start = 0; start < size ; start++)
    {
        minIndex = minimumIndex(array, size, start);
        swap(array[minIndex], array[start]);
    }
}

int minimumIndex(int* array, int size, int start)
{
    int min = start;
    for (int index = start + 1; index < size; index++)
    {
        if (array[index] < array[min])
            min = index;
    }
    return min;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}