#include <stdio.h>

//a C program that takes a float as input and prints it.

int main() {
    float temperature;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("You entered: %.2f", temperature);  // Missing: print temperature

    return 0;
}
//    %.2f    - THIS PRINT THE FLOAT TILL 2 DIGITS
