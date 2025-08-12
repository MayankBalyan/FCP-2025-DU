#include <stdio.h>

// Task: Fix the syntax errors and run the program to add two integers.

int main() {
    int a, b;// missing semicolon
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);//dollor sign was used instead of ampersand

    int sum = a + b;
    printf("Sum is: %d\n", sum);

    return 0;
}


