#include<iostream>
using namespace std;
template<class T>
class Array
{
	protected:
		T *data;
		int size;
	public:
		Array(int=1);
		~Array();	
};
template<class T>
class Stack:public Array<T>
{
	int sp;
	public:
		Stack(int=1);
		bool push(T);
		bool pop(T&);
		~Stack();
};
template<class T>
Array<T>::Array(int s)
{
	cout<<endl<<"Const. Array";
	size = s;
	data = new T[size];
	for(int i=0;i<size;i++)
		data[i]=0;
}
template<class T>
Array<T>::~Array()
{
	cout<<endl<<"Dest. Array";
	delete[] data;
}
template<class T>
Stack<T>::Stack(int v):Array<T>(v)
{
	cout<<endl<<"Const. Stack";
	sp=-1;
}
template<class T>
bool Stack<T>::push(T a)
{
	if(sp==this->size-1)
		return false;
	this->data[++sp] = a;
	return true;
}
template<class T>
bool Stack<T>::pop(T &a)
{
	if(sp==-1)
		return false;
	a = this->data[sp--];
	return true;
}
template<class T>
Stack<T>::~Stack()
{
	cout<<endl<<"Dest. Stack";
}
int main()
{
	Stack<char> obj(3);
	char k;
	if(!obj.push('A'))//1
		cout<<endl<<"Stack Overflow!";
		
	if(!obj.push('B'))//2
		cout<<endl<<"Stack Overflow!";
		
	if(!obj.push('c'))//3
		cout<<endl<<"Stack Overflow!";
		
	if(!obj.push('D'))//4
		cout<<endl<<"Stack Overflow!";
		
//	if(!obj.push('E'))//5
//		cout<<endl<<"Stack Overflow!";
//		
//	if(!obj.push('F'))//6
//		cout<<endl<<"Stack Overflow!";
//		
//	if(obj.pop(k))//1
//		cout<<endl<<"Poped : "<<k;
//	else
//		cout<<endl<<"Stack Underflow!";
//		
//	if(obj.pop(k))//2
//		cout<<endl<<"Poped : "<<k;
//	else
//		cout<<endl<<"Stack Underflow!";
//		
	if(obj.pop(k))//3
		cout<<endl<<"Poped : "<<k;
	else
		cout<<endl<<"Stack Underflow!";
		
	if(obj.pop(k))//4
		cout<<endl<<"Poped : "<<k;
	else
		cout<<endl<<"Stack Underflow!";
		
	if(obj.pop(k))//5
		cout<<endl<<"Poped : "<<k;
	else
		cout<<endl<<"Stack Underflow!";
		
	if(obj.pop(k))//6
		cout<<endl<<"Poped : "<<k;
	else
		cout<<endl<<"Stack Underflow!";
		
	return 0;
}
