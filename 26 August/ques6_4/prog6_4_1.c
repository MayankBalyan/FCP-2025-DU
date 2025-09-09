#include<stdio.h>
void main(){
    int win=89,a=1,guess;
    printf("Guess a number between 1 and 100 :");
    
    while (a)
    {
        scanf("%d",&guess);
        if (guess>win){
            printf("guessed no is larger than answer Guess Again :");
        }
        else if(guess<win){
            printf("guessed no is smaller than answer Guess Again :");
        }
        else{
            printf("You Win !!");
            break;
        }

    }
    
}