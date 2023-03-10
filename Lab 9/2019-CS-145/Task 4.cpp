#include<iostream>
using namespace std;

class Shape																	//Abstract Class
{
	//Access Specifiers
protected:
	double length;															//data members
	double width;
	double height;
	
public:
	virtual double getArea() = 0;
	virtual double getVolume() = 0;											//Pure virtual functions
	virtual void display() = 0;
};

class point : Shape															//class point
{
	//Access Specifiers
protected:
	double x;																//data members
	double y;

public:																		//member functions
	point()
	{
		this->x = 0;														//default constructor
		this->y = 0;
	}

	point(double x, double y)
	{
		this->x = x;														//parameterized consrtuctor
		this->y = y;
	}

	double getArea()
	{
		return x * y;														//getter function for area
	}

	double getVolume()
	{
		return x * y * 0;													//getter function for volume
	}

	void input()
	{
		cout << "Enter the points " << endl;
		cin >> x;															//input function
		cin >> y;
	}

	void display()															//display function
	{
		cout << "-----------------------------------POINTS-------------------------------" << endl;
		cout << "The points are : " << x << " and " << y << endl;			
		cout << "The area is : " << getArea() << endl;
		cout << "The volume is : " << getVolume() << endl;
	}
};

class Circle : public point													//class circle
{
	//Access Specifiers
protected:
	double radius;															//data members
	double a;
	double b;
	
public:
	Circle()
	{
		x = '\0';															//default constructor
		y = '\0';
		radius = '\0';
	}

	Circle(double radius, double x, double y)
	{
		this->radius = radius;												//parameterized constructor
		this->x = x;
		this->y = y;
	}

	double getArea()
	{
		a = 3.142 * (radius * radius);										//getter function for area

		return a;
	}

	double getVolume()
	{
		b = 4/3*3.142*(radius*radius*radius);									//getter function for volume

		return b;
	}

	void input()
	{
		cout << "Enter the radius " << endl;
		cin >> radius;														//input function
	}

	void display()															//display function
	{
		cout << "-----------------------------------CIRCLE--------------------------------" << endl;
		cout << "The area of the circle is : " << getArea() << endl;
		cout << "The volume of the circle is : " << getVolume() << endl;
	}
};

class Cylinder :Circle														//class cylinder
{
	//Access Specifiers
protected:
	double height;
	double c;																//data members
	double d;

public:																		//member functions
	Cylinder()
	{
		x = '\0';
		y = '\0';
		radius = '\0';														//default constructor
		height = '\0';
	}

	Cylinder(double x, double y, double radius, double height)
	{
		this->x = x;
		this->y = y;
		this->radius = radius;												//parameterized constructor
		this->height = height;
	}

	double getArea()
	{
		c= 2 * (3.142 * radius * height) + 2 * (3.142 * (radius * radius));	//getter function for area

		return c;
	}

	double getVolume()
	{
		d= 3.142 * height * (radius * radius);								//getter function for volume

		return d;
	}

	void input()
	{
		Circle::input();
		cout << "Enter the height " << endl;								//input function
		cin >> height;
	}

	void display()
	{
		cout << "-----------------------------------CYLINDER-----------------------------" << endl;
		cout << "The AREA is : " << getArea() << endl;
		cout << "The VOLUME is : " << getVolume() << endl;					//display function
	}
};

int main()
{
	//Objects
	
	point p;
	Circle ci;
	Cylinder cy;

	p.input();
	p.getArea();
	p.getVolume();
	p.display();

	cout << endl;

	ci.input();
	ci.getArea();
	ci.getVolume();
	ci.display();

	cout << endl;

	cy.input();
	cy.getArea();
	cy.getVolume();
	cy.display();

	return 0;
}
