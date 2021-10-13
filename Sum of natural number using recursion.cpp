#include<stdio.h>
#include<conio.h>
int addnumber(int n);
int main()
{
	int num;
	printf("Enter a positive integer: ");
	scanf("%d",&num);
	printf("sum=%d",addnumber(num));
	return 0;
}
int addnumber(int n)
	{
	if(n!=0)
	return n+addnumber(n-1);
	else
	return n;
	}
