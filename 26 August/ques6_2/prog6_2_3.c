//Write a C program to convert a given temperature from Celsius to Fahrenheit and Kelvin using the formulas
#include <stdio.h>
void main(){
    float c,f,k;
    printf("Enter the temp in celsius : ");
    scanf("%f",&c);
    k=c+273.15;
    f=32+(9*c/5);
    printf("The temp in kelvin is %.2f and in fahrenheit is %.2f",k,f);
}