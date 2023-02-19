#include <stdio.h>

int main()
{

    /*
    *   switch (variable) {
    *       case condition:
    *           ...
    *           break;
    *       case condition:
    *           ...   
    *           break
    *       default:
    *           ...
    *           break;
    *    }
    */ 

    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Awesome, you are the best!\n");
        break;
    case 'B':
        printf("decent\n");
        break;
    case 'C':
        printf("ok\n");
        break;
    default:
        printf("else");
        break;
    }

    return 0;
}