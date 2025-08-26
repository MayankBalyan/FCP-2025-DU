// Write a C program to swap the values of two integers without using a third variable,
// employing only the bitwise XOR (^) operator and assignment statements. No
// control structures should be used.
#include <stdio.h>
void main(){
    int a=3,b=4;
    a=(a^a^b);
    b=(b^b^a);
    printf("%d %d",a,b);
}