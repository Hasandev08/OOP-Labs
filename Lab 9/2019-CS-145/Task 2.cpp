#include<iostream>
#include<cstring>
using namespace std;

class Employee																		//parent class
{
	//Access Specifiers
protected:
	char name[25];
	char CNIC[13];																	//data members															
	char salary[10];

public:																				//member functions
	Employee()
	{
		this->name[25] = '\0';														//default constructor
		this->CNIC[13] = '\0';
		this->salary[10] = '\0';
	}

	Employee(char name[], char CNIC[], char salary[])
	{
		strcpy(this->name, name);
		strcpy(this->CNIC, CNIC);													//parameterized constructor
		strcpy(this->salary, salary);
	}

	virtual void input()															//virtual function for input
	{
		cout << "Enter the name " << endl;
		cin.getline(name, 25, '\n');
		cin.ignore(1,'\n');

		cout << "Enter the CNIC number " << endl;
		cin >> CNIC;
		cin.ignore(1,'\n');

		cout << "Enter the salary " << endl;
		cin >> salary;
		cin.ignore(1,'\n');
	}

	virtual void setValue(char iname[], char iCNIC[], char isalary[])				//virtual function for setting the values
	{
		strcpy(this->name, iname);
		strcpy(this->CNIC, iCNIC);
		strcpy(this->salary, isalary);
	}

	virtual void display()															//virtual function for displaying the values
	{
		cout << "Name : " << name << endl;
		cout << "CNIC : " << CNIC << endl;
		cout << "Salary : " << salary << endl;
	}
};

class Manager : public Employee														//derived class for class Employee
{
public:																				//member function
	char noOfSub[2];

	Manager() 
	{
		this->noOfSub[2] = '\0';													//default constructor
	}

	Manager(char noOfSub[])
	{
		strcpy(this->noOfSub, noOfSub);												//parameterized constructor
	}
	
	void input()
	{
		Employee::input();
		
		cout << "Enter the number of suboordinates " << endl;						//input function
		cin >> noOfSub;
		cin.ignore(1,'\n');
	}

	void setValue(char inoOfSub[])
	{
		strcpy(this->noOfSub, inoOfSub);											//function for setting values
	}

	void display()
	{
		Employee::display();
		cout << "Number of Suboordinates : " << noOfSub << endl;					//function for displaying the values
	}
};

class Scientist : public Employee													//derieved class of class Employee
{
public:
	char noOfPubs[2];																//member functions

	Scientist() : Employee()
	{
		this->noOfPubs[2] = '\0';													//default constructor
	}

	Scientist(char noOfPubs[]) 
	{
		strcpy(this->noOfPubs, noOfPubs);											//parameterized constructor
	}

	void input()
	{
		cout << "Enter the number of publications " << endl;						//input function
		cin >> noOfPubs;
		cin.ignore(1,'\n');
	}

	void setValue(char iname[], char iCNIC[], char isalary[], char inoOfPubs[])
	{
		strcpy(this->noOfPubs, inoOfPubs);											//setter function
	}

	void display()																	//function for displaying
	{														
		cout << "Number of Publications : " << noOfPubs << endl;
	}
};

class Laborer : public Employee														//derieved class for class Employee
{

};

class Foreman : public Laborer														//derieved class for class Laborer
{
public:																				//data members
	char percentage[3];

	Foreman()
	{
		this->percentage[3] = '\0';													//default constructor
	}

	Foreman(char percentage[])
	{
		strcpy(this->percentage, percentage);										//parameterized constructor
	}

	void input()
	{	
		Laborer::input();
		cout << "Enter the percentage quota " << endl;								//input function
		cin >> percentage;
		cin.ignore(1,'\n');
	}

	void setValue(char iname[], char iCNIC[], char isalary[], char ipercentage[])
	{
		strcpy(this->percentage, ipercentage);										//setter function
	}
	
	void display()
	{
		Laborer::display();
		cout << "Percentage Quota : " << percentage << "%" << endl;					//display function
	}
};

int main()
{
	//creating objects
	
	Employee* e1;
	Employee* e2;
	Manager m1;
	Scientist s1;
	Laborer *l1;
	Foreman f1;

	e1 = &m1;
	e2 = &s1;																		//objects pointing towards others addresses
	l1 = &f1;
	
	e1->input();
	e2->input();																	//calling the input functions
	l1->input();
	
	cout<<endl;
	
	e1->display();
	
	e2->display();																	//calling the display function
	cout << endl;
	
	l1->display();
	cout << endl;
	
	return 0;
}
