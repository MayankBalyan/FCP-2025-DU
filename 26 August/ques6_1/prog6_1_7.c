//Write a C program to read three integers representing day, month, and year from the user, and then display them in the format DD/MM/YYYY
#include <stdio.h>
void main(){
    int date,month,year;
    printf ("Enter your date : ");
    scanf("%d",&date);
    printf ("Enter your month : ");
    scanf("%d",&month);
    printf ("Enter your year : ");
    scanf("%d",&year);
    printf("The formatted date :%02d / %02d / %04d",date,month,year);

}