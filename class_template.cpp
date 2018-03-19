#include<bits/stdc++.h>
using namespace std;

template<class X> class array_list
{
private:
	struct control_block
	{
		int capacity;
		X *arr_pnt;
	};
	control_block *s;
public:
	array_list(int capacity)
	{
		s = new control_block;	
		s->capacity = capacity;
		s->arr_pnt = new X[s->capacity];
	}
	void add(int index, X data)
	{
		s->arr_pnt[index] = data;
	}
	void view(int index, X &data)
	{
		data = s->arr_pnt[index];
	}
	void view_list()
	{
		for(int i = 0; i < s->capacity; i++)
			cout<<s->arr_pnt[i]<<endl;
	}

};

main()
{
	float data;
	array_list <float>obj(4.3);
	obj.add(0, 1.2);
	obj.add(1, 32.4);
	obj.add(2, 13);
	obj.add(3, 11);
	obj.view_list();
	obj.view(2, data);
	cout<<"data: "<<data<<endl;
}