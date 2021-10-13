#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("Given character is an alphabet");
	else
	printf("Given character is not an alphabet");
	return(0);
	getch();
}
