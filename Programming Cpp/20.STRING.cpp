#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class STRING
{
	int size;
	char *data;
	public:
		STRING(int=1);
		STRING(const char ch[]);
		STRING(const STRING &);
		STRING & operator=(const STRING &);
		STRING operator()(int,int);
		char & operator[](int);
		friend bool operator==(const STRING &,const STRING &);
		friend STRING operator+(const STRING &,const STRING &);
		friend ostream & operator<<(ostream &,const STRING &);
		//friend istream & operator>>(istream &,STRING &);
		int Length();
		STRING Rev();
		~STRING();
};
STRING ::STRING(int a)
{
	cout<<endl<<"Constructor1 called..";
	this->size=a;
	this->data = new char[this->size];
	this->data[0] = '\0';
}
STRING ::STRING(const char ch[])
{
	cout<<endl<<"Constructor2 called..";
	this->size = strlen(ch);
	int i;
	this->data = new char[this->size];//size+1????
	for(i=0;i<this->size;i++)		
		this->data[i]=ch[i];	
	this->data[i]='\0';
}
STRING::STRING(const STRING &ob)
{
	cout<<endl<<"Copy Constructor Call..";
	this->size = ob.size;
	this->data = new char[this->size];
	int i;
	for(i=0;i<this->size;i++)
		this->data[i] = ob.data[i];
	this->data[i] = '\0';
}
STRING & STRING::operator=(const STRING &ob)
{
	cout<<endl<<"Operator= Overloaded..";
	if(this->data!=NULL)
		delete this->data;
	
	this->size = ob.size;
	this->data = new char[this->size];
	int i;
	for(i=0;i<this->size;i++)
		this->data[i] = ob.data[i];
	this->data[i] = '\0';
	return *this;
}
STRING STRING::operator()(int a,int b)
{
	cout<<endl<<"Operator() Overloaded..";
	STRING temp(b);
	int i;
	for(i=0;i<b;i++)
		temp.data[i] = this->data[a+i];
	temp.data[i] = '\0';
	return temp;
}
char & STRING::operator[](int index)
{
	cout<<endl<<"operator[] overloaded..";
	if(index>=0 && index <this->size)
		return this->data[index];
	else{
		static char dummy;
		cout<<endl<<"Index out of bound.";
		return dummy;
	}
}
bool operator==(const STRING &ob1,const STRING &ob2)
{
	cout<<endl<<"Operator== Overloaded..";
	int i;
	if(ob1.size==ob2.size)
	{
		for(i=0;i<ob1.size;i++)
		if(ob1.data[i]!=ob2.data[i])
			return false;	
	}
	else
		return false;
	return true;
}
STRING operator+(const STRING &ob1,const STRING &ob2)
{
	cout<<endl<<"Operator+ Overloaded..";
	int sz = ob1.size + ob2.size;
	STRING temp(sz);
	int i;
	for(i=0;i<ob1.size;i++)
		temp.data[i] = ob1.data[i];
	for(int j=0;j<ob2.size;j++)
		temp.data[i++] = ob2.data[j];
	temp.data[i] = '\0';
	return temp;
}
ostream & operator<<(ostream &os,const STRING &ob)
{
	cout<<endl<<"Operator<< Overloaded..";
	for(int i=0;i<ob.size;i++)
		os<<ob.data[i];
	return os;
}
//istream & operator>>(istream &is,STRING &ob)
//{
//	cout<<endl<<"Operator>> Overloaded..";
//	int i;
//	for(i=0;i<ob.size;i++)
//		is>>ob.data[i];
//	ob.data[i] = '\0';
//	return is;
//}
int STRING::Length()
{
	int i=0;
	while(this->data[i]!='\0')
	{
		i++;
	}
	return i;
}
STRING STRING::Rev()
{
	STRING temp(this->size);
	int i;
	for(i=0;i<temp.size;i++)
		temp.data[i] = this->data[this->size-i-1];
	temp.data[i] = '\0';
	return temp;
}
STRING ::~ STRING()
{
	cout<<endl<<"Destructor call..";
}
int main()
{
	STRING s1(2),s2(5),s3=3;
	STRING s4 = "GCETTS";
	STRING s5("CSE");
	STRING s6 = s1;
	s3 = s4 + s5;
	STRING s7 = "CSE";
	cout<<s3;
	int l = s3.Length();
	if(s5==s7)
		cout<<endl<<"Equal";
	s2 = s3(1,3);
	cout<<endl<<s2;
	s2 = s2.Rev();
	s2[1] = 'P';
	return 0;
}
