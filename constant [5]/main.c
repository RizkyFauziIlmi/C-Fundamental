#include <stdio.h>

int main() {

    // constant = field value that cannot be altered by the program during its execution

    const float PHI = 3.14159;

    // PHI = 3; // ERROR: expression must be a modifiable value 

    printf("%f\n", PHI);

    return 0;
}