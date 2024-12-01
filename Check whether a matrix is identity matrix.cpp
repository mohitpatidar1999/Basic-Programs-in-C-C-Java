#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k = 0, m[5][5], r, c;
    printf("Enter no. of rows and columns of a matrix\n");
    scanf("%d%d", &r, &c);
    
    if (r == c)
    {
        printf("Enter elements of matrix\n");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
                scanf("%d", &m[i][j]);
        }

        printf("Entered matrix is:\n");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
                printf("%4d", m[i][j]);
            printf("\n");
        }

        for (i = 1; i <= r; i++)
        {
            for (j = i; j <= c; j++)
            {
                if (m[i][j] == 1)
                    k++;
            }
        }

        if (k == c)
            printf("Entered matrix is Identity matrix");
        else
            printf("Not an identity matrix");
    }
    else
    {
        printf("It cannot be an identity matrix because it should be a square matrix");
    }

    return(0);
    getch();
}

