#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // set seed for generate number randomly
    srand(time(NULL));

    // Generate 10 random number between 0 and 99
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", rand() % 100);
    }
    printf("\n");

    return 0;
}
