#include<bits/stdc++.h>
using namespace std;
main()
{
	map<int, string> m = {{1, "shan"}, {2, "shivam"}};
	m[12] = "prashant";
	m[10] = "shikhar";
	m.insert(pair<int, string>(16, "deepak"));

	map<int, string> :: iterator ir = m.begin();

	while(ir != m.end())
	{
		cout<<ir->first<<" "<<ir->second<<endl;
		ir++;
	}
	cout<<endl;
	cout<<m[10]<<endl;
	cout<<m.at(12)<<endl;
	cout<<m.size()<<endl;
	cout<<m.empty()<<endl;
	m.clear();
	ir = m.begin();
	while(ir != m.end())
	{
		cout<<ir->first<<" "<<ir->second<<endl;
		ir++;
	}
}