#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m[5][5];
	printf("Enter elements of matrix\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		scanf("%d",&m[i][j]);
	}
	printf("Entered matrix is : \n");
		for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		printf("%4d",m[i][j]);
		printf("\n");
		
	}
	printf("Transpose of given matrix is :\n");
			for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		printf("%4d",m[j][i]);
		printf("\n");
		
	}
	return(0);
	getch();
}
