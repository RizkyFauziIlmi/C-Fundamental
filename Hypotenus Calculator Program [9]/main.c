#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Enter a side: ");
    scanf("%lf", &a);

    printf("Enter b side: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("C side is equal to: %lf", c);


    return 0;
}