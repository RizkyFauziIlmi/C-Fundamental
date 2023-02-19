#include <stdio.h>

int main()
{
    // example using break
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // exit loop when i reaches 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // example using continue
    for (int j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            continue; // skip even numbers
        }
        printf("%d ", j);
    }
    printf("\n");

    return 0; // exit program
}
