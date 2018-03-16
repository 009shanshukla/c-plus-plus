#include<bits/stdc++.h>
using namespace std;

class Complex
{
	private:
		int a, b;
	public:
		void setdata(int, int);
			
		inline void showdata()
		{
			cout<<"real part: "<<a<<" imaginary part: "<<b<<endl;
		}
		Complex add(Complex c)
		{
			Complex temp;
			temp.a = a + c.a;
			temp.b = b + c.b; 
			return temp;
		} 
};

void Complex :: setdata(int x, int y)
		{
			a = x;
			b = y;
		}

main()
{
	Complex c1, c2, c3;
	c1.setdata(1, 2);
	c2.setdata(4, 7);
	c3 = c1.add(c2);
	c1.showdata();
	c2.showdata();
	c3.showdata();
}