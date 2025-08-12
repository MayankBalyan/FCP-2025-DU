#include <stdio.h>  // Missing: For input/output
#include <ctype.h>  // Missing: For character handling

//Missing: describe the program
//To input the a uppercase character and convert it into lower case

int main() {
    char ch;

    printf("Enter an uppercase letter: ");
    scanf(" %c", &ch);

    printf("Lowercase: %c\n", tolower(ch));

    return 0;
}

