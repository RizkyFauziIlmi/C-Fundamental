#include <stdio.h>

int main() {
    // initialize an array of integers with 5 elements
    int numbers[5] = {10, 20, 30, 40, 50};

    // print out the values of the array
    printf("Numbers: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    // modify one of the values of the array
    numbers[2] = 35;

    // print out the modified array
    printf("Modified numbers: %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    return 0; // exit program
}
