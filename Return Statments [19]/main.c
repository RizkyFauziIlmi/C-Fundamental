#include <stdio.h>

// Function to calculate sum
int sum(int a, int b) {
   // Calculate the sum
   int result = a + b;

   // Return the result to the caller
   return result;
}

int main() {
   int x = 5;
   int y = 10;

   // Call the sum function and store the result in z
   int z = sum(x, y);

   // Print the sum
   printf("The sum of %d and %d is %d\n", x, y, z);

   // Return 0 to indicate successful program execution
   return 0;
}
