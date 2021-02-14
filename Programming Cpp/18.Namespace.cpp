#include<iostream>
using namespace std;
namespace CSE
{
	void Show()
	{
		cout<<endl<<"CSE---Show";
	}
}
namespace IT
{
	void Show()
	{
		cout<<endl<<"IT---Show";
	}
}
int main()
{
//	using namespace CSE;
//	Show();
	CSE::Show();
	IT::Show();
	return 0;
}
