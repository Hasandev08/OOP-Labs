#include<iostream>
using namespace std;

class Matrix
{
	//Access Specifiers
private:																		//data member
	int a[3][3];																//2D array

public:
	Matrix();																	//default constructor
	Matrix(int a[3][3]);														//parameterized constructor
	void input();
	void display();																//member functions
	Matrix operator+(const Matrix& m);
	void operator+=(const Matrix& b);
	bool operator==(const Matrix& c);											//parameter overloading
	Matrix operator*(const Matrix& d);
};

Matrix::Matrix()
{
	a[3][3] = '\0';																//default constructor
}

Matrix::Matrix(int a[3][3])
{
	this->a[3][3] = a[3][3];													//parameterized constructor
}

void Matrix::input()
{
	cout << "Enter the entities of 3x3 Matrix " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)												//input of the matrix
		{
			cin >> a[i][j];
		}
	}
}

void Matrix::display()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";											//displaying the matrix
		}

		cout << endl;
	}
}

Matrix Matrix::operator+(const Matrix& m)
{
	Matrix result;

	result.a[0][0] = this->a[0][0] + m.a[0][0];
	result.a[0][1] = this->a[0][1] + m.a[0][1];
	result.a[0][2] = this->a[0][2] + m.a[0][2];


	result.a[1][0] = this->a[1][0] + m.a[1][0];
	result.a[1][1] = this->a[1][1] + m.a[1][1];											//overloading (+) operator
	result.a[1][2] = this->a[1][2] + m.a[1][2];


	result.a[2][0] = this->a[2][0] + m.a[2][0];
	result.a[2][1] = this->a[2][1] + m.a[2][1];
	result.a[2][2] = this->a[2][2] + m.a[2][2];

	return result;
}

void Matrix::operator+=(const Matrix& b)
{
	this->a[0][0] = this->a[0][0] += b.a[0][0];
	this->a[0][1] = this->a[0][1] += b.a[0][1];
	this->a[0][2] = this->a[0][2] += b.a[0][2];


	this->a[1][0] = this->a[1][0] += b.a[1][0];
	this->a[1][1] = this->a[1][1] += b.a[1][1];												//overloading (+=) operator
	this->a[1][2] = this->a[1][2] += b.a[1][2];


	this->a[2][0] = this->a[2][0] += b.a[2][0];
	this->a[2][1] = this->a[2][1] += b.a[2][1];
	this->a[2][2] = this->a[2][2] += b.a[2][2];
}

bool Matrix::operator==(const Matrix& c)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; i < 3; j++)
		{
			if (this->a[i][j] == c.a[i][j])
			{
				cout << "Matrices are equal " << endl;
				return true;
			}

			else																		//overloading (==) operator
			{
				cout << "Matrices are not equal " << endl;
				return false;
			}
		}
	}

	return true;
}

Matrix Matrix::operator*(const Matrix& d)
{
	Matrix result;

	result.a[0][0] = this->a[0][0] * d.a[0][0];
	result.a[0][1] = this->a[0][1] * d.a[0][1];
	result.a[0][2] = this->a[0][2] * d.a[0][2];


	result.a[1][0] = this->a[1][0] * d.a[1][0];
	result.a[1][1] = this->a[1][1] * d.a[1][1];												//overloading (*) operator
	result.a[1][2] = this->a[1][2] * d.a[1][2];


	result.a[2][0] = this->a[2][0] * d.a[2][0];
	result.a[2][1] = this->a[2][1] * d.a[2][1];
	result.a[2][2] = this->a[2][2] * d.a[2][2];

	return result;
}

int main()
{
	cout << "---------------------------------------------Task 9---------------------------------------" << endl;
	cout << endl;

	Matrix m1;
	Matrix m2;
	Matrix m3;
	Matrix m4;

	m1.input();
	m2.input();
	cout << endl;

	cout << "------------------------Using (+) operator------------------------"<<endl;
	m3 = m1 + m2;
	m3.display();
	cout << endl;

	cout << "------------------------Using (*) operator------------------------" << endl;
	m4 = m1 * m2;
	m4.display();
	cout << endl;

	cout << "------------------------Using (==) operator------------------------" << endl;
	m1 == m2;
	cout << endl;

	cout << "------------------------Using (+=) operator------------------------" << endl;
	m1 += m2;
	m1.display();
}
