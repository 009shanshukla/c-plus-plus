#include<bits/stdc++.h>
#include<array>
using namespace std;
main()
{
	array <int, 5> shan = {1, 2, 3, 4, 5};
	cout<<shan.at(2)<<endl;
	cout<<shan[3]<<endl;
	cout<<shan.front()<<endl;
	cout<<shan.back()<<endl;
	array<int, 5> shan1 = {11, 12, 13, 14, 15};
	shan.swap(shan1);
	for(int i = 0; i < 5; i++)
		cout<<shan[i]<<" ";
	cout<<endl;
	for(int i = 0; i < 5; i++)
		cout<<shan1[i]<<" ";
	cout<<endl;
	cout<<shan.size()<<endl;
}