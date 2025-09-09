
// Question :Write a C program that simulates a simple ATM cash withdrawal system with the
// following requirements
//  Check if the account has sufficient balance before allowing withdrawal.
//  Ensure the withdrawal amount is in multiples of Rs 100.
//  Verify that the withdrawal limit of Rs 10,000 is not exceeded.
//  Display appropriate messages if any of the above conditions fail.
//  Display the balance on successful withdrawal.
// Your program should take the withdrawal amount as input and output messages
// indicating success or failure according to the conditions above. You can hardcode
// the starting balance.
#include <stdio.h>
void main(){
    int current_balance=100000,withdrawl_amount;
    printf("Enter the amount of money to withdraw :");
    scanf("%d",&withdrawl_amount);
    if(withdrawl_amount>current_balance){
        printf("Transaction Failed ! Not enough Balance !!");
    }
    else if(withdrawl_amount%100!=0){
        printf("Transaction Failed ! The amount should be in the multiple of 100.");
    }
    else if(withdrawl_amount>10000){
        printf("Transaction Failed ! The amount entered is above limit.");
    }
    else{
        current_balance-=withdrawl_amount;
        printf("Transaction Successful ! Current Balance : %d",current_balance);
    }
    
}