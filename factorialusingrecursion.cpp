#include<stdio.h>
#include<conio.h>
int factorial (int n);
int main()
{
	int n;
	printf("Enter no. to find factorial\n");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,factorial(n));
	return(0);
	getch();
}
int factorial (int n)
{
	if(n==1)
	return(1);
	else
	return(n*factorial(n-1));
}
