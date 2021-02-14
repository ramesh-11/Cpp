//Call by Address
//Call by Reference
#include<iostream>
using namespace std;
void CallbyAddress(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
void CallbyReference(int &a, int &b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
int main()
{
	int x,y;
	cout<<"Enter value of x,y : ";
	cin>>x;
	cin>>y;
	cout<<"Before Call by Reference x : "<<x<<", y : "<<y;
	CallbyReference(x,y);
	cout<<endl<<"After Call by Reference x : "<<x<<", y : "<<y;
	return 0;
}
