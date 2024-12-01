#include<iostream>
using namespace std;
class palindrome
{
	int revnum=0;
	public:
		int check_palindrome(int);
		int check_prime(int);
};
int palindrome::check_palindrome(int num)
{
	
	int d,x;
	x=num;
	while(x!=0)
	{
		d=x%10;
		revnum=revnum*10+d;
		x=x/10;
	}
	if(num==revnum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int palindrome::check_prime(int x)
{
	int c=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
main()
{
	palindrome p;
	int x,y,z,a;
	do
	{
	cout<<"Enter your choice"<<endl;
	cout<<"1. To check palindrome "<<endl;
	cout<<"2. To check prime"<<endl;
	cout<<"3. Exit"<<endl;
	cin>>a;
	
	
	switch(a)
	{
		case 1:
				cout<<"Enter a number";
				cin>>x;
				y=p.check_palindrome(x);
				if(y==0)
				{
					cout<<"Palindrome"<<endl;
				}
				else
				{
					cout<<"Not a Palindrome"<<endl;
				}
				break;
		case 2:
			cout<<"Enter any number"<<endl;
			cin>>z;
			y=p.check_prime(z);
				if(y==0)
				{
					cout<<"Prime"<<endl;
				}
				else
				{
					cout<<"Not a Prime"<<endl;
				}
				break;
		}
	}while(a!=3);
}
