#include <stdio.h>

int main() {
    int rows = 4; // The number of rows in the top half of the pattern

    // Print the top half of the pattern
    for (int i = 1; i <= rows; i++) {
        // Print the left stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        // Print spaces
        for (int j = 1; j <= 2 * (rows - i) - 1; j++) {
            printf("  ");
        }

        // Print the right stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n"); // Move to the next line
    }

    // Print the middle row of the pattern
    for (int j = 1; j <= 2 * rows - 1; j++) {
        printf("* ");
    }
    printf("\n");

    // Print the bottom half of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        // Print the left stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        // Print spaces
        for (int j = 1; j <= 2 * (rows - i) - 1; j++) {
            printf("  ");
        }

        // Print the right stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
