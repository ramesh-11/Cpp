#include<iostream>
using namespace std;
class SingleTone
{
	int a;
	int b;
	SingleTone(int=0,int=0);
	static SingleTone *px;
	static int c;
	public:
		static SingleTone* CreateObject(int=0,int=0);
		void show();
		~SingleTone();	
};
int SingleTone::c(0); 
SingleTone* SingleTone::px=NULL;
SingleTone::SingleTone(int x,int y){
	cout<<endl<<"Private Constructor called..";
	this->a=x;
	this->b=y;
}
SingleTone* SingleTone::CreateObject(int x,int y){
	cout<<endl<<"Create Object Number : "<<(++c);
	if(px==NULL)
		px=new SingleTone(x,y);
	return px;
}
void SingleTone::show()
{
	cout<<endl<<"a : "<<a<<", b : "<<b;
}
SingleTone::~SingleTone(){
	cout<<endl<<"destructor called";
	//delete px;
}
int main()
{
	SingleTone *ptrObj=SingleTone::CreateObject(5,6);
	ptrObj->show();
	delete ptrObj;
	return 0;
}
