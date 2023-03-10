#include<iostream>
using namespace std;

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
		cout << "The Power Battery is : " << mobile_Battery<<endl;
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
