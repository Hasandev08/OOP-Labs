#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	
	cout<<"Enter the value of a "<<endl;
	cin>>a;
	
	cout<<"Enter the value of b "<<endl;
	cin>>b;
	
	int *c=&a;
	int *d=&b;
	
	cout<<"Before Swapping "<<endl;
	cout<<*c<<" ";
	cout<<*d<<endl;
	
	cout<<"After Swapping "<<endl;
	temp=*c;
	*c=*d;
	*d=temp;
	
	cout<<*c<<" ";
	cout<<*d;
	
	return 0;
	
}
