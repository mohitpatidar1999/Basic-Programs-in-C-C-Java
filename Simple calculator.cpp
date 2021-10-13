#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,opt;
	printf("Enter two values \n");
	scanf("%d%d",&a,&b);
	printf("Enter your choice\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1: 
		printf("addition of %d and %d is %d",a,b,a+b);
		break;
		case 2: 
		printf("subtraction of %d and %d is %d",a,b,a-b);
		break;
		case 3: 
		printf("Multiplication of %d and %d is %d ",a,b,a*b);
		break;
		case 4: 
		printf("Division of %d and %d is %d",a,b,a/b);
		break;
		default: 
		printf("Incorrect choice");
	}
	return(0);
	getch();
}
