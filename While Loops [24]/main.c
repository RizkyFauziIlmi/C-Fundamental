#include <stdio.h>
#include <stdlib.h> // for system function

int main()
{
    int choice = 0; // initialize variable to store user's choice

    while (choice != 4)
    { // repeat loop while user has not chosen to quit
        // clear screen
        system("clear");

        // display menu options to user
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");

        // read user's choice from input
        scanf("%d", &choice);

        // perform action based on user's choice
        switch (choice)
        {
        case 1:
            printf("You chose option 1\n");
            break;
        case 2:
            printf("You chose option 2\n");
            break;
        case 3:
            printf("You chose option 3\n");
            break;
        case 4:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice, please try again\n");
            break;
        }
        getchar(); // consume extra newline character from input buffer
        printf("Press Enter to continue...");
        getchar(); // wait for user to press Enter
    }

    return 0; // exit program
}
