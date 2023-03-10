#include<iostream>
using namespace std;

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

	string n = "Object Orientated Programming";
	int chap = 18;

	y.setBookname(n);
	y.Chap.set_Ch(22);

	y.print();


	return 0;
}
