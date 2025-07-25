/*
      * 
    * *
  * * *
* * * * * * * *
  * * *
    * *
      *
*/
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the top half of the diamond

    // Print the top half of the diamond
    for (int i = 1; i <= rows - 1; i++) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf("  ");
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Print the middle row of the diamond
    for (int j = 0; j <= 7; j++) {
        printf("* ");
    }
    printf("\n");

    // Print the bottom half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = rows; j > i; j--) {
            printf("  ");
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
