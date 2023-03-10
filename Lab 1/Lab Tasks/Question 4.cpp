#include<iostream>
#include<iomanip>
using namespace std;

void sort(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		int min=i;
		
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			
			min=j;
			
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

int main()
{
	int arr[8];
	
	cout<<"Enter the elements of array "<<endl;
	
	for(int i=0; i<8; i++)
	{
		cin>>arr[i];
	}
	
	int *p=arr;
	
	cout<<"Before Sorting "<<endl;
	for(int i=0; i<8;i++)
	{
		cout<<*p++<<setw(5);
	}
	
	cout<<endl;
	
	sort(arr,8);
	p=arr;
	
	cout<<"After Sorting "<<endl;
	for(int i=0; i<8; i++)
	{
		cout<<*p++<<setw(5);
	}

	return 0;
	
}
