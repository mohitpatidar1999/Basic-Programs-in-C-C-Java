#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{
	int a,b,s;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("Sum of given numbers is:%d",s);
	return(0);
	getch();
}
int sum(int a,int b)
{
	int s;
	s=a+b;
	return(s);
}
