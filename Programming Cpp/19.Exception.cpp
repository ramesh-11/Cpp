#include<iostream>
using namespace std;
double DIV_OPR(int x,int y)
{
	if(y==0)
		throw "Exception : Division by Zero";
//	else if(y==1)
//		throw 1;
//	else if(y==2)
//		throw 1.5;
	else
		return x/(y*1.0);
}
int main()
{
	int a=10;
	int b=0;
	double z;
	try
	{
		z = DIV_OPR(a,b);
		cout<<"Value : "<<z;
	}
	catch(const char *str)
	{
		cout<<str;
	}
//	catch(int p)
//	{
//		cout<<"Is one";
//	}
//	catch(double q)
//	{
//		cout<<"Is 1.5";
//	}
	return 0;
}
