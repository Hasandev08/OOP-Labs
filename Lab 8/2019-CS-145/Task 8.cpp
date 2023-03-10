#include<iostream>
#include<cstring>
using namespace std;

class Person
{
	//Access Specifiers
private:
	char name1[25];																	//data members
	char name2[25];

public:
	void addString(char n1[], char n2[])
	{
		strcpy(this->name1, n1);
		strcpy(this->name2, n2);													//member functions
	}
																					
	void operator+()																//overloading (+)operator
	{
		cout << "After Catenation : \n" << strcat(name1, name2);					//catenation of the names
	}
};

int main()
{
	cout << "----------------------------------------------Task 8----------------------------------------" << endl;
	cout << endl;

	Person name;

	char str1[] = "Hasan ";															//name 1
	char str2[] = "Ahmed ";															//name 2

	//printing name on console
	cout << "Before catenation : " << endl;
	cout << str1 << endl;									
	cout << str2 << endl;
	cout << endl;

	//performing catenation
	name.addString(str1, str2);

	+name;

	return 0;
}
