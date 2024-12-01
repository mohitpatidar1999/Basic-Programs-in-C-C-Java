#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 0 
#define MIN 0

void maxmin(int i,int j,int a[],int max,int min){
	
	if(i==j)
	{
		max=a[i];
		min=a[i];
	}	
	else if(i==j-1)
		{
			if(a[i]>a[j]){
			
			max=a[i];
			min=a[j];
		
			}
			else
			{
			max=a[j];
			min=a[i];
				}
		}
	 else
	 {
	 	int mid=(i+j)/2;
	 	maxmin(i,mid,a,max,min);
	 	maxmin(mid+1,j,a,max,min);
	 	cout<<"max is "<<max<<endl<<"min is"<<min;
	 	
	 }
	 
}
int main(){
	int x,j,i=0;
	cout<<"Enter the size of array"<<endl;
	cin>>x;
	int a[x];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<x;i++)
		cin>>a[i];
	j=x-1;
	maxmin(i,j,a,MAX,MIN);
	return 0;
	getch();
}

