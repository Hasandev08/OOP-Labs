#include<iostream>
using namespace std;

int main()
{
	int n, d;																		//initialization
	int result;

	cout << "Enter the numerator " << endl;
	cin >> n;
																					//taking input
	cout << "Enter the denominator " << endl;
	cin >> d;

	//------------------------------------------try block------------------------------------------
	
	try	
	{
		if (d == 0)
		{
			throw d;																//throwing the denominator															
		}

		result = n / d;
	}
	
	//------------------------------------------catch block-----------------------------------------
	
	catch (int x)
	{
		cout << "Exception : 0 cannot be used in denominator " << endl;				
	}
	
	//----------------------------------------------------------------------------------------------
	
	cout << "The Result is : " << result;											//displaying the actual result

	return 0;
}
