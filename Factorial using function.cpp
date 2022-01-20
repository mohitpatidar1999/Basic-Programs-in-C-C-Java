#include<stdio.h>
#include<conio.h>
int fact(int f);
int main()
{
	int f;
	printf("Enter any no.\n");
	scanf("%d",&f);
	f=fact(f);
	printf("Factorial of given no. is :%d",f);
	return(0);
	getch();
	
}
int fact(int f)
{
	int i;
	for(i=f-1;i>=1;i--)
	{f=f*i;}
	return(f);
}
