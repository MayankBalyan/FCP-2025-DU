#include <stdio.h>

// a program to calculate simple interest given principal, rate, and time.
// Formula: Simple Interest = (Principal × Rate × Time) / 100

int main() {
    float principal, rate, time, si;
    
    printf("Enter principal, rate, and time: ");
    scanf("%f",&principal);  // Missing: input values
    scanf("%f",&rate);  
    scanf("%f",&time);  
    
    si = (principal*rate*time)/100;  // Missing: formula
    
    printf("Simple Interest = %.2f\n", si);  // Missing: output
    
    return 0;
}

