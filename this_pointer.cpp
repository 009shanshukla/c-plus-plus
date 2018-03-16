#include<bits/stdc++.h>
using namespace std;
class A
{
private:	
	int l, b, h;
public:
	void setdata(int l, int b, int h)
	{
		this->l = l;
		this->b = b;
		this->h = h;
	}
	void showdata()
	{
		cout<<l<<endl<<b<<endl<<h<<endl;
	}
};
main()
{
	A a;
	a.setdata(1, 3, 5);
	a.showdata();
}