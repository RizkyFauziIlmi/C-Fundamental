#include <stdio.h>

int main()
{

    /*
    *   if (condition) {
    *     if (condition) {
    *        ...
    *     } else if (condition){
    *        ...
    *     } else {
    *        ...
    *     }
    *   }
    */

    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are old enough\n");
    } else if (age == 0) {
        printf("You are just born\n");
    } else {
        printf("You are too young\n");
    }

    return 0;
}