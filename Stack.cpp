#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class stack
{
	int tos;
	int s[5];
	public:
			stack()
			{
				tos=-1;
				for(int i=0;i<5;i++)
				{
					s[i]=NULL;
				}
			}
			int add(int);
			int remove(int &);
};
int stack::add(int v)
{
	if(tos>=4)
	{
		return 0;
	}
	else
	{
		tos++;
		s[tos]=v;
		return 1;
	}
}
int stack::remove(int &element)
{
	if(tos==-1)
	{
		return -1;
	}
	else
	{
		int t;
		t=s[tos];
		tos--;
		element=t;
		return 0;
	}
}
main()
{
	stack s1;
	int a,b,x,y,removed_element;
	do
	{
		cout<<"Enter your choice"<<endl;
		cout<<"1. Add element"<<endl;
		cout<<"2. Delete element"<<endl;
		cout<<"3. Exit"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
				{
					cout<<"Enter value"<<endl;
					cin>>x;
					b=s1.add(x);
					if(b==0)
					{
						cout<<"Stack is full"<<endl;
					}
					else
					cout<<"Added element is  "<<x<<endl;
					break;
				}
			case 2:
				y=s1.remove(removed_element);
				if(y==-1)
				{
					cout<<"Stack is empty"<<endl;
				}
				else
					cout<<"Removed element is  "<<removed_element<<endl;
					break;
		}	
	}while(a!=3);
}
