#include <iostream>

using namespace std;

class ObjectTracker
{
private:
	static int counter;
public:
	ObjectTracker();
	ObjectTracker(ObjectTracker&);
	~ObjectTracker();
	friend void deAllocate(ObjectTracker*& ptr);
	static int getCount()
	{
		return counter;
	}
};

int ObjectTracker::counter(0);

ObjectTracker::ObjectTracker()
{
	counter++;
}

ObjectTracker::ObjectTracker(ObjectTracker& obj)
{
	counter++;
}

ObjectTracker::~ObjectTracker()
{
	cout << "Current Object Count: " << ObjectTracker::getCount() << endl;
	counter--;
}

int main()
{
	ObjectTracker obj1;
	cout << "Current Object Count: " << obj1.getCount() << endl;
	ObjectTracker obj2, obj3;
	cout << "Current Object Count: " << ObjectTracker::getCount() << endl;
	ObjectTracker obj4 = obj1;
	cout << "Current Object Count: " << ObjectTracker::getCount() << endl;
	ObjectTracker* ptr1 = &obj2;
	cout << "Current Object Count: " << ObjectTracker::getCount() << endl;
	ObjectTracker* ptr2 = new ObjectTracker;
	cout << "Current Object Count: " << ObjectTracker::getCount() << endl;
	deAllocate(ptr2);
	cout << "Current Object Count: " << ObjectTracker::getCount() << endl;
}

void deAllocate(ObjectTracker*& ptr)
{
	delete ptr;
	ptr = nullptr;
}
