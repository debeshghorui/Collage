/*
   *
  ***
 *****
*******
 *****
  ***
   *
   *
  ***
 *****
   *
   *
   *
*/
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the top half of the diamond

    // Print the diamond shape (top half)
    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars for the current row
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }

    // Print the diamond shape (bottom half)
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces before the stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars for the current row
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");
    }

    // Print the inverted triangle
    for (int i = 1; i <= rows - 1; i++) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf(" ");
        }

        // Print stars for the current row
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n"); // Move to the next line
    }

    // Print the vertical line of stars at the bottom
    for (int i = 1; i <= rows - 1; i++) {
        // Print leading spaces for alignment
        printf("   *\n");
    }

    return 0;
}
