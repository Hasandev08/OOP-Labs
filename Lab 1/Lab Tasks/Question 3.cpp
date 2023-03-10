#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	
	for(int i=0; i<10; i++)
	{
		cin>>arr[i];
	}
	
	int *p=arr;
	
	for(int j=0; j<10; j++)
	{
		cout<<*p;
		*p++;
		cout<<" ";
	}
}
