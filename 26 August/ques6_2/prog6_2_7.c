// Write a program to read three integers and find the smallest number using only
// nested conditional operators.
#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter the value of three integers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    printf("%d",((a>b)?((a>c)?a:c):((b>c)?b:c)));
}
