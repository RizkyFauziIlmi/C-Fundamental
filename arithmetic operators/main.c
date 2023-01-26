#include <stdio.h>

int main() {

    // arithmetic operators

    //  + (addition)
    //  - (subtraction)
    //  * (multplication)
    //  / (division)
    //  % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    printf("5 * 2: %d\n", x * y);
    printf("5 - 2: %d\n", x - y);
    printf("5 / 2: %.1f\n", x / (float)y);
    printf("5 modulus 2: %d\n", x % y);

    x++;
    printf("increment 5: %d\n", x);

    y--;
    printf("decrement 2: %d\n", y);

    return 0;
}