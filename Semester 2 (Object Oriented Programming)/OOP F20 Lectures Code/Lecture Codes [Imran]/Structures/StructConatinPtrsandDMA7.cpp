#include <iostream>
using namespace std;

struct TwoVals
{
	int num;
	int* ptr;
};

int main()
{
	TwoVals v1;
	v1.num = 23;
	v1.ptr = new int;
	*(v1.ptr) = 55;
	cout << v1.num << " " << v1.ptr << " " << *(v1.ptr) << endl;
	delete v1.ptr;
	v1.ptr = nullptr;

	//-------------------------------------------------------


	TwoVals* vp = nullptr;
	vp = new TwoVals;

	//(*vp).num = 42;
	// OR
	vp->num = 42;

	//(*vp).ptr = new int;
	// OR
	vp->ptr = new int;

	*(vp->ptr) = 70;
	// OR
	//*((*vp).ptr)=70;

	cout << vp->num << " " << *(vp->ptr) << endl;

	delete vp->ptr;
	vp->ptr = nullptr;

	delete vp;
	vp = nullptr;

	//--------------------------------------------------

	TwoVals* arr = new TwoVals[5];

	//arr[i] ----> is a TwoVals  object/variable

	for (int i = 0; i < 5; i++)
	{
		arr[i].num = 10;
		arr[i].ptr = new int;
		*(arr[i].ptr) = 20;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i].num << " " << *(arr[i].ptr) << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		delete arr[i].ptr;
		arr[i].ptr = nullptr;
	}

	delete[] arr;
	arr = nullptr;
}
