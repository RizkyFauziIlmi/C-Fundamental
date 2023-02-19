#include <stdio.h>
#include <stdbool.h>

int main() {

    // * !smart is equal to smart == false

    bool smart = false;

    if (!smart) {
        printf("You are not smart\n");
    } else {
        printf("You are smart\n");
    }

    return 0;
}