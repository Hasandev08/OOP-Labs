#include<iostream>
using namespace std;

class B;

class A
{
	//Access Specifiers
private:
	int value1;																		//data member

public:
	void setData()
	{
		value1 = 12;
	}
	//member funciton
	void display()
	{
		cout << "The VALUE of value1 before swapping : " << value1 << endl;
	}

	friend void exchange(A&, B&);														//friend function
};

class B
{
	//Access Specifiers
private:
	int value2;																		//data members

public:
	void setData()
	{
		value2 = 13;
	}
	//member functions
	void display()
	{
		cout << "The VALUE of value2 before swapping : " << value2 << endl;
	}

	friend void exchange(A&, B&);														//friend function
};

void exchange(A &obj1, B &obj2)
{
	int temp;

	obj1.setData();
	obj1.display();
	obj2.setData();																	//values before swapping
	obj2.display();

	temp = obj1.value1;
	obj1.value1 = obj2.value2;														//logic for swapping the number
	obj2.value2 = temp;

	cout << endl;
	cout << "----------------After Swap----------------" << endl;
	cout << "The VALUE of value1 after swapping : " << obj1.value1 << endl;
	cout << "The VALUE of value2 after swapping : " << obj2.value2;					//values after swapping
}

int main()
{
	cout << "----------------------------------Task 2----------------------------------" << endl;
	cout << endl;
	cout << endl;

	cout << "----------------Swapping two integers---------------" << endl;
	cout << endl;
	cout << "----------------Before Swap---------------" << endl;
	A objA;
	B objB;

	exchange(objA, objB);

	return 0;
}
