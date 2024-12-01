#include <stdio.h>  // For input/output functions
#include <math.h>   // For sqrt() function

int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c):\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check if it is a quadratic equation
    if (a == 0)
    {
        printf("This is not a quadratic equation (a cannot be zero).\n");
        return 0; // Exit program
    }

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);

    if (discriminant >= 0) // Real roots
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots of the given quadratic equation are: %.2f and %.2f\n", root1, root2);
    }
    else // Complex (imaginary) roots
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0; // End of program
}
