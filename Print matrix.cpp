#include <iostream>  // For input and output (cin, cout)
#include <conio.h>   // For getch() (optional, for pausing the program)
using namespace std;

int main()
{
    int rows, cols;

    // Ask the user for the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array dynamically based on user input
    int a[rows][cols];

    // Input elements into the matrix
    cout << "Enter the elements of the " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++) // Loop through rows
    {
        for (int j = 0; j < cols; j++) // Loop through columns
        {
            cin >> a[i][j]; // Input each element
        }
    }

    // Display the elements of the matrix
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < rows; i++) // Loop through rows
    {
        for (int j = 0; j < cols; j++) // Loop through columns
        {
            cout << a[i][j] << " "; // Output each element with a space
        }
        cout << endl; // Move to the next row
    }

    getch(); // Wait for a key press (only works in some environments like Turbo C++)
    return 0; // Indicate successful execution
}
