#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int count=0,flag=0;
	char str[50];
	printf("Enter any sentence\n");
	gets(str);
	int len=strlen(str);
		
	for(int i=0;i<len;i++)
	{
		if (str[i]==' ')
		count++;	
	}
	printf("Words in above sentence are:%d",++count);
	return(0);
	getch();
}
