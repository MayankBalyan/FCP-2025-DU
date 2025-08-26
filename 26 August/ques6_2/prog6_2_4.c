// Write a C program that takes an integer as input and prints 1 if it is even, or 0
// if it is odd – using only the modulus operator and an expression directly inside
// printf() (no control structures).

#include <stdio.h>
void main(){
    int a;
    printf("Enter the number to check odd even : ");
    scanf("%d",&a);
    printf("%d",!(a%2));
}