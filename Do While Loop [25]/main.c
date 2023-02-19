#include <stdio.h>

int main() {
    int i = 1; // initialize counter

    // do-while loop
    do {
        printf("%d\n", i); // print current value of counter
        i++; // increment counter
    } while (i <= 5); // repeat loop while counter is less than or equal to 5

    return 0; // exit program
}
