#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class queue
{
	int q[50];
	int r,f;
	public:
			queue()
			{
				r=f=-1;
				for(int i=0;i<10;i++)
				q[i]=NULL;
			}
			int add(int);
			int remove(int&);
};
int queue::add(int v)
{
	if(r==9)
	{
		return 0;
	}
	else
	{
		r++;
		q[r]=v;
		if(f==-1)
		f=0;
		return 1;
	}
}
int queue::remove(int &element)
{
		if(f==-1)
	{
		//printf("Queue is empty");
		return -1;
	}
	else
	{
		int t=q[f];
		q[f]=-1;
		f++;
		if(f==r+1)
		{
			f=r=-1;
		}
		element=t;
		return 0;
	}
}
main()
 {
 	queue q1;
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
					b=q1.add(x);
					if(b==0)
					{
						cout<<"Queue is full"<<endl;
					}
					else
					cout<<"Added element is  "<<x<<endl;
					break;
				}
			case 2:
				y=q1.remove(removed_element);
				if(y==-1)
				{
					cout<<"Queue is empty"<<endl;
				}
				else
					cout<<"Removed element is"<<removed_element<<endl;
					break;
		}	
	}while(a!=3);
 }
