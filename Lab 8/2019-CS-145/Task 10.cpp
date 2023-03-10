#include<iostream>
using namespace std;

class Time
{
	//Access Specifiers
private:
	int hours;
	int minutes;															//data members
	int seconds;

public:
	Time();															
	Time(int hrs, int mins, int sec);
	void showTime();
	Time operator+(Time& a);
	void operator++(int seconds);
	void operator++();														//member functions
	void operator--(int seconds);
	void operator--();
};

Time::Time()
{
	hours = '\0';
	minutes = '\0';															//default constructor
	seconds = '\0';
}

Time::Time(int hrs, int mins, int sec)
{
	this->hours = hrs;
	this->minutes = mins;													//parameterized constructor
	this->seconds = sec;
}

void Time::showTime()
{
	cout << hours << ":" << minutes << ":" << seconds << endl;				//format for displaying time
}

Time Time::operator+(Time& a)
{
	Time t;

	t.hours = hours + a.hours;
	t.minutes = minutes + a.minutes;
	t.seconds = seconds + a.seconds;										//overloading (+) operator

	if (t.seconds >= 59)
	{
		t.seconds -= 60;
		t.minutes += 1;
	}

	if (t.minutes >= 59)
	{
		t.minutes -= 60;
		t.hours += 1;
	}

	if (t.hours >= 11)
	{
		t.hours -= 12;
	}

	return t;
}

void Time::operator++(int seconds)
{
	seconds++;

	if (seconds > 60) 
	{
		seconds = seconds - 60;
		minutes = minutes + 1;													//overloading post increment operator(++)

		if (minutes > 60) 
		{
			minutes = minutes - 60;
			hours = hours + 1;

			if (hours > 12) 
			{
				hours = hours - 12;
			}
		}
	}
}

void Time::operator++()
{
	++seconds;	

	if (seconds > 60) 
	{
		seconds = seconds - 60;
		minutes = minutes + 1;

		if (minutes > 60)
		{
			minutes = minutes - 60;												//overloading pre increment operator(++)
			hours = hours + 1;

			if (hours > 12) 
			{
				hours = hours - 12;
			}
		}
	}
}

void Time::operator--(int seconds)
{
	seconds--;

	if (seconds <= 0)
	{
		seconds = seconds + 60;
		minutes = minutes - 1;

		if (minutes <= 0)
		{
			minutes = minutes + 60;
			hours = hours - 1;

			if (hours < 11)													//overloading post decrement operator(--)
			{
				hours = hours + 12;
			}
		}
	}
}


void Time::operator--()
{
	--seconds;

	if (seconds <= 0)
	{
		seconds = seconds + 60;
		minutes = minutes - 1;

		if (minutes <= 0)													//overloading post decrement operator(--)
		{
			minutes = minutes + 60;
			hours = hours - 1;

			if (hours < 11)
			{
				hours = hours + 12;
			}
		}
	}
}

int main()
{
	cout << "------------------------------------------------Task 10-----------------------------------------" << endl;
	cout << endl;

	Time obj1(8,45,23);
	Time obj2(11,12,46);
	Time obj3;

	cout << "The given times are : " << endl;
	obj1.showTime();														//displaying given times
	obj2.showTime();

	cout << endl;

	cout << "After adding the time : " << endl;
	obj3 = obj1 + obj2;														//time after addition
	obj3.showTime();
	cout << endl;

	cout << "Time 1 after post increment is : " << endl;
	obj1++;																	//time after post increment
	obj1.showTime();
	cout << endl;

	cout << "Time 1 after pre increment is : " << endl;
	obj1++;																	//time after pre increment
	obj1.showTime();
	cout << endl;

	cout << "Time 2 after post decrement is :  " << endl;
	obj2--;																	//time after post decrement
	obj2.showTime();
	cout << endl;

	cout << "Time 2 after pre decrement is : " << endl;
	--obj2;																	//time after pre decrement
	obj2.showTime();

	return 0;
}
