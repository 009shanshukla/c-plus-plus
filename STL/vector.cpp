#include<bits/stdc++.h>
using namespace std;
main()
{
	vector<int>v1;
	vector<int>v2 {1, 2};

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	cout<<v1.size()<<endl<<v2.size()<<endl<<endl;

	for(int i = 0; i < v1.size(); i++)
		cout<<v1[i]<<endl;
	cout<<endl;

	for(int i = 0; i < v2.size(); i++)
		cout<<v2.at(i)<<endl;
	cout<<endl;

	cout<<v1.capacity()<<endl<<v2.capacity()<<endl<<endl;

	cout<<v1.front()<<endl<<v1.back()<<endl<<endl;

	std::vector<int>:: iterator it = v1.begin();
	v1.insert(it + 1, 100);

	for(int i = 0; i < v1.size(); i++)
		cout<<v1[i]<<endl;
	cout<<endl;	

}