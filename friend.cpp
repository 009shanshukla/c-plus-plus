#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
	int a;
public:
	friend void foo(A, B);
	A(int x)
	{
		a = x;
	}
	void shan()
	{
		cout<<"I am in A"<<endl;
	}
};

class B
{
	int b;
public:
	friend void foo(A, B);
	B(int y)
	{
		b = y;
	}
};

class C
{ 
	friend void A::shan();
	friend class B;
};

void foo(A o1, B o2)
{
	cout<<"sum: "<<o1.a + o2.b<<endl;
}
main()
{
	A a(2);
	B b(4);
	foo(a, b);
}