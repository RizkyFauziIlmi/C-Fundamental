#include <stdio.h>

/*  
    * So in summary, the function prototype allows us to declare the function before 
    * its implementation, which enables us to call the function before it is defined. 
    * This can be useful when the function implementation is located in a separate 
    * source file or later in the same source file.
*/

// Function prototype
int findHighest(int num1, int num2);

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

// Function implementation
int findHighest(int num1, int num2) {
   // Use ternary operator to determine highest number
   int highest = (num1 > num2) ? num1 : num2;

   // Return the highest number
   return highest;
}