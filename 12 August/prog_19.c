#include <stdio.h>  // Missing: For input/output
#include <math.h>  // Missing: For sqrt()

//Missing: describe the program
// a program to take integer as input from the user and give it square root till 2 digits after decimal

int main() {
    double x, result;

    printf("Enter a number: ");
    scanf("%lf", &x);

    result = sqrt(x);

    printf("Square root = %.2lf\n", result);

    return 0;
}

