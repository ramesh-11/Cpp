#include<iostream>
using namespace std;
class Rectangle
{
	int height;
	int width;
	public:
		Rectangle();		
		void Input(int=1,int=1);
		void Output();
		void Area();
		~Rectangle();
};
Rectangle::Rectangle()
{
	cout<<endl<<"Constructor Calls..";
}
void Rectangle::Input(int a,int b)
{
	this->height = a;
	this->width = b;
}
void Rectangle::Output()
{
	cout<<endl<<"Height : "<<this->height<<" , Width : "<<this->width;
}
void Rectangle::Area()
{
	cout<<endl<<"Area : "<<this->height*this->width;
}
Rectangle::~Rectangle()
{
	cout<<endl<<"Destructor Call..";
}
int main()
{
	Rectangle r;
	int a,b;
	cout<<endl<<"Enter height , width : ";
	cin>>a>>b;
	r.Input(a,b);
	r.Output();
	r.Area();
	return 0;
}
