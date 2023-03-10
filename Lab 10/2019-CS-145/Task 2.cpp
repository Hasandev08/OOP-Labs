#include<iostream>
using namespace std;

template<typename T>																//class template

class Calculate																		//class of calculate
{
	//Access Specfiers
private:
	double sum;
	double diff;
	double product;																	//data members
	double div;
	double x1 , x2;

public:																				//member functions
	Calculate(T x, T y)
	{
		this->x1 = x;																//constructor
		this->x2 = y;	
	}
	
	T Sum()
	{
		sum = x1 + x2;																//add function
		return sum;
	}

	T Diff()
	{
		diff = x1 - x2;																//subtract function
		return diff;
	}

	T Product()
	{
		product = x1 * x2;															//multiply function
		return product;
	}

	T Division()
	{
		div = x1 / x2;																//divide function
		return div;
	}
};

int main()
{
	Calculate<double> obj1(20,5);													//object with data type double
	
	//performing all the calculations
	
	cout << "The numbers are 20 and 5" << endl;  
	cout << "The Sum is : " << obj1.Sum() << endl;
	cout << "The Difference is : " << obj1.Diff() << endl;
	cout << "The Product is : " << obj1.Product() << endl;
	cout << "The Division is : " << obj1.Division();

	return 0;
}
