//Write a C program to calculate the Equated Monthly Installment (EMI) for a loan using the formula
#include <stdio.h>
#include <math.h>
void main(){
    float p,r,n,emi;
    printf("Enter the principle values : ");
    scanf("%f",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the total number of monthly installments: ");
    scanf("%f",&n);
    emi=(p*r*(pow((1+r),n)))/(pow((1+r),n)-1);
    printf(" The emi calculated is Rs. %.2f",emi);

    
}