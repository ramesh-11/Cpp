#include<iostream>
using namespace std;
class COMPLEX
{
	int rl;
	int im;
	public:
		COMPLEX(int=0,int=0);
		COMPLEX(const COMPLEX &);
		COMPLEX & operator =(const COMPLEX &);
		void ShowNumber();
		~COMPLEX();
};
COMPLEX::COMPLEX(int a,int b)
{
	cout<<endl<<"Constructor Call..";
	this->rl = a;
	this->im = b;
}
COMPLEX::COMPLEX(const COMPLEX &ob)
{
	cout<<endl<<"Copy Constructor Call..";
	this->rl = ob.rl;
	this->im = ob.im;
}
COMPLEX & COMPLEX::operator =(const COMPLEX &ob)
{
	cout<<endl<<"operator= Call..";
	this->rl = ob.rl;
	this->im = ob.im;
	return *this;
}
void COMPLEX::ShowNumber()
{
	cout<<endl<<this->rl<<" + i*("<<this->im<<")";
}
COMPLEX::~COMPLEX()
{
	cout<<endl<<"Destructor Call..";
}
int main()
{
	COMPLEX C1,C2(4),C3(3,2),C4=8;
	COMPLEX C5=C3;//copy constructor
	C1=C2=C4=C5;
	C1.ShowNumber();
	return 0;
}
