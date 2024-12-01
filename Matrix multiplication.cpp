#include<stdio.h>
#include<conio.h>
void multiply(int m1[5][5],int m2[5][5],int r1,int r2,int c1,int c2,int r,int m[5][5]);
int main()
{
	int m1[5][5],m2[5][5],r1,r2,c1,c2,i,j,r=0,m[5][5];
	printf("enter rows and coloumns of matrix1\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and columns of matrix2:\n");
	scanf("%d%d",&r2,&c2);
while(c1!=r2)
	{
		printf("Multiplication is not possible because c1 is not equal to r2\n");
		printf("Again enter rows and coloumns of matrix1\n");
		scanf("%d%d",&r1,&c1);
		printf("Again enter rows and coloumns of matrix2\n");
		scanf("%d%d",&r2,&c2);
	}
	printf("Enter elements of matrix 1:\n");
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		scanf("%d",&m1[i][j]);
	}
	printf("Matrix 1 is :\n");
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		printf("%4d",m1[i][j]);
		printf("\n");
	}
	printf("Enter elements of matrix2:\n");
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		scanf("%d",&m2[i][j]);
	}
	printf("Matrix 2 is :\n");
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		printf("%4d",m2[i][j]);
		printf("\n");
	}
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		r=0;	
	}
	multiply(m1,m2,r1,r2,c1,c2,r,m);
	return(0);
	getch();
}
void multiply(int m1[5][5],int m2[5][5],int r1,int r2,int c1,int c2,int r,int m[5][5])
{
	int i,j,k;
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c2;j++)
		{
			for(k=1;k<=c1;k++)
			{r+=m1[i][k]*m2[k][j];
			}
			m[i][j]=r;
			printf("%4d",m[i][j]);
			r=0;
		}
		printf("\n");
	}
}
