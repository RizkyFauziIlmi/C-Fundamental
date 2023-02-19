#include <stdio.h>

int main()
{

    char operator;
    double num1, num2, result;

    printf("Enter the operator (* / + -): ");
    scanf("%c", &operator);

    switch (operator) {
        case '*':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            printf("%lf %c %lf is equal to %lf", num1, operator, num2, result);
            break;
        case '+':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            printf("%lf %c %lf is equal to %lf", num1, operator, num2, result);
            break;
        case '-':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            printf("%lf %c %lf is equal to %lf", num1, operator, num2, result);
            break;
        case '/':
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
            result = num1 / num2;
            printf("%lf %c %lf is equal to %lf", num1, operator, num2, result);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}