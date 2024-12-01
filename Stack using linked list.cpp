#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
class stack
{
	node *top;
	public:
			stack()
			{
				top=NULL;
			}
			int push(int);
			int pop(int &);
			~stack()
			{
				node *temp;
				while(top!=NULL)
				{
					temp=top;
					top=top->link;
					delete temp;
				}
			}
};
int stack::push(int v)
{
	node *temp=new node;
	temp->data=v;
	temp->link=top;
	top=temp;
	return temp->data;
}
int stack::pop(int &element)
{
	if(top==NULL)
	{
		return -1;
	}
	else
	{
		node *temp=top;
		int x=temp->data;
		top=top->link;
		element=x;
		delete temp;
		return 0;
	}
}
main()
{
	stack s;
	int a,b,x,y,poped_element;
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
					b=s.push(x);
					cout<<"Added element is  "<<b<<endl;
					break;
				}
			case 2:
				y=s.pop(poped_element);
				if(y==-1)
				{
					cout<<"Stack is empty"<<endl;
				}
				else
					cout<<"Removed element is "<<poped_element<<endl;
					break;
		}	
	}while(a!=3);
}
