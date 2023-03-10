#include<iostream>
using namespace std;

class Date																			//class Date
{
public:
	int day;
	int month;																		//member functions
	int year;
};

class Student																		//class Student
{
	//Access Specifiers
protected:
	string name;
	string roll_num;																//data members
	int semester;
	Date d;

public:																				//member functionc
	Student()
	{
		name = '\0';
		roll_num = '\0';
		semester = '\0';															//default constructor
		d.day = '\0';
		d.month = '\0';
		d.year = '\0';
	}

	Student(string name, string rollNum, int semester, Date d)
	{
		this->name = name;
		this->roll_num = rollNum;
		this->semester = semester;													//parameterized constructor
		d.day = 0;
		d.month = 0;
		d.year = 0;
	}

	virtual void input()																//virtual input function
	{
		char temp[50] = { '\0' };

		cout << "Enter the name of the student " << endl;
		cin.getline(temp, 50, '\n');
		this->name = temp;

		cout << "Enter the roll number " << endl;
		cin >> roll_num;
		cin.ignore(1, '\n');

		cout << "Enter the semester " << endl;
		cin >> semester;
		cin.ignore(1, '\n');

		cout << "Enter the date in the format dd mm yyyy " << endl;
		cin >> d.day >> d.month >> d.year;
	}

	virtual void display()																//virtual display function
	{
		cout << "Name : " << name << endl;
		cout << "Registration Number : " << roll_num << endl;
		cout << "Semester : " << semester << endl;
		cout << "Date: " << d.day << "/" << d.month << "/" << d.year << endl;
	}

	virtual void CGPA() = 0;														//pure virtual function
};

class UnderGraduate : public Student												//derieved undergraduate class
{
	//Access Specifiers
protected:
	double a[2][8];																	//data members

public:																				//member functions
	UnderGraduate() : Student()
	{
		a[2][8] = '\0';																//default constructor
	}

	UnderGraduate(string name, string rollNum, int semester, double a, Date d) : Student(name, rollNum, semester, d)
	{
		this->a[2][8] = a;															//parameterized constructor
	}

	void input()																	//input function
	{
		Student::input();															//calling base class 

		for (int i = 0; i < semester; i++)
		{
			cout << "Enter the semester GPA " << endl;
			cin >> a[0][i];
			cin.ignore(1, '\n');

			cout << "Enter the credit hours of each semester accordingly " << endl;
			cin >> a[1][i];
			cin.ignore(1, '\n');
		}

		cout << endl;
	}

	void display()																	//display function
	{
		//----------------------------FOR UNDERGRADUATE-------------------------

		Student::display();															//calling base display function

		cout << "GPA : \t\t Credit Hours: " << endl;

		for (int i = 0; i < semester; i++)
		{
			cout << "  " << a[0][i] << "\t\t      " << a[1][i] << endl;;
		}

		cout << endl;
	}

	void CGPA()
	{
		double temp = 0;

		for (int i = 0; i < semester; i++)
		{
			temp += a[0][i];														//calculating CGPA
		}

		temp = temp / semester;

		cout << "CGPA : " << temp << endl;
	}
};

class Graduate : public Student														//derieved class graduate 
{
	//Access Specifiers
protected:
	double a[2][4];
	string specialize;																//data members
	string degree;

public:																				//member functions
	Graduate() : Student()
	{
		this->a[2][4] = '\0';														//default constructor
		this->degree = '\0';
		this->specialize = '\0';
	}

	Graduate(string name, string rollNum, int semester, double a, Date d, string degree, string specialize) : Student(name, rollNum, semester, d)
	{
		this->a[2][4] = a;
		this->degree = degree;														//parameterized constructor
		this->specialize = specialize;
	}

	void input()																	//input function
	{
		Student::input();															//calling base class input function

		for (int i = 0; i < semester; i++)
		{
			cout << "Enter the semester GPA " << endl;
			cin >> a[0][i];
			cin.ignore(1, '\n');

			cout << "Enter the Credit Hours accordingly " << endl;
			cin >> a[1][i];
			cin.ignore(1, '\n');
		}

		cout << "Enter the title of last degree " << endl;
		cin >> degree;

		cout << "Enter the area of specialize " << endl;
		cin >> specialize;

		cout << endl;
	}

	void display()																	//display function
	{
		//----------------------------------FOR GRADUATE----------------------------
		Student::display();															//displaying base class function

		cout << "GPA : \t\t Credit Hours: " << endl;

		for (int i = 0; i < semester; i++)
		{
			cout << "  " << a[0][i] << "\t\t      " << a[1][i] << endl;;
		}

		cout << endl;

		cout << "Degree : " << degree << endl;
		cout << "Area of specialization is : " << specialize << endl;

	}

	void CGPA()
	{
		double temp = 0;

		for (int i = 0; i < semester; i++)
		{
			temp += a[0][i];														//calculating CGPA
		}

		temp = temp / semester;

		cout << "CGPA : " << temp;
	}
};

int main()
{
	//objects

	Student* s1;
	Student* s2;

	UnderGraduate ug;
	Graduate g;

	s1 = &ug;
	s2 = &g;

	//overriding the functions
	cout << "----------------------------------FOR UNDERGRADUATE----------------------------" << endl;
	s1->input();
	s1->display();
	s1->CGPA();


	cout << endl;

	cout << "------------------------------------FOR GRADUATE-------------------------------" << endl;
	s2->input();
	s2->display();
	s2->CGPA();

	return 0;
}