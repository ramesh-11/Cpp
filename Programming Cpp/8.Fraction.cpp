#include<iostream>
using namespace std;
class FRACTION
{
	int n;
	int d;
	public:
		FRACTION(int=0,int=1);
		FRACTION(const FRACTION &);
		FRACTION & operator=(const FRACTION &);
		friend int operator==(const FRACTION &,const FRACTION &);
		friend int operator>(const FRACTION &,const FRACTION &);
		//friend int operator<(const FRACTION &,const FRACTION &);
		friend ostream & operator<<(ostream &,const FRACTION &);
		friend istream & operator>>(istream &,FRACTION &);
		FRACTION & operator++();
		FRACTION  operator++(int); //post increment
		~FRACTION();
};
FRACTION::FRACTION(int a,int b)
{
	cout<<endl<<"Constructor Call..";
	this->n=a;
	this->d=b;
}
FRACTION::FRACTION(const FRACTION &ob)
{
	cout<<endl<<"Copy Constructor Call..";
	this->n=ob.n;
	this->d=ob.d;
}
FRACTION & FRACTION ::operator=(const FRACTION &ob)
{
	cout<<endl<<"Operator= Overloading";
	this->n=ob.n;
	this->d=ob.d;
	return *this;
}
int operator ==(const FRACTION &ob1,const FRACTION &ob2)
{
	cout<<endl<<"Operator== Overloading";
	if((ob1.n*ob2.d)==(ob1.d*ob2.n))
		return 1;
	else 
		return 0;	
}
int operator >(const FRACTION &ob,const FRACTION &ob1)
{
	cout<<endl<<"Operator> Overloading";
	if((ob.n*ob1.d)>(ob.d*ob1.n))
		return 1;
	else 
		return 0;	
}
/*int operator <(const FRACTION &ob,const FRACTION &ob1)
{
	cout<<endl<<"Operator< Overloading";
	if((ob.n*ob1.d)<(ob.d*ob1.n))
		return 1;
	else 
		return 0;	
}*/
FRACTION & FRACTION ::operator++(){
	cout<<endl<<"PreIncrement++ Overloading";
	this->n=this->n+this->d;
	return *this;
} 
FRACTION FRACTION :: operator++(int dummy){
	cout<<endl<<"PostIncrement++ Overloading";
	FRACTION tmp=*this;
	this->n=this->n+this->d;
	return tmp;
}
ostream & operator <<(ostream &os,const FRACTION &ob)
{
	os<<endl<<"FRACTION :"<<ob.n<<"/"<<ob.d;
	return os;
}
istream & operator >>(istream &is,FRACTION &ob)
{
	cout<<endl<<"Enter the values:";
	is>>ob.n>>ob.d;
	return is;
}
FRACTION::~FRACTION()
{
	cout<<endl<<"Destructor Call..";	
}
int main()
{
	FRACTION F1(4),F2(4),F3(5,2);
	if(F1==F2)
		cout<<endl<<"A";
	if(F1>F2)
		cout<<endl<<"B";
	else
		cout<<endl<<"C";
	/*if(F1<F2)
		cout<<endl<<"C";*/
	cin>>F1;
	F2 = F1++;
	F3 = ++F1;
	cout<<F3;
	return 0;
}
