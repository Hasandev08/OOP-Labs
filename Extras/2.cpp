#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	char name[]="Mujab";
	int Age = 18;
	float gpa = 3.5;
	
	char store[60] = {'\0'};
	
	sprintf(store,"Name: %s , Age: %d , GPA: %f\0" , name,Age,gpa);
	
	cout << store;

	return 0;
}
