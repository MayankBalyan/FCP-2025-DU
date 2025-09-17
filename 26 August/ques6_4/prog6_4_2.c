#include <stdio.h>
void main(){
    printf("Welcome to our calculator !!");
    float num1,num2,ans;
    int operand,exit;
    do
    {
        printf("Enter \n1 for addition \n2 for subtraction\n3 for Multiplication\n4 For division");
        scanf("%d",&operand);
        printf("Enter 1st number :");
        scanf("%f",&num1);
        printf("Enter 2nd number :");
        scanf("%f",&num2);
        switch (operand)
        {
        case (1):
            ans=num1+num2;
            printf("%.2f",ans);
            break;
        case (2):
            ans=num1-num2;  
            printf("%.2f",ans);
            break;
        case (3):
            ans=num1*num2;
            printf("%.2f",ans);
            break;
        case (4):
            ans=num1/num2;
            printf("%.2f",ans);
            break;
        
        
        default:
            printf("Use Proper operator");
            break;
        }
        printf("Enter 0 to exit 1 to continue:");
        scanf("%d\n",&exit);



    } while (exit!=0);
    

}