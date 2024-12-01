#include<iostream>
#include<stdlib.h>
using namespace std;
class array
{
	int i,min,max,mod;
	float sum=0,average,mean;
	public:
		void minimum_maximum(int *,int);
		void sum_average(int *,int);
		void mean_mod(int *,int);
};
void array::minimum_maximum(int *a,int sizeofa)
{
	/*for(int z=0;z<size;z++)
	{
		cout<<a[z]<<endl;
	}*/
	min=max=a[0];
	for(i=0;i<sizeofa;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	cout<<"Minimum is : "<<min<<endl;
	cout<<"Maximum is : "<<max<<endl;
}

void array::sum_average(int *b,int sizeofb)
{
	for(i=0;i<sizeofb;i++)
	{
		sum=sum+b[i];
	}
	average=sum/sizeofb;
	cout<<"Sum is :"<<sum<<endl;
	cout<<"Average is :"<<average<<endl;
}
void array::mean_mod(int *c,int s)
{
	int ctr=1,newctr;
	float sum=0;
	for(i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(c[i]==c[j])
			{
				ctr++;
				if(i==0)
				{
					mod=c[i];
					newctr=ctr;
				}
			}
			if(i>0)
			{
				if(ctr>newctr)               //agr '>'lagaya hai to pehle jo number enter hua hai wo print hoga 
				{                             //agr'>='lgaya hai to bad m jo number enter hua hai wo print hoga 
					mod=c[i];
					newctr=ctr;
				}
			}
		}
		ctr=1;
	}
	for(i=0;i<s;i++)
	{
		sum=sum+c[i];
	}
	mean=sum/s;
	cout<<"Mod is :"<<mod<<endl;
	cout<<"Mean is :"<<mean<<endl;
}
main()
{
	array a;
	int x,y;
	do
	{
	cout<<"Enter your choice"<<endl;
	cout<<"1. Minimum Maximum"<<endl;
	cout<<"2. Sum Average"<<endl;
	cout<<"3. Mean Mod"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>x;
	if(x==4)
	{
		exit(0);
	}
	cout<<"Enter how many numbers you want to add in array"<<endl;
	cin>>y;
	int arr[y];
	cout<<"Enter numbers one by one"<<endl;
	for(int i=0;i<y;i++)
	{
		cin>>arr[i];
	}
	switch(x)
	{
		case 1:
			a.minimum_maximum(arr,y);
			break;
		case 2:
			a.sum_average(arr,y);
			break;
		case 3:
			a.mean_mod(arr,y);
			break;
	}
}while(x!=4);
}
