#include <stdio.h> //Missing: For input/output
#include <time.h> //Missing: For system time

//Missing: describe the program
//To fetch the current time from the computer and display it on the screen
int main() {
    time_t t;
    time(&t);

    printf("Current time: %s", ctime(&t));

    return 0;
}

