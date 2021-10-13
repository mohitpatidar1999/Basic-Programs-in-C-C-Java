#include<stdio.h>
#include<conio.h>
void swap(int a,int n);
int main()
{
	int a,n;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&n);
	swap(a,n);
	return(0);
	getch();
}
void swap(int a,int n)
{
	int temp;
	temp=a;
	a=n;
	n=temp;
	printf("Swaped numbers are :\n%d\n%d",a,n);
}
