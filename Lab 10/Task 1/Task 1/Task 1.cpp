#include<iostream>
using namespace std;

template<typename T>
T large(T x, T y)
{
	if (x > y)
		return x;

	else
		return y;
}

int main()
{
	cout << "The larger number is : " << large<double>(5, 6) << endl;

	return 0;
}