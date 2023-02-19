#include <stdio.h>
#include <string.h>

int main() {

    char name[25];
    int age;

    printf("Enter your name: ");
    // * Notice that we dont use scanf because we want to include whitespace
    fgets(name, 25, stdin);
    // * If we use fgets it will print \n in the end, to prevent this do the code above
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    //  * If you use scanf dont forget to type & for the address
    scanf("%d", &age);

    printf("Hello %s", name);
    printf("\nYou are %d years old", age);

    return 0;
}