#include <stdio.h>  // For input and output
#include <conio.h>  // For getch() (optional)

int main()
{
    int n, d, q, r;

    // Prompt the user to input the divisor
    printf("Enter a divisor: ");
    scanf("%d", &d);

    // Check if the divisor is 0
    if (d == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Prompt the user to input the dividend
    printf("Enter a dividend: ");
    scanf("%d", &n);

    // Calculate quotient and remainder
    q = n / d; // Quotient
    r = n % d; // Remainder

    // Output the results
    printf("Quotient is %d\n", q);
    printf("Remainder is %d\n", r);

    return 0; // End of program
}
