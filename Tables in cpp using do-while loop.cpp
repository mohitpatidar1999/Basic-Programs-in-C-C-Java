#include<stdio.h>
#include<conio.h>
int main()
{
	int a,n,i=1;
	printf("Enter any number you want table of : ");
	scanf("%d",&a);
	printf("Table of entered number %d is:\n",a);
	do
	{
		n=a*i;
		printf("%d * %d = %d",a,i,n);
		printf("\n");
		i++;
	}while(i<=10);
	return(0);
	getch();
}
