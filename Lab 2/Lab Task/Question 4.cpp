#include<iostream>
using namespace std;

int sum(int sum=0, int n=0)
{
	int *p=&sum;
	*p=*p+n;
	cout<<*p;
	
	return sum;
}

int diff(int diff=0, int n=0)
{
	int *p=&diff;
	*p=*p-n;
	cout<<*p;
	
	return diff;
}

int pro(int pro=1, int n=1)
{
	int *p=&pro;
	*p=*p*n;
	cout<<*p;
	
	return pro;
}

int div(int div=1, int n=1)
{
	int *p=&div;
	*p=*p/n;
	cout<<*p;
	
	return div;
}

int mod(int mod=1, int n=1)
{
	int *p=&mod;
	*p=*p%n;
	cout<<*p;
	
	return mod;
}

int main()
{
	double a,b;
	char op;
	
	double *p=&a;
	double *q=&b;
	
	cout<<"Enter the two numbers "<<endl;
	cin>>*p>>*q;
	
	cout<<"1. Add"<<endl;
	cout<<"2. Subtract"<<endl;
	cout<<"3. Multiply"<<endl;
	cout<<"4. Divide"<<endl;
	cout<<"5. Modulus"<<endl;
	
	cout<<"Enter option"<<endl;
	cin>>op;
	
	switch(op)
	{
		case '1':
		sum(*p,*q);
		break;
		
		case '2':
		diff(*p,*q);
		break;
		
		case '3':
		pro(*p,*q);
		break;
		
		case '4':
		div(*p,*q);
		break;
		
		case'5':
		mod(*p,*q);
		break;	
	}
	
	return 0;
		
}
