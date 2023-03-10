#include <iostream>
using namespace std;
class Box 
{
    //Access Specifiers
private:
    double length;                                       
    double width;                                                               //data members
    double height;      
public:
    //getter function
    double getVolume() 
    {
        return length * width * height;
    }

    //setter functions
    void setLength(double l)
    {
        this->length = l;
    }

    void setBreadth(double w)                                                     //member functions
    {
        this->width = w;
    }

    void setHeight(double h) 
    {
        this->height = h;
    }

    //Overloading (-) operator
    Box operator-(const Box& a)
    {
        Box box;
        box.length = this->length - a.length;
        box.width = this->width - a.width;
        box.height = this->height - a.height;
        return box;
    }

    //Overloading (*) operator
    Box operator*(const Box& b)
    {
        Box box;
        box.length = this->length * b.length;
        box.width = this->width * b.width;
        box.height = this->height * b.height;
        return box;
    }

    //Overloading (=) operator
    Box operator=(const Box& c)
    {
        Box box;
        box.length = this->length = c.length;
        box.width = this->width = c.width;
        box.height = this->height = c.height;
        return box;
    }
};

int main() 
{
    cout << "--------------------------------------Task 6-----------------------------------" << endl;
    cout << endl;

    Box Box1;                
    Box Box2;                
    Box Box3;                    
    Box Box4;
    Box Box5;
    double volume = 0.0;     

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);                                                   //parameters for 1st object
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);                                                  //parameters for 2nd object
    Box2.setHeight(10.0);
    
	cout<<"The volumes are "<<endl;
	
    //Volume for Box 1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume << endl;                          

    //Volume for Box 2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume << endl;
	cout<<endl;
	
    //Volume for Box 3
    cout<<"Overloading (-) operator "<<endl;
    Box3 = Box1 - Box2;
    volume = Box3.getVolume();
    cout << "Volume of Box3 : " << volume << endl;
	cout<<endl;
	
    //Volume for Box 4
    cout<<"Overloading (*) operator "<<endl;
    Box4 = Box1 * Box2;
    volume = Box4.getVolume();
    cout << "Volume of Box4 : " << volume << endl;
	cout<<endl;
	
    //Volume for Box 5
    cout<<"Overloading (=) operator "<<endl;
    Box5 = Box1;
    volume = Box5.getVolume();
    cout << "Volume of Box5 : " << volume << endl;

    return 0;
}
