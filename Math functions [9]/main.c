#include <stdio.h>
#include <math.h>

int main() {
    
    double squareRoot = sqrt(9);
    double power = pow(2, 3);
    int roundNumber = round(3.14);
    int ceilNumber = ceil(3.14);
    int floorNumber = floor(3.14);
    double absolute = fabs(-100);
    double logNumber = log(3);
    double sinNumber = sin(45);
    double cosNumber = cos(45);
    double tanNumber = tan(45);

    printf("square root of 9 is %lf\n", squareRoot);
    printf("2 power 3 is %lf\n", power);
    printf("round 3.14 is %d\n", roundNumber);
    printf("ceil 3.14 is %d\n", ceilNumber);
    printf("floor 3.14 is %d\n", floorNumber);
    printf("absolute -100 is %lf\n", absolute);
    printf("log 3 is %lf\n", logNumber);
    printf("sin 45 is %lf\n", sinNumber);
    printf("cos 45 is %lf\n", cosNumber);
    printf("tan 45 is %lf\n", tanNumber);
    
    return 0;
}