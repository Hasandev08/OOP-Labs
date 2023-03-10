#include<iostream>
#include<iomanip>
using namespace std;

int order(int arr[], int arraysize)
{
	int temp;
	int *a=&temp;
	
	for(int i=0; i<arraysize; i++)
	{
		for(int j=i+1; j<arraysize; j++)
		{
			if(arr[i]>arr[j])
			{
				*a=arr[i];
				arr[i]=arr[j];
				arr[j]=*a;
			}
		}
		
		cout<<*a<<setw(5);
	}
	
	return *a;
}

int main()
{
	int size=10;
	int *p=&size;
	int arr[*p];
	int *arrptr=arr;
	
	for(int i=0; i<*p; i++)
	{
		cout<<"Enter Number "<<endl;
		cin>>arr[i];
	}
	
	order(arrptr,*p);
	
	return 0;
}
