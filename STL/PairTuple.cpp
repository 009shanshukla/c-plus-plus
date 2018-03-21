#include<bits/stdc++.h>
using namespace std;
class student
{
private:
	char rollno[10];
	char name[20];
public:
	void setdata(char *r, char *n)
	{
		strcpy(rollno, r);
		strcpy(name, n);
	}
	void show_data()
	{
		cout<<"name: "<<name<<endl<<"rollno: "<<rollno<<endl;
	}
};
main()
{
	pair<int, int>p1;
	pair<int, string>p2;
	pair<int , student>p3;
	tuple<int, int, string>t;
	p1 = make_pair(1, 3);
	char s[10] = "shan";
	p2 = make_pair(1, s);
	student obj;
	char r[10] = "14566";
	char n[10] = "shantanu";
	obj.setdata(r, n);
	p3 = make_pair(1, obj);
	t = make_tuple(1, 2, "shanu");
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<p3.first<<endl;
	(p3.second).show_data();
	cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<" "<<endl;
}