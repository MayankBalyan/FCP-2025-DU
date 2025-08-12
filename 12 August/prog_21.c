#include <stdio.h> //Missing: For input/output
#include <time.h> //Missing: For system time

//Missing: describe the program
// 
int main() {
    time_t t;
    time(&t);

    printf("Current time: %s", ctime(&t));

    return 0;
}

