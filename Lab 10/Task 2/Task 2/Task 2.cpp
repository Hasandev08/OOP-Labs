#include<iostream>
using namespace std;

template<typename T>

class A
{
private:
	T sum;
	T diff;
	T product;
	T div;

public:
	T Sum(T x, T y)
	{
		sum = x + y;
		return sum;
	}

	T Diff(T x, T y)
	{
		diff = x - y;
		return diff;
	}

	T Product(T x, T y)
	{
		product = x * y;
		return product;
	}

	T Division(T x, T y)
	{
		div = x / y;
		return div;
	}
};

int main()
{
	A<double> obj1;

	cout << "The Sum is : " << obj1.Sum(5, 6) << endl;
	cout << "The Difference is : " << obj1.Diff(6, 5) << endl;
	cout << "The Product is : " << obj1.Product(4, 5) << endl;
	cout << "The Division is : " << obj1.Division(10, 5);

	return 0;
}