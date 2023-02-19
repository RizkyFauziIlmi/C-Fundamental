#include <stdio.h>

int main() {
    // initialize an array of integers with 5 elements
    int numbers[5] = {10, 20, 30, 40, 50};

    // print out the values of the array
    printf("Numbers: ");
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0; // exit program
}
