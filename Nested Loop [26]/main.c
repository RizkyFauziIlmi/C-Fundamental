#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 10;

    // outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // inner loop for columns
        for (int j = 1; j <= cols; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n"); // print newline after each row
    }

    return 0; // exit program
}
