#include<iostream>
using namespace std;
class A
{
	public :
		A();
		void show();
		A * operator->();
		~A();
};
A::A()
{
	cout<<endl<<"Constructor Call..";
}
void A::show()
{
	cout<<endl<<"CSE";	
}
A * A::operator->()
{
	cout<<endl<<"operator-> overloaded..";
	return this;
}
A::~A()
{
	cout<<endl<<"Destructor Call..";
}
int main(){
	A obA;
	obA.show();
	obA->show();
	return 0;
}
