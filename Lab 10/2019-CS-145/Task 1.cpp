#include<iostream>
using namespace std;

template<typename T>																//function template

T large(T x, T y)
{
	if (x > y)																		//logic for printing larger number
		return x;

	else
		return y;
}

int main()
{
	double m, n;
	
	cout << "Enter the 1st value " << endl;
	cin >> m;
																					//takiing input of the values
	cout << "Enter the 2nd value " << endl;
	cin >> n;
	
	cout << "The larger number is : " << large<double>(m, n) << endl;				//printing the larger value

	return 0;
}
