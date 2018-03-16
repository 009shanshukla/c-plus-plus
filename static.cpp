#include<bits/stdc++.h>
using namespace std;

class account
{
	private:
		float balance;
		static float roi;

	public:
		void setbalance(float b)
		{
			balance = b;
		}	
		static void setroi(float r)
		{
			roi = r;
		}
		void showdata()
		{
			cout<<"balance: "<<balance<<" roi: "<<roi<<endl;
		}
};
float account :: roi;
static int ram;
void fun()
{
	ram = 1;
}
main()
{
	
	account :: setroi(3.5);
	account a1;
	a1.setbalance(2.67);
	a1.showdata();
	cout<<endl<<"ram: "<<ram<<endl;
	fun();
cout<<endl<<"ram: "<<ram<<endl;
}