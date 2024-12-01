#include <stdio.h>
#include <conio.h>

union job {
    char name[32];
    float salary;
    int worker_no;
} job1;

void main() {
    printf("Enter name: ");
    scanf("%s", job1.name);  // Take input for name
    printf("Name: %s\n", job1.name);

    printf("Enter salary: ");
    scanf("%f", &job1.salary);  // Take input for salary
    printf("Salary: %.2f\n", job1.salary);

    // Since the union shares memory, only the last assigned value will be valid.
    // So, displaying both name and salary after this may not work as intended.
    // If you want to store and display different members of the union, do it one at a time.
    
    getch();
}
