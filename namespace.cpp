#include<bits/stdc++.h>
using namespace std;

namespace shan
{
	int a, b;
	void fun();
	class A
	{
	public:
		int x;
		void f1()
		{
			cout<<"hello"<<endl;;
		}
		void f2();
	};
}
using namespace shan;
void shan:: fun()
{
	cout<<"i am in fun()"<<endl;
}
void shan::A::f2()
{
	cout<<"i am outside defined"<<endl;
}
main()
{
	A obj;
	obj.x = 3;
	obj.f1();
	obj.f2();
	fun();
	cout<<obj.x<<endl;
}