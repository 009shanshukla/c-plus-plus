#include<bits/stdc++.h>
using namespace std;
class array
{
	private:
		int arr[10];
	public:
		void insert(int index, int value)
		{
			arr[index] = value;
		}	
};

class st : private array
{
	int top;
public:
	void push(int value)
	{
		top++;
		insert(top, value);
	}
	st()
	{
		top = -1;
	}
};

main()
{
	st s;
	s.push(3);
	s.push(12);
}