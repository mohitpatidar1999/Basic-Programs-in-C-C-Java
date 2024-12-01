#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,i;
	printf("Enter any number you want table of : ");
	scanf("%d",&a);
	printf("Table of entered number %d is:\n",a);
	for(i=1;i<=10;i++)
	{
		n=a*i;
		printf("%d * %d = %d",a,i,n);
		printf("\n");
	}
	return(0);
	getch();
}
