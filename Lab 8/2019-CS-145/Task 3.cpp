#include<iostream>
using namespace std;

class complex
{
//Access Specifiers
private:
	int real;																//data members			
	int img;

public:
	complex()
	{
		real = '\0';														//default constructor
		img = '\0';
	}

	complex(int real, int img)
	{
		this->real = real;													//parameterzed constructor
		this->img = img;
	}																		//member functions

	friend complex sum(complex, complex);									//friend function

	void show(complex);
	void input();
};

void complex::input()
{
	cout << "Enter the real number " << endl;
	cin >> real;
																			//taking input for default constructor
	cout << "Enter the imaginary number " << endl;
	cin >> img;
}

complex sum(complex a, complex b)
{
	complex sum;

	sum.real = a.real + b.real;												//adding real numbers
	sum.img = a.img + b.img;												//adding imaginary numbers

	return sum;
}

void complex::show(complex sum)
{
	cout << "The complex number after the sum is : " << real << "+" << img << "i" << endl;   //format for complex number
}

int main()
{
	cout << "-----------------------------Task 3---------------------------" << endl;
	cout << endl;
	cout << endl;

	complex a;
	complex b(4, 5);
	complex c;

	a.input();
	cout << endl;

	cout << "----------------------Output---------------------" << endl;

	c = sum(a, b);
	c.show(c);
}
