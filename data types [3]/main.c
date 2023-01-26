#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'a';          // Single character %c
    char name[] = "Rizky"; // String %s

    float phi = 3.14;                // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double phiNumber = 3.1415926535; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool male = true; // 1 byte (true or false) %d

    // char f = 100;          // 1 byte (-128 to +127) %d or %c
    // unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    // short int h = 32767;         // 2 bytes (-32,768 to +32,767) %d
    // unsigned short int i = 65535 // 2 bytes (0 to 65,535) %d

    // int j = 2147483647;          // 4 bytes (-2,147,483,648 to -2,147,483,647) %d
    // unsigned int k = 4294967295L // 4 bytes (0 to +4,294,967,295) %u

    // long long int =  9223372036854775807; // 8 bytes (-9 quitillion to +9 quitillion) %lld
    // unsigned long long int = 18446744073709551615U; // 8 bytes (0 to +18 quitillion) %llu

    printf("char: %c\n", a);
    printf("string: %s\n", name);
    printf("flaot: %f\n", phi);
    printf("phiNumber: %l\n", phiNumber);
    printf("boolean: %d (true = 1 & false = 0)\n", male);

    return 0;
}