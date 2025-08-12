#include <stdio.h>  // Missing: For input/output
#include <math.h>  // Missing: For sqrt()

//Missing: describe the program

int main() {
    double x, result;

    printf("Enter a number: ");
    scanf("%lf", &x);

    result = sqrt(x);

    printf("Square root = %.2lf\n", result);

    return 0;
}

