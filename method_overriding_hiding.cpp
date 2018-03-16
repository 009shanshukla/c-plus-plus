#include<bits/stdc++.h>
using namespace std;
class car
{
	public:
		void gear()
		{
			cout<<"changing gear of car"<<endl;
		}
		void shift()
		{
			cout<<"shifting "<<endl;
		}
};

class sports : public car
{
	public:
		void gear()
		{
			cout<<"changing sports car gear"<<endl;
		}
		void shift(bool x)
		{
			cout<<"shifting "<<x<<endl;
		}
};

main()
{
	sports s;
	s.gear();           // method overriding
	s.shift(true);      // method hiding
}