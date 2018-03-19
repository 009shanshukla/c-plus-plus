#include<bits/stdc++.h>
using namespace std;

template<class x, class y> x big(x a, y b)
{
	if(a > b)
		return a;
	else
		return b;
}

main()
{
	cout<<big(1, 3)<<endl;
	cout<<big(2.9, 6)<<endl;
}