#include<stdio.h>
#include<conio.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
struct node
{
	int data;
	node *pre,*next;
};
class dlinkedlist
{
	node *start;
	public:
		dlinkedlist()
		{
			start=NULL;
		}
		void append(int);
		void addatbeg(int);
		void display();
		int count();
		void insert(int,int);
		void deletenodebyindex(int);
		void deletenodebyvalue(int);
		void reverse();
};
void dlinkedlist::append(int v)
{
	node *temp=new node;
	temp->data=v;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
		start->pre=NULL;
	}
	else
	{
		node *t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
		temp->pre=t;
	}
}
void dlinkedlist::addatbeg(int v)
{
	node *temp=new node;
	temp->data=v;
	temp->pre=NULL;
	temp->next=start;
	if(start!=NULL)
	{
		start->pre=temp;
	}
	start=temp;
}
void dlinkedlist::display()
{
	node *temp=start;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int dlinkedlist::count()
{
	node* temp=start;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}
void dlinkedlist::insert(int loc,int v)
{
	int c=this->count();
	cout<<c<<endl;
	if(loc>c)
	{
		cout<<"Invalid Location"<<endl;
		return;
	}
	if(loc==0)
	{
		this->addatbeg(v);
		return;	
	}
	else if(loc==c+1)
	{
		this->append(v);
		return;
	}
	else if(loc>0&&loc<=c)
	{
		node* temp=new node;
		temp->data=v;
		node* t=start;
		for(int i=1;i<loc;i++)
		{
			t=t->next;
		}
		t->next->pre=temp;
		temp->next=t->next;
		temp->pre=t;
		t->next=temp;
	}
}
void dlinkedlist::deletenodebyindex(int loc)               //Delete node using index value
{
	node* temp=start;
	node* t;
	int ct=this->count();
	if(loc<ct)
	{
	
		if(loc==0)
		{
			t=temp;
			t->next->pre=temp->pre;
			start=temp->next;
			delete temp;
		}
	else if(loc==ct-1)
	{
		for(int i=0;i<loc;i++)
		{
			t=temp;
			temp=temp->next;
		}
		t->next=temp->next;
		delete temp;
	}
	else if(loc>0&&loc<ct-1)
		{
			for(int i=0;i<loc;i++)
			{
				t=temp;
				temp=temp->next;
			}
			t->next=temp->next;
			t->next->pre=temp->pre;
			delete temp;
		}
	}
	else
	{
		cout<<"Index value not exist!"<<endl;
	}
}
void dlinkedlist::deletenodebyvalue(int num)               //Delete node using data entered by user
{
	node* t=start;
	while(t!=NULL)
	{
		if(t->data==num)
		{
			if(t==start)
			{
				t->next->pre=NULL;
				start=t->next;
				delete t;
				return;
			}
			if(t->next==NULL)
			{
				t->pre->next=NULL;
				delete t;
				return;
			}
			t->next->pre=t->pre;
			t->pre->next=t->next;
			delete t;
			return;
		}
		else
		{
			t=t->next;
		}
	}
	cout<<"Element Not Found!"<<endl;
}
void dlinkedlist::reverse()
{
	
}
int main() 
{
	dlinkedlist d;
	int loc,val,location,choice,value;
	do
	{
		cout<<"Enter your choice"<<endl;
		cout<<"1. Add element at begining"<<endl;
		cout<<"2. Append element"<<endl;
		cout<<"3. Count elements"<<endl;
		cout<<"4. Delete element"<<endl;
		cout<<"5. Insert element"<<endl;
		cout<<"6. Display "<<endl;
		cout<<"7. Exit"<<endl;
		cin>>choice;
		if(choice==7)	
		{exit(0);}
		switch(choice)
		{
		case 1:
			cout<<"Enter Data for linked list"<<endl;
			cin>>value;
			d.addatbeg(value);
			break;
		case 2:
			cout<<"Enter Data for linked list"<<endl;
			cin>>value;
			d.append(value);
			break;
		case 3:
			d.count();
			break;
		case 4:
			cout<<"Enter location which node is to be deleted"<<endl;
			cin>>location;
			d.deletenodebyindex(location);
			break;
		case 5:
			cout<<"Enter location and value which is to be inserted"<<endl;
			cin>>loc>>val;
			d.insert(loc,val);
			break;
		case 6:
			d.display();
			break;
		}
	}while(choice!=7);
	
}
