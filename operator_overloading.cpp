#include<bits/stdc++.h>
using namespace std;

class Complex
{
private:
	int a, b;
public:
	Complex(int x, int y)
	{
		a = x, b = y;
	}	
	Complex()
	{
		a = 0, b = 0;
	}
	void showdata()
	{
		cout<<"real: "<<a<<" imag: "<<b<<endl;
	}
	Complex operator+(Complex c)                   // Binary Operator Overloading
	{
		Complex temp;
		temp.a = a + c.a;
		temp.b = b + c.b;
		return temp;
	}
	Complex operator-()                           // Unary operator overloading
	{
		Complex temp;
		temp.a = -a;
		temp.b = -b;
		return temp; 
	}

	Complex operator++(int)                      // post increment overloading
	{
		Complex temp;
		temp.a = a++;	
	}
	Complex operator++()                        // pre increment overloading
	{
		Complex temp;
		temp.a = ++a;	
	}
};

main()
{
	Complex c1(1, 2), c2(3, 6), c3;
	c3 = c1 + c2;
	c3.showdata();
	c3 = -c1;
	c3.showdata();
	c3 = c2++;
	c3.showdata();
	c3 = ++c1;
	c3.showdata();

}