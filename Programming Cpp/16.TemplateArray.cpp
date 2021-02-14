#include<iostream>
using namespace std;
template<class T,int Size>
class myArray
{
	T *data;
	public:
		myArray();
		void Input();
		void Output();
		~myArray();	
};
template<class T,int Size>
myArray<T,Size>::myArray()
{
	cout<<endl<<"Constructor Call..";
	this->data = new T[Size];
	for(int i=0;i<Size;i++)
		this->data[i] = 0;
}
template<class T,int Size>
void myArray<T,Size>::Input()
{
	cout<<endl<<"Enter Values : ";
	T v;
	for(int i=0;i<Size;i++)
	{
		cin>>v;
		data[i] = v;
	}
}
template<class T,int Size>
void myArray<T,Size>::Output()
{
	cout<<endl<<"Given Values : ";
	for(int i=0;i<Size;i++)
		cout<<" "<<this->data[i];
	
}
template<class T,int Size>
myArray<T,Size>::~myArray()
{
	cout<<endl<<"Destructor Call..";
	delete[] this->data;
}
int main()
{
	myArray<char,5> obj;
	obj.Input();
	obj.Output();
	return 0;
}
