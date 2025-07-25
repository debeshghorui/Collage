/*
      *             * 
    * * *         * * *
  * * * * *     * * * * *
* * * * * * * * * * * * * *
  * * * * *     * * * * *
    * * *         * * *
      *             *
*/
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the top half of the pattern

    // Print the top half of the pattern
    for (int i = 1; i <= rows - 1; i++) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf("  ");
        }

        // Print left stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        // Print middle spaces
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf("  ");
        }

        // Print right stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Print the bottom half of the pattern
    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf("  ");
        }

        // Print left stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        // Print middle spaces
        for (int j = 1; j <= 2 * (rows - i); j++) {
            printf("  ");
        }

        // Print right stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
