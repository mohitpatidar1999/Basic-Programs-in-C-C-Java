#include <stdio.h>
#include <conio.h>

// Function declaration to calculate the sum of natural numbers
int addnumber(int n);

int main()
{
    int num;

    // Input: Ask the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Output: Display the sum of numbers from 1 to num
    printf("Sum = %d\n", addnumber(num));

    return 0; // End of program
}

// Recursive function to calculate the sum of natural numbers
int addnumber(int n)
{
    if (n != 0)  // Base case: Stop recursion when n reaches 0
        return n + addnumber(n - 1); // Recursive call
    else
        return 0; // Return 0 when n = 0
}
