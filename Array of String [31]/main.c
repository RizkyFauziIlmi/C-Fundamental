#include <stdio.h>

int main() {
    // initialize an array of strings with 3 elements
    char words[3][10] = {
        "hello",
        "world",
        "howdy"
    };

    // print out the strings in the array
    printf("Words:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", words[i]);
    }

    return 0; // exit program
}
