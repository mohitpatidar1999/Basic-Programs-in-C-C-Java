#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class cqueue
{
	int f,r;
	int cq[5];
	public:
			cqueue()
			{
				f=r=-1;
				for(int i=0;i<5;i++)
				cq[i]=0;
			}
				int add(int);
				int remove(int &);			
};
int cqueue::add(int v)
{
	if((r==4&&f==0)||(r==f-1))
		return 0;
	//printf("Queue if full");
	else
	{
		if(r==4)
		r=0;
		else
		r++;
		cq[r]=v;
		if(f==-1)
		{
		f=0;
		}
		return 1;
	}
}
int cqueue::remove(int &element)
{
	if(f==-1)
	{
		return -1;
	}
	else
	{
		int t=cq[f];
		cq[f]=-1;
		if(f==r)
		f=r=-1;
		else
		{
			if(f==4)
			f=0;
			else
			f++;
		}
		element=t;
		return 0;
	}
}
main()
{
	cqueue cq1;
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
					b=cq1.add(x);
					if(b==0)
					{
						cout<<"Queue is full";
					}
					else
					cout<<"Added element is  "<<x<<endl;
					break;
				}
			case 2:
				y=cq1.remove(removed_element);
				if(y==-1)
				{
					cout<<"Queue is empty"<<endl;
				}
				else
					cout<<"Removed element is "<<removed_element<<endl;
					break;
		}	
	}while(a!=3);
}
