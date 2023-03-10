#include<iostream>
using namespace std;
int main()
{
	int a=5;
	double b=5.5;
	char c='a';
	
	int *d=&a;
	double *e=&b;
	char *f=&c;
	
	cout<<"Size of integer is "<<sizeof(*d)<<endl;
	cout<<"Size of double is "<<sizeof(*e)<<endl;
	cout<<"Size of char is "<<sizeof(*f);
	
	return 0;
}
