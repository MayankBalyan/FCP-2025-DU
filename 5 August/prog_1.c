#include <stdio.h>

int main() {
    int num;
    int anothernum;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("You entered: %d ",num);  // Missing: print num
    
    printf("Enter another integer: ");
    scanf("%d", &anothernum); //Missing: enter another number
    
    printf("You entered: ",anothernum);  // Missing: print another number

    return 0;
}
