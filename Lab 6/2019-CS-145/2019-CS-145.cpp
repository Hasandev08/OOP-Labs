#include<iostream>			
#include<cstring>
#include<iomanip>
using namespace std;

class Person
{
	private:
		string name;
		string address;

	public:
		Person();
		Person(string name, string address);
		string getName();
		void setAddress(string address);
		string getAddress();
		bool validName();
		string toString();
		void personInput();
		void personPrint();
};

Person::Person()
{
	name = '\0';
	address = '\0';
}

Person::Person(string name, string address)
{
	this->name = name;
	this->address = address;
}

bool Person::validName()
{
	for (int i = 0; name[i] != '\0'; i++)
	{
		if ((name[i] >= 65 && name[i] <= 90) || (name[i]) >= 97 && name[i] <= 122 || name[i] == 32)
			continue;

		else
			return false;
	}

	return true;
}

string Person::getName()
{
	return name;
}

void Person::setAddress(string address)
{
	this->address = address;
}

string Person::getAddress()
{
	return address;
}

void Person::personInput()
{
	cout << "Enter the name " << endl;
	cin >> name;

	cout << "Enter the address " << endl;
	cin >> address;
}

void Person::personPrint()
{
	cout << "Name:" << name;
}

class courseResult
{
	private:
		string courseName;
		string courseCode;
		int semester;
		int marks;
		int creditHours;
		double semesterGPA;
		double coursePoints;
		double points;
		double CGPA;

	public:
		courseResult();
		courseResult(string name,string code,int semester,int marks,int creditHours, double points);
		string getGrade();
		string getGradePoints();
		string toString();
		int setSemesters();
		int setSemesterGPA();
		int setCGPA();
		int setTotalCreditHours();
		int setSemesterCreditHours();
		void courseResultInput();
		void print();
};

courseResult::courseResult()
{
	courseName = '\0';
	courseCode = '\0';
	semester = '\0';
	marks = '\0';
	creditHours = '\0';
	coursePoints = '\0';
}

courseResult::courseResult(string name, string code, int semester, int marks, int creditHours, double points)
{
	this->courseName = name;
	this->courseCode = code;
	this->semester = semester;
	this->marks = marks;
	this->creditHours = creditHours;
	this->coursePoints = points;
}

string courseResult::getGrade()
{
	if (marks < 40)
	{
		return "F";
	}

	if (marks >= 40 && marks < 50)
	{
		return "D";
	}

	if (marks >= 50 && marks < 55)
	{
		return "C";
	}

	if (marks >= 55 && marks < 60)
	{
		return "C+";
	}

	if (marks >= 60 && marks < 65)
	{
		return "B-";
	}

	if (marks >= 64 && marks < 70)
	{
		return "B+";
	}

	if (marks >= 70 && marks < 80)
	{
		return "A-";
	}

	if (marks > 80)
	{
		return "A";
	}
}

string courseResult::getGradePoints()
{
	if (marks <= 40)
		coursePoints = 0;

	if (marks > 40 && marks <= 50)
		coursePoints = 1.0;

	if (marks > 50 && marks <= 55)
		coursePoints = 2.3;

	if (marks > 55 && marks <= 60)
		coursePoints = 2.7;

	if (marks > 60 && marks <= 65)
		coursePoints = 3.0;

	if (marks > 64 && marks <= 70)
		coursePoints = 3.3;

	if (marks > 70 && marks <= 80)
		coursePoints = 3.7;

	if (marks > 80)
		coursePoints = 4.0;

	cout<<coursePoints;
}


int courseResult::setSemesters()
{
	return semester;
}

int courseResult::setSemesterGPA()
{
	double sum = 0;
	double total;
	double creditHrs = 0;

	for (int i = 0; i < 40; i++)
	{
		if (semester == 1)
		{
			for (int j = 0; j < 5; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 0; k < 5; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 2)
		{
			for (int j = 5; j < 10; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 5; k < 10; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 3)
		{
			for (int j = 10; j < 15; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 10; k < 15; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 4)
		{
			for (int j = 15; j < 20; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 15; k < 20; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 5)
		{
			for (int j = 20; j < 25; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 20; k < 25; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 6)
		{
			for (int j = 25; j < 30; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 25; k < 30; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 7)
		{
			for (int j = 30; j < 35; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 30; k < 35; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}

		if (semester == 8)
		{
			for (int j = 35; j < 40; j++)
			{
				total = creditHours * coursePoints;
				sum = sum + total;
			}

			for (int k = 35; k < 40; k++)
			{
				creditHrs = creditHrs + creditHours;
			}
		}
	}
	
	return semesterGPA;
}

int courseResult::setCGPA()
{
	double sum=0.0;

	for (int i = 0; i < 8; i++)
	{
		sum = sum + semesterGPA;
	}

	CGPA = sum / semester;

	return CGPA;
}

int courseResult::setTotalCreditHours()
{
	double	totalCreditHours = 0;

	for (int i = 0; i < 40; i++)
	{
		totalCreditHours = totalCreditHours + creditHours;
	}

	return totalCreditHours;
}

int courseResult::setSemesterCreditHours()
{
	double semesterCreditHours = 0;

	for (int i = 0; i < 40; i++)
	{
		if (semester == 1)
		{
			for (int k = 0; k < 5; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 2)
		{
			for (int k = 5; k < 10; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 3)
		{
			for (int k = 10; k < 15; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 4)
		{
			for (int k = 15; k < 20; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 5)
		{
			for (int k = 20; k < 25; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 6)
		{
			for (int k = 25; k < 30; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 7)
		{
			for (int k = 30; k < 35; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}

		if (semester == 8)
		{
			for (int k = 35; k < 40; k++)
			{
				semesterCreditHours = semesterCreditHours + creditHours;
			}
		}
	}

	return semesterCreditHours;
}

void courseResult::courseResultInput()
{
	cout << "Enter the course name " << endl;
	cin >> courseName;

	cout << "Enter the course code " << endl;
	cin >> courseCode;

	cout << "Enter the marks " << endl;
	cin >> marks;

	cout << "Enter the semester " << endl;
	cin >> semester;
}

void courseResult::print()
{
	cout << "ID" << "\t" << "Name" << "\t\t" << "CH" << "\t" << "Marks" << "\t" << "Grade" << endl;
	cout << courseCode << "\t" << courseName << "\t\t" << creditHours << "\t" << marks << "\t"<<getGrade();
}

class Student:public courseResult,public Person
{
	private:
		string registrationNo;
		courseResult courses[40];
		string Degree;

	public:
		Student();
		int getSemesters();
		int getSemesterGPA();
		int getSemesterCreditHours();
		int getTotalCreditHours();
		double getCGPA();
		string getSession();
		string getDiscipline();
		void printGradeBook();
		bool validRegNum();
		void input();
		void toString();
		void studentPrint();
};

Student::Student()
{
	registrationNo = '\0';
	Degree = '\0';
}

int Student::getSemesters()
{
	setSemesters();
}

int Student::getSemesterGPA()
{
	setSemesterGPA();
}

double Student::getCGPA()
{
	setCGPA();
}

int Student::getTotalCreditHours()
{
	setTotalCreditHours();
}

int Student::getSemesterCreditHours()
{
	setSemesterCreditHours();
}

bool Student::validRegNum()
{
	bool result = false;

	if (registrationNo[0] == '2')
	{
		if (registrationNo[1] == '0')
		{
			if (registrationNo[2] == '1')
			{
				if (registrationNo[3] >= 48 && registrationNo[3] <= 57)
				{
					if (registrationNo[4] == '-')
					{
						if (registrationNo[5] >= 'A' && registrationNo[5] <= 'Z')
						{
							if (registrationNo[6] >= 'A' && registrationNo[6] <= 'Z')
							{
								if (registrationNo[7] == '-')
								{
									if (registrationNo[8] >= '0' && registrationNo[8] <= '9')
									{
										if (registrationNo[9] >= '0' && registrationNo[9] <= '9')
										{
											if (registrationNo[10] >= '0' && registrationNo[10] <= '9')
											{
												result = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return result;
}

string Student::getSession()
{
	for (int i = 0; i < 4; i++)
	{
		cout << registrationNo[i];
	}
}

string Student::getDiscipline()
{
	for (int i = 5; i < 7; i++)
	{
		cout << registrationNo[i];
	}
}

void Student::input()
{
	courseResultInput();

	cout << "Enter the registration number " << endl;
	cin >> registrationNo;

	cout << "Enter the degree " << endl;
	cin >> Degree;
}

void Student::studentPrint()
{
	personPrint();
	cout << "\t Degree:" << Degree << endl;
	cout << "Registration Number:" << registrationNo << endl;
	cout << "Session:" << getSession();
}

void Student::printGradeBook()
{
	for (int i = 0; i != '0'; i++)
	{
		print();
	}

	for (int i = 1; i < getSemesters(); i++)
	{
		if (i == 1)
		{
			cout << "Semester 1:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 2)
		{
			cout << "Semester 2:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 3)
		{
			cout << "Semester 3:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 4)
		{
			cout << "Semester 4:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 5)
		{
			cout << "Semester 5:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 6)
		{
			cout << "Semester 6:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 7)
		{
			cout << "Semester 7:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}

		if (i == 8)
		{
			cout << "Semester 8:" << endl;

			for (int j = 0; j != '\0'; j++)
			{
				print();
				cout << "\t\t\t SGPA:" << getSemesterGPA();
			}
		}
	}
}

int main()
{
	Student obj;

	obj.input();
	obj.printGradeBook();
}


