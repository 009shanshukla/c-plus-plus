#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int gear;
		void inc()
		{
			if(gear < 5)
				gear++;
		}	
		void setgear()
		{
			gear = 0;
		}
};
class B : public A
{
	public:
		void print()
		{
			cout<<"on gear "<<gear;
		}
};

main()
{
	B b;
	b.setgear();
	b.inc();
	b.print();
}