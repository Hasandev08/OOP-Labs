#include<iostream>
using namespace std;

int main()
{
	int n, d;
	int result;

	cout << "Enter the numerator " << endl;
	cin >> n;

	cout << "Enter the denominator " << endl;
	cin >> d;

	try
	{
		if (d == 0)
		{
			throw d;
		}

		result = n / d;
	}

	catch (int x)
	{
		cout << "Exception : 0 cannot be used in denominator " << endl;
	}

	cout << "The Result is : " << result;

	return 0;
}