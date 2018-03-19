#include<bits/stdc++.h>
using namespace std;

class shan
{	
private:
	int a, b, *p;
public:
	shan()
	{
		p = new int;
	}
	void value(int x, int y, int z)
	{
		a = x, b = y;
		*p = z;
	}
	void print()
	{
		cout<<a<<endl<<b<<endl<<*p<<endl;
	}
	shan(shan &d)
	{
		p = new int;
		a = d.a;
		b = d.b;
		*p = *(d.p);
	}
};
main()
{
	shan obj1;
	obj1.value(1, 2, 3);
	shan obj2 = obj1;      // deep copy
	obj1.print();
	obj2.print();
}