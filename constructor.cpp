#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
	int a, b;
public:
	Complex()                             // Default Constructor
	{
		a = 0;
		b = 0;
	}	
	Complex(int x, int y)                 // Parametrized Constructor
	{
		a = x, b = y;
	}
	Complex(int x)
	{
		a = x;
	}

    Complex(Complex &c)                  // Copy Constructor
    {
    	a = c.a;
    	b = c.b;
    }
    void showdata()
    {
    	cout<<"real: "<<a<<" imaginary: "<<b<<endl;
    }
};

main()
{
	Complex c1(1, 3), c2(4), c3, c4 = c1;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c4.showdata();
}