#include <stdio.h>

// Task: Correct the syntax errors and calculate the area of a circle using the formula: pi x r x r.

int main() { // missing starting curly bracket
    float radius, area;
    printf("Enter radius: ");//missing semicolon
    scanf("%f", &radius);

    area = 3.14 * radius * radius;//missing semicolon
    printf("Area is: %f\n", area);

    return 0;
}

