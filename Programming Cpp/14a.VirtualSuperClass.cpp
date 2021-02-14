#include<iostream>
using namespace std;
#pragma pack(1)
class A
{
	int a,b,c,d,e,f;	
};
class B:virtual public A
{
	int bx;	
};
class C:virtual public A
{
	int cx;	
};
class D:public B,public C
{
	int dx;
};
int main()
{
	cout<<endl<<"Size of A : "<<sizeof(*(new A));
	cout<<endl<<"Size of B : "<<sizeof(*(new B));
	cout<<endl<<"Size of C : "<<sizeof(*(new C));
	cout<<endl<<"Size of D : "<<sizeof(*(new D));
	return 0;
}
