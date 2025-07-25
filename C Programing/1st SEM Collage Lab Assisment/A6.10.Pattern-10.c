/*
* * * * * * * * 
*             * 
*             * 
*             * 
*             * 
*             * 
*             * 
* * * * * * * * 
*/
#include <stdio.h>

int main() {
    int size = 8; // Size of the square

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for the borders; print space for the hollow area
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
