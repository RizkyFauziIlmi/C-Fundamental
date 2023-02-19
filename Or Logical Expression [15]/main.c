#include <stdio.h>
#include <stdbool.h>

int main() {

    //  * if we use || operator, the condition will be true if atleast one condition is true

    bool smart = true, tall = false;

    if (smart || tall) {
        printf("you are smart or tall or even both");
    } else {
        printf("you are not smart or tall or neither");
    }


    return 0;
}