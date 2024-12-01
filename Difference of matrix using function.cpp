#include <stdio.h>

void sub(int s[5][5], int m1[5][5], int m2[5][5], int rows1, int rows2, int cols1, int cols2);

int main()
{
    int m1[5][5], m2[5][5], s[5][5], rows1, cols1, rows2, cols2, i, j;

    // Input the dimensions of the first matrix
    printf("Enter rows and columns of matrix 1: ");
    scanf("%d%d", &rows1, &cols1);

    // Input the dimensions of the second matrix
    printf("Enter rows and columns of matrix 2: ");
    scanf("%d%d", &rows2, &cols2);

    // Check if matrices are of the same size
    if (rows1 == rows2 && cols1 == cols2)
    {
        // Input elements of matrix 1
        printf("Enter elements of matrix 1:\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
                scanf("%d", &m1[i][j]);
        }

        // Display matrix 1
        printf("Entered matrix 1 is:\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols1; j++)
                printf("%4d", m1[i][j]);
            printf("\n");
        }

        // Input elements of matrix 2
        printf("Enter elements of matrix 2:\n");
        for (i = 0; i < rows2; i++)
        {
            for (j = 0; j < cols2; j++)
                scanf("%d", &m2[i][j]);
        }

        // Display matrix 2
        printf("Entered matrix 2 is:\n");
        for (i = 0; i < rows2; i++)
        {
            for (j = 0; j < cols2; j++)
                printf("%4d", m2[i][j]);
            printf("\n");
        }

        // Perform subtraction
        sub(s, m1, m2, rows1, rows2, cols1, cols2);
    }
    else
    {
        printf("Difference is not possible because the number of rows and columns of the given matrices are not equal.\n");
    }

    return 0;
}

void sub(int s[5][5], int m1[5][5], int m2[5][5], int rows1, int rows2, int cols1, int cols2)
{
    int i, j;

    // Perform the subtraction
    for (i = 0; i < rows1; i++)
 
