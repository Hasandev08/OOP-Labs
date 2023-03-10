#include<iostream>
using namespace std;

int max(int *ptr, int size)
{
	for(int i=0; i<size; i++)
	{
		if(*ptr<*(ptr+1))
		*ptr=*(ptr+1);
	}
	
	cout<<"Largest Number= "<<*ptr;
	
	return *ptr;
}

int main()
{
	int n;
	int a[n];
	
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	
	cout<<"Enter the elements "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	max(a,n);
	
	return 0;
}
