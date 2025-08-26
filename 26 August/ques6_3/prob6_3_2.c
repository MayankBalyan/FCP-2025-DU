//Write a program that calculates the final bill amount based on the following discount
// rules
//  If the bill amount is more than Rs 5000
// – If payment is made by credit card, apply a 20% discount.
// – Otherwise, apply a 15% discount.
//  If the bill amount is between Rs 3000 and Rs 5000 (inclusive)
// – If the customer is a loyalty member, apply a 10% discount.
// – Otherwise, apply a 5% discount.
// The program should take the bill amount, payment method, and loyalty membership status as input and display the final amount after applying the appropriate
// discount.

#include <stdio.h>
void main(){
    int credit_card,loyalty_card;
    float bill_amount;
    printf("Enter the amount of the bill :");
    scanf("%f",&bill_amount);
    printf("Enter 1 if credit card is used otherwise 0");
    scanf("%f",&credit_card);
    printf("Enter 1 if owns loyalty card otherwise 0");
    scanf("%f",&loyalty_card);
    if(credit_card){
        if(bill_amount>5000){
            bill_amount-=bill_amount*.2;
        }
        else{
            bill_amount-=bill_amount*.15;
        }
    }
    if (bill_amount>=3000&&bill_amount<=5000)
    {
        if(loyalty_card){
            bill_amount-=bill_amount*.01;
        }
        else{
            bill_amount-=bill_amount*0.05;
        }
    }
    printf("The discounted bill is Rs .%.2f ",bill_amount);
    
    
}