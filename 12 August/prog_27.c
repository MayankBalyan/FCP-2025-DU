#include <stdio.h>

//Right-Angled Triangle of Stars

/*
    Title: Right Angled Triangle of the star of  the lenght entered by the user
    Filename:prog_27.c
    Run Command:gcc prog_27.c  a.exe
    Author: Mayank Balyan
    Description: To print an right angled triangle
    Date: 12 Aug
*/

int main() {
    int i, j, rows;


    printf("Enter number of rows: ");
    scanf("%d", &rows);     // Missing: Ask user for number of rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* "); // Missing: Print a star followed by a space
        }
        printf("\n");
    }

    return 0;
}

