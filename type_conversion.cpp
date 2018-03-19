#include<bits/stdc++.h>
using namespace std;
class A
{
private:
	int a, b;
public:
	int geta()
	{
		return a;
	}
	int getb()
	{
		return b;
	}
	
};

class B
{
private:
	int m, n;
public:
	B()
	{}
	B(A obj)
	{
		m = obj.geta();
		n = obj.getb();
	}	
	void show()
	{
		cout<<"m, n: "<<m<<", "<<n<<endl;
	}
};

main()
{
	A obj1;
	B obj2;
	obj2 = obj1;
	obj2.show();
}