#include<bits/stdc++.h>
using namespace std;
main()
{
	int a = 5;
	try
	{
		if(a == 1)
			throw 1;
		if(a == 5)
			throw 5;
	}
	catch(...)
	{
		cout<<"RAM"<<endl;
	}
}