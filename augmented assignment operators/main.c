#include <stdio.h>

int main()
{
    /* augmented assignment operators = use to replace a statment where an operator
                                        takes a variables as one of its arguments
                                        and then assigns the result back to the same variable.
                                        e.g: x += 2, x -= 2, x *= 2, x /= 2, x %= 2
    */

    int x = 10;

    x = x + 2;
    printf("x = x + 2: %d\n", x);

    x += 2;
    printf("x += 2: %d\n", x);

    return 0;
}