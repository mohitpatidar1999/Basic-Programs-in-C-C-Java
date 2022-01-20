#include<stdio.h>
#include<conio.h>
void display(int m[5][5],int r,int c);
int main()
{
	int i,j,r,c,m[5][5];
	printf("Enter no. of rows and comoumns of matrix\n");
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix:\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		scanf("%d",&m[i][j]);
	}
display(m,r,c);
	return(0);
	getch();
}
void display(int m[5][5],int r,int c)
{
	int i,j;
	printf("Entered matrix is:\n");
		for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		printf("%4d",m[i][j]);
		printf("\n");
	}
}
