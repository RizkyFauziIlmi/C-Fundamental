#include <stdio.h>

// Define a new type called 'point' that is a struct with two integer fields, 'x' and 'y'
typedef struct
{
    int x;
    int y;
} point;

// Define a new type called 'name' that is an array of 25 characters
typedef char name[25];

// Main function
int main()
{
    // Declare a variable 'p' of type 'point' and initialize it with values 1 and 2
    point p = {1, 2};

    // Declare a variable 'myName' of type 'name' and initialize it with a string literal "John Doe"
    name myName = "John Doe";

    // Print the values of the 'x' and 'y' fields of the 'point' variable 'p'
    printf("Point: (%d, %d)\n", p.x, p.y);

    // Print the value of the 'name' variable 'myName'
    printf("Name: %s\n", myName);

    // Return 0 to indicate successful program execution
    return 0;
}
