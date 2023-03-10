#include<iostream>			
#include<cstring>								//Headerfiles
using namespace std;

class student									//Class
{
	//Access specfiers
private:
	string studentName, regNo, CNIC, hobbies;					//data members
	double CGPA;

public:
	student();
	student(string name, string reg_no);
	~student();
	bool name();
	bool roll_num();
	bool cnic();
	bool gpa();
	bool hobby();
	void input();
	void getAge();
	void getStatus();
	void getGender();
	void toString();
	void numberOfWordsInName();									//member functions
	string getname();
	void setname(string Name);
	string get_roll_num();
	void set_roll_num(string Roll_Number);
	string get_cnic();
	void set_cnic(string set_CNIC);
	double get_gpa();
	void set_gpa(double set_CGPA);
	string get_hobby();
	void set_hobby(string set_hobbies);
};

student::student()
{
	studentName = '\0';												//default constructor
	regNo = '\0';
}

student::student(string name, string reg_no)
{
	studentName = name;												//parameterized constructor
	regNo = reg_no;
}

student::~student()
{
	cout << "Destructor is called " << endl;							//destructor
}

//Validity Functions
//Validity for name
bool student::name()
{
	for (int i = 0; studentName[i] != '\0'; i++)
	{
		if ((studentName[i] >= 65 && studentName[i] <= 90) || (studentName[i]) >= 97 && studentName[i] <= 122 || studentName[i] == 32)
			continue;

		else
			return false;
	}

	return true;
}

//Validity for registration number
bool student::roll_num()
{
	bool result = false;

	if (regNo[0] == '2')
	{
		if (regNo[1] == '0')
		{
			if (regNo[2] == '1')
			{
				if (regNo[3] >= 48 && regNo[3] <= 57)
				{
					if (regNo[4] == '-')
					{
						if (regNo[5] >= 'A' && regNo[5] <= 'Z')
						{
							if (regNo[6] >= 'A' && regNo[6] <= 'Z')
							{
								if (regNo[7] == '-')
								{
									if (regNo[8] >= '0' && regNo[8] <= '9')
									{
										if (regNo[9] >= '0' && regNo[9] <= '9')
										{
											if (regNo[10] >= '0' && regNo[10] <= '9')
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

//Validity for CNIC number
bool student::cnic()
{
	if (CNIC.length() > 14)
		return false;

	for (int i = 0; i < 13; i++)
	{

		if (CNIC[i] >= 48 && CNIC[i] <= 57)
			continue;

		else
			return false;
	}

	return true;
}

//Validity for CGPA
bool student::gpa()
{
	if (CGPA >= 0 && CGPA <= 4)
		return true;

	else
		return false;

	return true;
}

//Validity for Hobbies
bool student::hobby()
{
	for (int i = 0; hobbies[i] != '\0'; i++)
	{
		if ((hobbies[i] >= 65 && hobbies[i] <= 90) || (hobbies[i] >= 97 && hobbies[i] <= 122) || hobbies[i] == 44)
			continue;

		else
			return false;
	}

	return true;

}

//Getter and setters
void student::setname(string Name)
{
	studentName = Name;										//setter for name
}

string student::getname()
{
	return studentName;										//getter for name
}

void student::set_roll_num(string Roll_Number)
{
	regNo = Roll_Number;										//setter for registration number
}

string student::get_roll_num()
{
	return regNo;												//getter for registration number
}

void student::set_cnic(string set_CNIC)
{
	CNIC = set_CNIC;										//setter for CNIC number
}

string student::get_cnic()
{
	return CNIC;												//getter for CNIC number
}

void student::set_gpa(double set_CGPA)
{
	CGPA = set_CGPA;										//setter for GPA
}

double student::get_gpa()
{
	return CGPA;											//getter for GPA
}

void student::set_hobby(string set_hobbies)
{
	hobbies = set_hobbies;							//setter for hobbies
}

string student::get_hobby()
{
	return hobbies;											//getter for hobbies
}

//Input for all the attributes
void student::input()
{
	char temp[50] = { '\0' };

	cout << "Enter the name of student " << endl;
	cin.getline(temp, 50, '\n');
	studentName = temp;

	cout << "Enter the registration number " << endl;
	cin >> regNo;

	cout << "Enter the CGPA " << endl;
	cin >> CGPA;

	cout << "Enter CNIC number " << endl;
	cin >> CNIC;

	cout << "Enter the hobbies " << endl;
	cin >> hobbies;

	cin.ignore(1, '\n');
}
//Comments based on GPAs
void student::getStatus()
{
	if (CGPA < 2)
		cout << "Suspended " << endl;

	if (CGPA > 2 && CGPA < 2.5)
		cout << "Below Average " << endl;

	if (CGPA > 2.5 && CGPA < 3.3)
		cout << "Average " << endl;

	if (CGPA > 3.3 && CGPA < 3.5)
		cout << "Below good " << endl;

	if (CGPA > 3.5)
		cout << "Excellent " << endl;
}

//Total number of words in a name
void student::numberOfWordsInName()
{
	int counter = 0;

	for (int i = 0; studentName[i] != '\0'; i++)
	{
		if (studentName[i] == ' ')
			counter++;
	}

	cout << "(Contain " << counter + 1 << " words )";
}

//Gender through CNIC
void student::getGender()
{
	for (int i = 0; i < 13; i++)
	{
		if (CNIC[12] == '1' || CNIC[12] == '3' || CNIC[12] == '5' || CNIC[12] == '7' || CNIC[12] == '9')
		{
			cout << "Gender is Male " << endl;
			break;
		}

		else
		{
			cout << "Gender is Female " << endl;
			break;
		}
	}
}

//Printing details on console
void student::toString()
{
	if (name() == true)
	{
		cout << "The name of student is " << studentName;
		numberOfWordsInName();
		cout << endl;
	}

	else
		cout << "The name is not correct " << endl;

	if (roll_num() == true)
		cout << "The registration number is " << regNo << endl;

	else
		cout << "The registration number is incorrect " << endl;

	if (gpa() == true)
	{
		cout << "The CGPA is " << CGPA << " ";
		getStatus();

	}

	else
		cout << "The CGPA is incorrect " << endl;

	if (cnic() == true)
	{
		cout << "The CNIC number is " << CNIC << endl;
		getGender();
	}

	else
		cout << "The CNIC number is incorrect " << endl;

	if (hobby() == true)
		cout << "Hobbies are " << hobbies << endl;

	else
		cout << "The hobbies are incorrect " << endl;
}

//class for date
class date
{
	//Access specifiers
private:
	int month;
	int day;															//data members
	int year;

public:
	void setDate(int m, int d, int y);
	bool validDate();
	void printDate();
	bool leapYear(int y);												//member functions
	date(int m = 1, int d = 1, int y = 1990);
	void age(int d1, int m1, int y1, int d2, int m2, int y2);
	~date();
};

date::date(int m, int d, int y)												//constructor
{
	month = m;
	day = d;
	year = y;
}

date::~date()																//destructor
{
	cout << "Destructor is called " << endl;
}

//validity function for date
bool date::validDate()
{
	if (month >= 1 && month <= 12)
		return true;
	if (day >= 1 && day <= 31)
		return true;
	if ((day == 31) && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
		return false;
	if ((day == 30) && (month == 2))
		return false;
	if ((month == 2) && (day == 29) && (year % 4 == 0))
		return true;
}

//setter for date
void date::setDate(int m, int d, int y)
{

	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;

	if (d >= 1 && d <= 31)
		day = d;
	else
		day = 1;

	if (y >= 1990 && y <= 2005)
		year = y;
	else
		year = 1990;

}

//condition for leap year
bool date::leapYear(int y)
{
	bool leapYear = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);

	if (leapYear)
		return true;
	else
		return false;
}

//printing date on console
void date::printDate()
{
	cout << "Date of Birth is ";
	if (month <= 1)
		cout << "January " << day << ", " << year;
	else if (month <= 2)
		cout << "February " << day << ", " << year;
	else if (month == 3)
		cout << "March " << day << ", " << year;
	else if (month == 4)
		cout << "April " << day << ", " << year;
	else if (month == 5)
		cout << "May " << day << ", " << year;
	else if (month == 6)
		cout << "June " << day << ", " << year;
	else if (month == 7)
		cout << "July " << day << ", " << year;
	else if (month == 8)
		cout << "August " << day << ", " << year;
	else if (month == 9)
		cout << "September " << day << ", " << year;
	else if (month == 10)
		cout << "October " << day << ", " << year;
	else if (month == 11)
		cout << "November " << day << ", " << year;
	else
		cout << "December " << day << ", " << year;
}

//condition to find age
void date::age(int d1, int m1, int y1, int d2, int m2, int y2)
{
	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	year = y1 - y2;
	if (m1 < m2)
	{
		year--;
		month = 12 - (m2 - m1);
	}

	else
	{
		month = m1 - m2;
	}

	if (d1 < d2)
	{
		month--;
		day = md[m1 - 1] - (d2 - d1);
	}

	else
	{
		day = d1 - d2;
	}

	cout << "(" << year << " years " << month << " months " << "and " << day << " day(s))";
}

//main function
int main()
{
	student s1, s2("Hasan Ahmed", "2019-CS-145");				//objects for students
	date calendar;												//object for date

	string hobbies, CNIC;
	double CGPA;
	int m1, d1, y1, m2, d2, y2;
	char c1, c2;

	s1.input();

	cout << "Enter the date of birth in the format mm-dd-yyyy " << endl;
	cin >> m1 >> c1 >> d1 >> c2 >> y1;

	s1.toString();

	cout << endl;

	if (c1 == '-' && c2 == '-')
	{
		cout << "Enter the present date in the format mm-dd-yyyy " << endl;
		cin >> m2 >> c1 >> d2 >> c2 >> y2;
		cout << endl;
		if (c1 == '-' && c2 == '-')
		{
			calendar.setDate(m1, d1, y1);
			calendar.leapYear(y1);
			calendar.validDate();
			calendar.printDate();
			calendar.age(d1, m1, y1, d2, m2, y2);
		}
		else
		{
			cout << "Not Valid" << endl;
		}

	}
	else
	{
		cout << "Not Valid" << endl;
	}

	cout << "\n\nEnter the CGPA " << endl;
	cin >> CGPA;
	s2.set_gpa(CGPA);

	cout << "Enter the CNIC number " << endl;
	cin >> CNIC;
	s2.set_cnic(CNIC);

	cout << "Enter the hobbies " << endl;
	cin >> hobbies;
	s2.set_hobby(hobbies);



	cout << "Enter the date of birth in the format mm-dd-yyyy " << endl;
	cin >> m1 >> c1 >> d1 >> c2 >> y1;

	if (c1 == '-' && c2 == '-')
	{
		cout << "Enter the present date in the format mm-dd-yyyy " << endl;
		cin >> m2 >> c1 >> d2 >> c2 >> y2;
		cout << endl;

		if (c1 == '-' && c2 == '-')
		{
			calendar.setDate(m1, d1, y1);
			calendar.leapYear(y1);
			calendar.validDate();
			calendar.printDate();
			calendar.age(d1, m1, y1, d2, m2, y2);
		}
		else
		{
			cout << "Not VAlid Format" << endl;
		}

	}
	else
	{
		cout << "Not VAlid Format" << endl;
	}


	s2.toString();

	return 0;
}