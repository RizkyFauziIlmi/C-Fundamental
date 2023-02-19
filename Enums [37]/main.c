#include <stdio.h>

// define enum type named day
enum day
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

// main function
int main()
{
    // define variable named today with type day and initialize it to Sun
    enum day today = Sun;

    // check if today is Sun or Sat (weekend)
    if (today == Sun || today == Sat)
    {
        printf("Weekend");
    }
    else // if today is not Sun or Sat (weekday)
    {
        printf("I must study today :(");
    }

    return 0; // exit program
}
