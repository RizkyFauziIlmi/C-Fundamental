#include <stdio.h>
#include <string.h>

int main()
{
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // swap the values of a and b using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    char str1[] = "Hello";
    char str2[] = "World";

    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);

    // swap the values of str1 and str2 using a temporary buffer
    char tempString[strlen(str1) + 1];
    strcpy(tempString, str1);
    strcpy(str1, str2);
    strcpy(str2, tempString);

    printf("After swap: str1 = %s, str2 = %s\n", str1, str2);

    return 0; // exit program
}
