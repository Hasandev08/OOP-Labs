#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
string getgrade() // a function that returns string same as getgrade in Course class bcz we need to print grade along with course name and etc
{
	return "A+";
}
string toString()
{
	char temp[200]={'\0'}; // Assuming that string will be of maximum 200 Characters
	
	string CourseName = "Objected Oriented Programming";
	string CourseCode = "OOP101";
	int CreditHours = 3;
	int marks = 100;
	
	char Course_Code[10] = {'\0'};
	char Course_Name[35] = {'\0'};
	
	for(int i = 0 ; CourseName[i] != '\0';i++) //transfer of string to char because sprintf only accepts Char array Argument
	{
		Course_Name[i] = CourseName[i];
	}
	
	for(int i = 0 ; CourseCode[i] != '\0';i++) //transfer of string to char because sprintf only accepts Char array Argument
	{
		Course_Code[i] = CourseCode[i];
	}
	
	char grade[3] = {'\0'}; //Maximum size would be 2 or 3 characters of grade
	string gr = getgrade(); // grade also needs to be char array
	
	for(int i = 0 ; gr[i] != '\0';i++) //transfer of string to char because sprintf only accepts Char array Argument
	{
		grade[i] = gr[i];
	}
	
	
	sprintf(temp,"%s\t%s\t%d\t%d\t%s",Course_Code,Course_Name,CreditHours,marks,grade);
	
	return temp;
}
int main()
{
	cout << toString();
	return 0;
}
