#include <stdio.h>

/*
    Title: Area of Circle
    Filename:prog_24.c
    Run command:gcc prog_24.c   a.exe
    Author: Mayank Balyan
    Description: To calculate thae area of circle witha given radius
    Date: 12 August
*/

int main() {
    float radius, area;

    // Prompt user to enter radius
    printf("Enter the radius of the circle :");

    // Read the radius
    scanf("%f",&radius);

    // Calculate area using formula
    area=3.14*radius*radius;

    // Print the result
    printf(" The area of the circle with the given radius is : %f",area);

    return 0;
}

