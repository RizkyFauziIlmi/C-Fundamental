#include <stdio.h>
#include <ctype.h>

int main() {
    
    char unit;
    float temp;

    printf("Enter unit (C) or (F): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("Enter temperature (C): ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("temperature in Farenheit: %f\n", temp);
    } else if (unit == 'F') {
        printf("Enter temperature (F): ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("temperature in Celcius: %f\n", temp);
    } else {
        printf("Unit must be (C) or (F) not %c\n", unit);
    }

    return 0;
}