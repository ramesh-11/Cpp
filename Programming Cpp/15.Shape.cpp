#include<iostream>
using namespace std;
class SHAPE
{
	public:
		double a,b;
		SHAPE(double,double);
		virtual void Display_Area()=0;
		~SHAPE();	
};
SHAPE::SHAPE(double x,double y)
{
	cout<<endl<<"Shape Constructor Call..";
	a = x;
	b = y;
}
SHAPE::~SHAPE()
{
	cout<<endl<<"Shape Destructor Call..";
}
class TRIANGLE:public SHAPE
{
	public:
		TRIANGLE(double=1,double=1);
		void Display_Area();
		~TRIANGLE();
};
TRIANGLE::TRIANGLE(double x,double y):SHAPE(x,y)
{
	cout<<endl<<"Triangle Constructor Call..";
}
void TRIANGLE::Display_Area()
{
	cout<<endl<<"Area of Triangle : "<<(a*b)/2;
}
TRIANGLE::~TRIANGLE()
{
	cout<<endl<<"Triangle Destructor Call..";
}
class RECTANGLE:public SHAPE
{
	public:
		RECTANGLE(double=1,double=1);
		void Display_Area();
		~RECTANGLE();
};
RECTANGLE::RECTANGLE(double x,double y):SHAPE(x,y)
{
	cout<<endl<<"Rectangle Constructor Call..";
}
void RECTANGLE::Display_Area()
{
	cout<<endl<<"Area of Rectangle : "<<(a*b);
}
RECTANGLE::~RECTANGLE()
{
	cout<<endl<<"Rectangle Destructor Call..";
}
int main()
{
	SHAPE *obs;
	obs = new TRIANGLE(6,10);
	obs->Display_Area();
	delete obs;
	obs = new RECTANGLE(5,6);
	obs->Display_Area();
	delete obs;
	return 0;
}
