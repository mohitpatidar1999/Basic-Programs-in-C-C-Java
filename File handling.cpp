#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct book {
    int bookid;
    char title[100];
    float price;
} b1, b2, b3;

int main() {
    FILE *fp;
    int n, num;
    char str[330];

    // Open the file for reading (if it doesn't exist, this will fail)
    fp = fopen("myfile.txt", "r");

    if (fp == NULL) {
        printf("File Not Found\n");
        exit(0);
    }

    // Example of fscanf (reading formatted data)
    /*
    fscanf(fp, "%d%d", &n, &num);
    printf("%d %d\n", n, num);
    */

    // Example of fprintf (writing formatted data)
    /*
    printf("Enter any number\n");
    scanf("%d", &n);
    fprintf(fp, "Square of %d is %d\n", n, n * n);
    */

    // Example of fread (reading binary data)
    /*
    while (fread(&b3, sizeof(b3), 1, fp) > 0) {
        printf("Bookid %d\nTitle %s\nPrice %.2f\n", b3.bookid, b3.title, b3.price);
    }
    */

    // Example of fwrite (writing binary data)
    /*
    printf("Enter bookid, name and price for b1\n");
    scanf("%d", &b1.bookid);
    fflush(stdin);  // Clears input buffer before reading string
    gets(b1.title);
    scanf("%f", &b1.price);
    fwrite(&b1, sizeof(b1), 1, fp);

    printf("Enter bookid, name and price for b2\n");
    scanf("%d", &b2.bookid);
    fflush(stdin);  // Clears input buffer before reading string
    gets(b2.title);
    scanf("%f", &b2.price);
    fwrite(&b2, sizeof(b2), 1, fp);
    */

    // Example of fgets (reading a string from file)
    /*
    while (fgets(str, 10, fp) != NULL) {
        printf("%s", str);
    }
    */

    // Example of fputs (writing a string to file)
    /*
    printf("Enter string to write in file\n");
    gets(str);
    fputs(str, fp);
    */

    // Example of fgetc (reading one character at a time)
    /*
    char ch;
    while (!feof(fp)) {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    */

    // Example of fputc (writing one character at a time)
    /*
    printf("Enter what you want to write in file\n");
    gets(str);
    for (int i = 0; i < strlen(str); i++) {
        fputc(str[i], fp);
    }
    */

    fclose(fp);
    return 0;
}
