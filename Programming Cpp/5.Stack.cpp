#include<iostream>
using namespace std;
class Stack
{
	int sp;
	int *data;
	int maxSize;
	
	public:
		Stack(int =1);
		int Push(int );
		int Pop(int &);
		~Stack();	
};
Stack::Stack(int size)
{
	cout<<endl<<"Constructor Calls.....!!";
	sp = -1;
	maxSize = size;
	data = new int[maxSize];
	
	for(int i=0;i<maxSize;i++)
		this->data[i] = 0;
}
int Stack::Push(int val)
{
	if(sp == maxSize-1)
		return 1;
	
	this->data[++sp] = val;
	return 0;
}
int Stack::Pop(int &val)
{
	if(sp==-1)
		return 1;
	val = this->data[sp--];
	return 0;
}
Stack::~Stack()
{
	cout<<endl<<"Destructor calls.....!!";
	delete[] data;
}
int main()
{
	int t,x;
	Stack s1(2);
	
	t = s1.Push(15);
	if(t==1)
		cout<<endl<<"Overflow";
	t = s1.Push(35);
	if(t==1)
		cout<<endl<<"Overflow";
	t = s1.Push(215);
	if(t==1)
		cout<<endl<<"Overflow";
		
	t = s1.Pop(x);
	if(t==0)
		cout<<endl<<"Poped "<<x;
	else
		cout<<endl<<"Underflow";
	t = s1.Pop(x);
	if(t==0)
		cout<<endl<<"Poped "<<x;
	else
		cout<<endl<<"Underflow";
	t = s1.Pop(x);
	if(t==0)
		cout<<endl<<"Poped "<<x;
	else
		cout<<endl<<"Underflow";
				
	return 0;
}
