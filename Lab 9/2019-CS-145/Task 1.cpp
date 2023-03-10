#include<iostream>
using namespace std;

class Distance
{
	//Access Specifiers
private:
	int feet;																		//data members
	int inches;

public:
	Distance();																		//default constructor
	Distance(int f, int inch);														//parameterized constructor
	void input();
	void display();
	
	//-----------------------------------Operators Overloading-------------------------------------
	friend Distance operator+(Distance& a, Distance& b);
	friend void operator+=(Distance& a, Distance& b);
	friend bool operator>(Distance& a, Distance& b);
	friend bool operator<(Distance& a, Distance& b);
	friend bool operator>=(Distance& a, Distance& b);											
	friend bool operator<=(Distance& a, Distance& b);
	friend bool operator==(Distance& a, Distance& b);
	friend bool operator!=(Distance& a, Distance& b);
};

Distance::Distance()
{
	this->feet = '\0';
	this->inches = '\0';
}

Distance::Distance(int f, int inch)
{
	this->feet = f;
	this->inches = inch;
}

void Distance::input()
{
	cout << "Enter the feet " << endl;
	cin >> feet;
																					//taking input
	cout << "Enter the inches upto 11 " << endl;
	cin >> inches;
}

void Distance::display()
{
	cout << feet << "ft and " << inches << " inches " << endl;						//displaying distance
}

Distance operator+(Distance& a, Distance& b)
{
	Distance temp;

	temp.feet = a.feet + b.feet;
	temp.inches = a.inches + b.inches;											//(+) operator

	if (temp.inches > 11)
	{
		temp.feet += 1;
		temp.inches -= 12;
	}

	return temp;
}

void operator+=(Distance& a, Distance& b)
{
	a.feet += b.feet;
	a.inches += b.inches;														//(+=) operator

	if (a.inches > 11)
	{
		a.feet += 1;
		a.inches -= 12;
	}
}

bool operator>(Distance& a, Distance& b)
{
	if (a.feet > b.feet)
		return true;

	if (a.feet == b.feet && a.inches > b.inches)							//(>) operator
		return true;

	else
		return false;

	return true;
}

bool operator<(Distance& a, Distance& b)
{
	if (a.feet < b.feet)														
		return true;

	if (a.feet == b.feet && a.inches < b.inches)							//(<) operator
		return true;
	else
		return false;

	return true;
}

bool operator>=(Distance& a, Distance& b)
{
	if (a.feet >= b.feet)
		return true;

	if (a.feet == b.feet && a.inches >= b.inches)
		return true;																//(>=) operator
	else
		return false;

	return true;
}

bool operator<=(Distance& a, Distance& b)
{
	if (a.feet <= b.feet)
		return true;

	if (a.feet == b.feet && a.inches <= b.inches)
		return true;																//(<=) operator
	else
		return false;

	return true;
}

bool operator==(Distance& a, Distance& b)
{
	if (a.feet == b.feet)
		return true;

	if (a.inches == b.inches)
		return true;																//(==) operator
	else
		return false;

	return true;
}

bool operator!=(Distance& a, Distance& b)
{
	if (a.feet != b.feet)
		return true;

	if (a.inches != b.inches)
		return true;																//(!=) operator

	else
		return false;

	return true;
}

int main()
{
	Distance obj1;														//object for default constructor
	Distance obj2(5,11);												//object for parameterized constructor
	Distance obj3;
	
	obj1.input();
	cout << endl;

	cout << "The ORIGINAL DISTANCES are : " << endl;
	cout << endl;

	cout << "The first Distance is : " << endl;
	obj1.display();
	cout << endl;

	cout << "The second Distance is : " << endl;
	obj2.display();
	cout << endl;

	//--------------------------------------Using (+) operator -----------------------------------
	cout << "After ADDTION : " << endl;
	cout << endl;

	obj3 = obj1 + obj2;
	cout << "The Distance is : " << endl;
	obj3.display();
	cout << endl;

	//--------------------------------------Using (+=) operator ----------------------------------
	obj1 += obj2;
	cout << "The Distance is : " << endl;
	obj1.display();
	cout << endl;

	//--------------------------------------Using (>) operator -----------------------------------
	if (obj1 > obj2)
		cout << "Distance 1 is greater than Distance 2 " << endl;

	//--------------------------------------Using (<) operator -----------------------------------
	if (obj1 < obj2)
		cout << "Distance 1 is less than Distance 2 " << endl;

	//--------------------------------------Using (>=) operator ----------------------------------
	if (obj1 >= obj2)
		cout << "Distance 1 may be equal to or greater than Distance 2 " << endl;

	//--------------------------------------Using (<=) operator ----------------------------------
	if (obj1 <= obj2)
		cout << "Distance 1 may be equal to or less than Distance 2 " << endl;

	//--------------------------------------Using (==) operator ----------------------------------
	if (obj1 == obj2)
		cout << "Distance 1 and Distance 2 are equal " << endl;

	//--------------------------------------Using (!=) operator ----------------------------------
	if (obj1 != obj2)
		cout << "Distance 1 is not equal to Distance 2 " << endl;

	return 0;
}
