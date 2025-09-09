//Write a C program that prompts the user to enter their age and height (in centimeters) and then displays them.
#include <stdio.h>
void main(){
    int age,height;
    printf ("Enter your age : ");
    scanf("%d",&age);
    printf ("Enter your height in centimeters : ");
    scanf("%d",&height);
    printf("The age and height(cm) entered by the user is :%d years, %d cm.",age,height);

}