#include <stdio.h>
#include <math.h>

int main() {

    const double phi = 3.14159;
    double radius, circumference, area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * radius * phi;
    
    // ! Not work for gcc (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0 
    // area = phi * pow(radius, 2);

    area = phi * radius * radius;

    printf("the circumference of a circle is: %lf\n", circumference);
    printf("the area of a circle is: %lf\n", area);

    return 0;
}