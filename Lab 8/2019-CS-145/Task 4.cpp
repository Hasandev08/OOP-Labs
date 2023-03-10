#include<iostream>
using namespace std;

class Student
{
	//Access Specifiers
private:
	string name;
	float marks;																//data members
	static int roll_num;

public:
	Student()
	{
		name = '\0';
		marks = '\0';															//default constructor
		Student::roll_num++;
	}

	void setData(string n, float m)												//member functions
	{
		this->name = n;
		this->marks = m;
	}

	void display()
	{
		cout << "The name is : " << name << endl;
		cout << "The roll number is : " << Student::roll_num << endl;
		cout << "The marks are : " << marks << endl;
	}
};

int Student::roll_num = 0;														//initializing static variable

int main()
{
	cout << "-------------------------------------Task 4-------------------------------------" << endl;
	cout << endl;

	Student obj1;
	cout << "First Student : " << endl;
	obj1.setData("Hasan", 98);															//Student 1
	obj1.display();
	cout << endl;

	Student obj2;
	cout << "Second Student : " << endl;
	obj2.setData("Ertugrul", 100);														//Student 2
	obj2.display();
	cout << endl;

	Student obj3;
	cout << "Third Student : " << endl;
	obj3.setData("Halime", 100);														//Student 3
	obj3.display();

	return 0;
}
