#include<bits/stdc++.h>
using namespace std;

class student
{
private:
	int rollno;
	char name[20];
	class address
	{
	private:
		char pincode[7];
		char city[10];
		char state[10];
	public:
		void setaddress(char *p, char *c, char *s)
		{
			strcpy(pincode, p);
			strcpy(city, c);
			strcpy(state, s);
		}
		void show()
		{
			cout<<"pin: "<<pincode<<endl<<"city: "<<city<<endl<<"state: "<<state<<endl;
		}
	};
public:
	address obj;
	void setdata(int a, char *n)
	{
		rollno = a;
		strcpy(name, n);
	}	
	void setadd(char *p, char *c, char *s)
	{
		obj.setaddress(p, c, s);
	}

	void showdata()
	{
		cout<<"name: "<<name<<endl<<"rollno: "<<rollno<<endl;
		obj.show();
	}
};
main()
{
	student obj1;
	int x = 14566;
	char n[10] = "shantanu";
	char p[10] = "241126";
	char s[10] = "up";
	char c[10] = "lucknow";
	obj1.setdata(x, n);
	obj1.setadd(p, c, s);
	obj1.showdata();
}