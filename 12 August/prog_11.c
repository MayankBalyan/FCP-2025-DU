#include <stdio.h>

// Missing: describe the program
// a program to take 3 integer as input from the user and display their sum and average
int main() {
    int x, y, z, sum;
    float avg;

    printf("Enter three integers: ");
    scanf("%d",&x);  // Missing: input three integers
    scanf("%d",&y);  // Missing: input three integers
    scanf("%d",&z);  // Missing: input three integers

    sum = (x+y+z);  // Missing: compute sum

    avg = sum/3;  // Missing: compute average

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

