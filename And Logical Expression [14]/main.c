#include <stdio.h>
#include <stdbool.h>

int main() {

    // * if we use && operator, the condition will be true if all the conditions are true

    bool rain = false, strom = false;

    if (rain && strom) {
        printf("Rain and strom\n");
    } else if (rain && !strom) {
        printf("Rain and no strom\n");
    } else {
        printf("No rain or strom\n");
    }

    return 0;
}