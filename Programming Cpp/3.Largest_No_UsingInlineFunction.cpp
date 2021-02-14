#include<iostream>
using namespace std;
inline int Largest(int a,int b,int c)
{
	return a>b?(a>c?a:c):(b>c?b:c);
}
int main()
{
	int a,b,c;
	cout<<"Enter a , b , c : ";
	cin>>a>>b>>c;
	int d = Largest(a,b,c);
	cout<<"Largest value : "<<d;
	return 0;
}
