#include<iostream>
using namespace std;
class Array
{
	protected:
		int size;
		int *data;
		Array(int);
		~Array();
};
Array :: Array(int v)
{
	cout<<endl<<"Array Constructor Call..";
	this->size=v;
	this->data=new int [this->size];
	for(int i=0;i<this->size;i++)
		this->data[i] = 0;
}
Array::~Array()
{
	cout<<endl<<"Array Destructor Call..";
}
class Stack: public Array
{
	int sp;
	public:
		Stack(int);
		int Push(int);
		int Pop(int &);
		~Stack();
};
Stack::Stack(int v):Array(v)
{
	sp=-1;
	cout<<endl<<"Stack Constructor Call..";
}
int Stack::Push(int v)
{
	if(sp==this->size-1)
		return 1;
	
	this->data[++sp]=v;
	return 0;
}
int Stack::Pop(int &v)
{
	if(sp==-1)
		return 1;
	v=this->data[sp--];
	return 0;
}
Stack::~Stack()
{
	cout<<endl<<"Stack Destructor Call..";
}
int main()
{
	Stack s(2);
	int x,v;
	x=s.Push(20);
	if(x==1)
		cout<<endl<<"stack overflow ";
	else
		cout<<endl<<"success";
	x=s.Push(13);
	if(x==1)
		cout<<endl<<"stack overflow ";
	else
		cout<<endl<<"success";
	x=s.Pop(v);
	if(x==1)
		cout<<endl<<"stack empty";
	else
		cout<<endl<<"poped value:"<<v;
	x=s.Pop(v);
	if(x==1)
		cout<<endl<<"stack empty";
	else
		cout<<endl<<"poped value:"<<v;
	return 0;
}

