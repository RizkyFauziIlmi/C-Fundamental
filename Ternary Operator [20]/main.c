#include <stdio.h>

// Function to find the highest number among two input integers
int findHighest(int num1, int num2) {
   int highest = (num1 > num2) ? num1 : num2;
   return highest;
}

int main() {
   int x = 10;
   int y = 20;

   // Call the findHighest function and store the result in highest
   int highest = findHighest(x, y);

   // Print the highest number
   printf("The highest number is %d\n", highest);

   // Return 0 to indicate successful program execution
   return 0;
}
