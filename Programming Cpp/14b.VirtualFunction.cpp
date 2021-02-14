#include<iostream>
using namespace std;
class A
{
	public:
		void Fun1(){
			cout<<endl<<"A-Fun1";	
		}
		virtual void Fun2(){
			cout<<endl<<"A-Fun2";	
		}
		virtual void Fun3(){
			cout<<endl<<"A-Fun3";	
		}
		virtual void Fun4(){
			cout<<endl<<"A-Fun4";	
		}
};
class B:public A
{
	public:
		void Fun1(){
		cout<<endl<<"B-Fun1";	
	}
	void Fun3(){
		cout<<endl<<"B-Fun3";	
	}
	void Fun4(){
		cout<<endl<<"B-Fun4";	
	}
};
class C:public B
{
	public:
		void Fun4(){
		cout<<endl<<"C-Fun4";	
	}	
};
int main()
{
	cout<<endl<<"A* obA1 = new B";
	A *obA1 = new B;
	obA1->Fun1();
	obA1->Fun2();
	obA1->Fun3();
	obA1->Fun4();
	cout<<endl<<"A* obA2 = new C";
	A *obA2 = new C;
	obA2->Fun1();
	obA2->Fun2();
	obA2->Fun3();
	obA2->Fun4();
	cout<<endl<<"B* obB1 = new C";
	B *obB1 = new C;
	obB1->Fun1();
	obB1->Fun2();
	obB1->Fun3();
	obB1->Fun4();
	cout<<endl<<"B* obB2 = (B*)new A";
	B *obB2 = (B*)new A;
	obB2->Fun1();
	obB2->Fun2();
	obB2->Fun3();
	obB2->Fun4();
	cout<<endl<<"C* obC = (C*)new B";
	C *obC = (C*)new B;
	obC->Fun1();
	obC->Fun2();
	obC->Fun3();
	obC->Fun4();
	return 0;
}
