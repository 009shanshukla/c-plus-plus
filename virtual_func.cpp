#include<bits/stdc++.h>
using namespace std;
class A
{
public:
	void f1()
	{
		cout<<"i am f1 in A"<<endl;
	}
	virtual void f2()
	{
		cout<<"i am f2 in A"<<endl;
	} 
	virtual void f3()
	{
		cout<<"i am f3 in A"<<endl;
	}
};

class B : public A
{
public:
	void f1()
	{
		cout<<"i am f1 in B"<<endl;
	}
	void f2()
	{
		cout<<"i am f2 in B"<<endl;
	} 
	void f3(bool x)
	{
		cout<<"i am f3 in B"<<endl;
	}
};

main()
{
	A *p, *q, ob1;
	B ob2;
	p = &ob1;
	q = &ob2;
	ob1.f1();     //early binding
	ob2.f1();     //early binding
	p->f1();      //early binding
	p->f2();      //late binding
	p->f3();      //method hiding
	q->f1();      //early binding
	q->f2();      // late binding
	q->f3();      // method hiding (if a parameter is passed in f3(true) then it will give error due to method hiding)
}