#include<bits/stdc++.h>
using namespace std;
main()
{
	list<int>l {10, 15, 13, 12, 20, 5};
	l.push_back(100);
	l.push_front(30);

	list<int> :: iterator ir = l.begin();

	while(ir != l.end())
	{
		cout<<*ir<<" ";
		ir++;
	}
	cout<<endl;
	l.reverse();
	ir = l.begin();
	while(ir != l.end())
	{
		cout<<*ir<<" ";
		ir++;
	}
	cout<<endl;
	l.sort();
	ir = l.begin();
	while(ir != l.end())
	{
		cout<<*ir<<" ";
		ir++;
	}
	cout<<endl;
	l.pop_front();
	l.pop_back();
	ir = l.begin();
	while(ir != l.end())
	{
		cout<<*ir<<" ";
		ir++;
	}
	cout<<endl<<l.size()<<endl;
	l.remove(13);
	ir = l.begin();
	while(ir != l.end())
	{
		cout<<*ir<<" ";
		ir++;
	}
	l.clear();
	ir = l.begin();
	while(ir != l.end())
	{
		cout<<*ir<<" ";
		ir++;
	}
}