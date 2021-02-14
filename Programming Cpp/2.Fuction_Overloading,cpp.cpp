#include<iostream>
#include<cmath>
using namespace std;
int power(int x,int y)
{
	return pow(x,y);
}
double power(int x,double y)
{
	return pow(x,y);
}
int main()
{
	int a,b;
	cout<<"Enter Integer value of a,b: ";	
	cin>>a;	
	cin>>b;
	int pow1=power(a,b);
	cout<<"Power of "<<a<<"^"<<b<<" : "<<pow1;
	double d;
	cout<<endl<<"Enter Double value of d: ";	
	cin>>d;
	double pow2=power(a,d);
	cout<<"Power of "<<a<<"^"<<d<<" : "<<pow2;		
	return 0;
}
