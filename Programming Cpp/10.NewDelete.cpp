//#include <iostream>
//#include<stdlib.h>
//using namespace std;
//class Test{
//	int a;
//	int b;
//	public:
//		Test(int=0,int=0);
//		void* operator new(size_t);
//		void operator delete(void *);
//		void operator delete[](void *);
//		void* operator new[](size_t);		
//		~Test();
//};
//Test ::Test(int x,int y){
//	cout<<endl<<"constructor called..";
//	a=x;
//	b=y;
//}
//void Test::operator delete(void *pt){
//	cout<<endl<<"operator delete overload..";
//	free (pt);
//}
//void Test::operator delete[](void *pt){
//	cout<<endl<<"operator delete[] overload..";
//	free (pt);
//}
//void* Test::operator new(size_t v){   	//v=size of Test =8 byte
//	cout<<endl<<"operator new overload.. "<<v;
//	void* tmp=malloc(v);
//	return tmp;
//}
//
//void* Test::operator new[](size_t v){   	//v=size of Test =32 byte
//	cout<<endl<<"operator new[] overload.. "<<v;
//	void* tmp=malloc(v);
//	return tmp;
//}
//Test::~Test(){
//	cout<<endl<<"destructor call..";
//}
//int main(){
//	Test *ob1=new Test;  	// operator new
//	delete ob1;
//	Test *ob2=new Test[2];		// operator new[]
//	delete [] ob2;
//	return 0;
//}
