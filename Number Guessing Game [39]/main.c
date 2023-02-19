#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // define the range of the random number to be generated
    const int MAX = 100;
    const int MIN = 1;
    // initialize the variables to store the user's guess, the correct answer, and the number of attempts
    int guess, answer, attempts = 0;

    // set the seed for the random number generator
    srand(time(NULL));
    // generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    // loop until the user guesses the correct answer
    while (guess != answer)
    {
        // prompt the user to enter their guess
        printf("Your Guess: ");
        scanf("%d", &guess);
        // increment the number of attempts
        attempts++;
        // clear the console
        system("clear");
        // provide feedback on the user's guess
        if (guess < answer)
        {
            printf("\nYour Guess should be more!\n");
        }
        else if (guess > answer)
        {
            printf("\nYour Guess should be less!\n");
        }
    }

    // print the final message to the user with the number of attempts and the correct answer
    printf("\nYou are Correct with (%d) guesses!, answer is %d\n", attempts, answer);

    return 0;
}
