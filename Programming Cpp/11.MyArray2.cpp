#include<iostream>
using namespace std;
class myArray
{
	int size;
	int *data;
	public:
		myArray(int=1);
		myArray(const myArray &);
		myArray & operator=(const myArray &);
		friend istream & operator>>(istream &,myArray &);
		friend ostream & operator <<(ostream &,const myArray &);
		int & operator[](int);
		myArray operator()(int,int);
		~myArray();
};
myArray myArray::operator()(int s,int n){
	cout<<endl<<"functional operator() overload..";
	myArray tmp(n);
	for(int i=0;i<n;i++){
		tmp.data[i]=this->data[i+s];
	}	
	return tmp;
}
myArray & myArray::operator =(const myArray &ob){
	cout<<endl<<"operator= overloaded..";
	this->size=ob.size;
	
	if(this->data!=NULL)
		delete this->data;

	this->data=new int[this->size];
	for(int i=0;i<ob.size;i++)
		this->data[i]=ob.data[i];
}
int & myArray::operator[](int index){
	cout<<endl<<"operator[] overloaded..";
	if(index>=0 && index <size){
		return this->data[index];
	}
	else{
		static int dummy;
		cout<<endl<<"Index out of bound.";
		return dummy;
	}
}
istream & operator>>(istream &is,myArray &ob){
	cout<<endl<<"extraction operator>> overload..";
	cout<<"Enter " <<ob.size<<" values :";
	for(int i=0;i<ob.size;i++)
		is>>ob.data[i];		
	return is;
}
ostream & operator<<(ostream &os,const myArray & ob){
	cout<<endl<<"insertion operator<< overloaded..";	
	for(int i=0;i<ob.size;i++)
		os<<" "<<ob.data[i];	
	return os;
}
myArray::myArray(const myArray &ob){
	cout<<endl<<"copy constructor called..";
	this->size=ob.size;
	this->data =new int[this->size];
	for(int i=0;i<this->size;i++)
		this->data[i]=ob.data[i];
}
myArray::myArray(int sz)
{
	cout<<endl<<"Constructor call..";
	this->size=sz;
	data = new int[size];
	for(int i=0;i<size;i++)	
		this->data[i] = 0;
}
myArray::~myArray()
{
	cout<<endl<<"Destructor call..";
	delete data;
}
int main()
{
	myArray A1(5),A2=4,A3(10);
	cin>>A1;
	cout<<A1;
	myArray A4=A1;
	A2=A3;
	cout<<A2;
	A1[0]=90;
	A1[2]=92;
	cout<<A1;
	A3=A1(1,2);
	cout<<A3;
	return 0;
}
