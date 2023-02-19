#include <stdio.h>

/*  
    * with arguments functions are more flexible, now we can pass variables 
    * to function so that the output is in accordance with what we want
*/

void sayHelloWithNameAndAge(char name[], int age) {
    printf("Hello, %s!\n", name);
    printf("You are %d years old.\n", age);
}

int main() {

    char name[] = "John";
    int age = 25;

    sayHelloWithNameAndAge(name, age);

    return 0;
}