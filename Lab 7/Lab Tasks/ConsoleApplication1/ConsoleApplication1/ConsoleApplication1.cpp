#include <iostream>
using namespace std;

//Question#1
class Players
{
public:
	int no_of_players;
	int get_player();
	Players(const int& x) :no_of_players(x) 
	{
	}
};
int Players::get_player()
{
	return no_of_players;
}

class Team
{
private:
	const Players& Obj_Players;
	int a;

public:

	Team(const  Players&);
	int getNoPlayers();
};

Team::Team(const Players& x) :Obj_Players{ x }
{
}

int Team::getNoPlayers()
{
	return Obj_Players.no_of_players;
}

int main()
{
	Players y(11);
	cout << "Accessing through the class of Players obj Before teams class : " << y.get_player() << endl;

	Team b(y);

	cout << "Accessing through Players class obj : " << b.getNoPlayers() << endl;
	cout << "Accessing through class of Players obj After teams class  : " << y.get_player() << endl;

	return 0;
}

//Question#2
class Battery
{
private:
	int mobile_Battery;

public:
	Battery(int mobile_Battery)
	{
		this->mobile_Battery = mobile_Battery;
	}
	void PrintResult()
	{
		cout << "The Power Battery is : " << mobile_Battery;
	}

};

class IMEI
{
public:
	long int IMEI_No;
	void setIMEINo(long int);
	long long int getIMEINo();
};

void IMEI::setIMEINo(long int imei)
{
	IMEI_No = imei;
}

long long int IMEI::getIMEINo()
{
	return IMEI_No;
}

class SmartPhone
{
private:
	string mobile;

public:

	Battery* b;
	IMEI  imei;

	SmartPhone(Battery* b)
	{
		this->b = b;
	}

	SmartPhone();
	void set_phone_name(string);
	string get_phone_name();
	void print();

	~SmartPhone();
};

SmartPhone::SmartPhone()
{
	cout << "Smart Phone Created" << endl;
}

void SmartPhone::set_phone_name(string name)
{
	this->mobile = name;
}

string SmartPhone::get_phone_name()
{
	return mobile;
}
SmartPhone::~SmartPhone()
{
	cout << "Destroying Phone";
}

int main()
{
	SmartPhone* obj1;
	Battery b(3500);
	obj1 = new SmartPhone(&b);
	SmartPhone s;
	IMEI i;

	cout << "Battery Before Aggregation"<<endl;
	b.PrintResult();

	s.set_phone_name("Samsung");
	i.setIMEINo(8756323311291);

	cout << "Phone name : " << s.get_phone_name()<<endl;
	cout << "IMEI Number of Phone : " << i.getIMEINo()<<endl;
	cout << "Battery After Aggregation"<<endl;
	b.PrintResult();

	return 0;
}

//Question#3
class Chapters
{
private:
	int totalChapter;
public:

	void set_Ch(int);
	int get_Ch();
};
void Chapters::set_Ch(int x)
{
	this->totalChapter = x;
}

int Chapters::get_Ch()
{
	return totalChapter;
}

class Book
{
public:
	Chapters Chap;
	string BookName;


	void setBookname(string);
	string getName();
	void print();
};

void Book::setBookname(string name)
{
	BookName = name;
}
string Book::getName()
{
	return BookName;
}

void Book::print()
{
	cout << "The Name of book is : " << BookName;
	cout << "\nTotal Chapters are  : " << Chap.get_Ch();
}

int main()
{
	Book y;

	string n = "Programming Fundamentals";
	int chap = 18;

	y.setBookname(n);
	y.Chap.set_Ch(17);

	y.print();


	return 0;
}