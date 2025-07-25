/*
      A 
    A B A
  A B C B A
A B C D C B A
  A B C B A
    A B A
      A

*/
#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the top half of the pattern

    // Print the top half of the pattern
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        
        // Print increasing letters
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        
        // Print decreasing letters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    // Print the bottom half of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        
        // Print increasing letters
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        
        // Print decreasing letters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
