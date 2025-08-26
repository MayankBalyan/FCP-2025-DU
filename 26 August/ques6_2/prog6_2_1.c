//A fruit seller sells apples at Rs 120/kg and bananas at Rs 60/dozen. Write a program to take quantities of apples (in kg) and bananas (in dozens) as input and compute the total cost. He offers a 10% discuount if the total cost is over Rs 500
#include <stdio.h>
void main(){
    float apple,banana,totalcost;
    printf("Enter the quantity of Apples in kg:");
    scanf("%f",&apple);
    printf("Enter the quantity of Bananas in dozen:");
    scanf("%f",&banana);
    totalcost=(apple*120)+(banana*60);
    if(totalcost>500){
        totalcost-=(totalcost/10);
    }
    printf("The total cost of the purchase is %.2f Rupees",totalcost);
}