#include<iostream>
using namespace std;

class matrix
{
	//Access Specifiers
private:
	int a[3][3];																//data members

public:
	void input();
	void display();																//member functions
	void operator+(const matrix& b);
};

void matrix::input()
{
	cout << "Enter the entities for 3x3 matrix " << endl;

	for (int i = 0; i < 3; i++)													//taking input of the matrices
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
}

void matrix::display()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";											//formatting the numbers according to matrix
		}

		cout << endl;
	}
}

void matrix:: operator+(const matrix& b)
{
	matrix obj;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			obj.a[i][j] = a[i][j] + b.a[i][j];											//overloading (+) operator
		}
	}

	cout << "After addition : " << endl;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << obj.a[i][j] << "\t";												//displaying matrix after addition
		}

		cout << endl;
	}
}

int main()
{
	cout << "-------------------------------------------Task 7--------------------------------------" << endl;
	cout << endl;
	
	matrix m,n;

	m.input();																//for 1st matrix
	cout << endl;
	
	n.input();																//for 2nd matrix
	
	cout << "------------------------------------------------------------------------------------------" << endl;

	cout << endl;

	cout << "The first matrix is : " << endl;
	m.display();															//displaying 1st matrix
	cout <<endl;

	cout << "The second matrix is : " << endl;
	n.display();															//displaying 2nd matrix
	cout << endl;

	m + n;

	return 0;

}
