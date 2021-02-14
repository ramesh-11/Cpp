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
		friend COMPLEX operator +(const COMPLEX &, const COMPLEX &);
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
COMPLEX operator +(const COMPLEX &ob1, const COMPLEX &ob2)
{
	cout<<endl<<"operator+ Call..";
	COMPLEX temp;
	temp.rl = ob1.rl + ob2.rl;
	temp.im = ob1.im + ob2.im;
	return temp;
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
	COMPLEX C1(2,3),C2(3,4);
	COMPLEX C5;
	C5 = C1 + C2;
	C5.ShowNumber();
	C5 = C1 + 5;
	C5.ShowNumber();
	C5 = 5 + C2;
	C5.ShowNumber();
	return 0;
}
