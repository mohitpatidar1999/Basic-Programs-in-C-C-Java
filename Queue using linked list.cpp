#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
class queue
{
	node *front,*rear;
	public:
		queue()
		{
			front=rear=NULL;
		}
		int add(int);
		int remove(int &);
		~queue()
	{
			if(front==NULL)
				cout<<"No element";
		else
		{
			node* temp=front;
			front=front->link;
			delete temp;
		}
	}
	
	
};
int queue::add(int v)
{
	node *temp=new node;
	temp->data=v;
	temp->link=NULL;
	if(rear==NULL)
	{
		front=rear=temp;
		return 0;
	}
	else
	{
		rear->link=temp;
		rear=temp;
	}
	return temp->data;
}
int queue::remove(int &element)
{
	if(front==NULL)
	{
		return -1;
	}
	else
	{
		node* temp=front;
		int t;
		t=front->data;
		front=front->link;
		if(front==NULL)
			rear=NULL;
		element=t;
		delete temp;
		return 0;
	}
}
main()
{
	queue q;
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
					b=q.add(x);
					cout<<"Added element is  "<<b<<endl;
					break;
				}
			case 2:
				y=q.remove(removed_element);
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

