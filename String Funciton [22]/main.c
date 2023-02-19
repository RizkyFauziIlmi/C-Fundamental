#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello, ";
    char str2[20] = "world!";
    char str3[20];

    // strlen - returns the length of a string
    printf("Length of str1: %ld\n", strlen(str1));

    // strcat - concatenates two strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strcpy - copies one string to another
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // strcmp - compares two strings
    int cmp = strcmp(str1, str2);
    if (cmp == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (cmp < 0)
    {
        printf("str1 is less than str2.\n");
    }
    else
    {
        printf("str1 is greater than str2.\n");
    }

    // strstr - finds a substring within a string
    char *substr = strstr(str1, "world");
    printf("Substring found: %s\n", substr);

    return 0;
}
