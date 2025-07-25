/*
A B C D E F G H 
A B C     F G H 
A B         G H 
A             H 
A B         G H 
A B C     F G H 
A B C D E F G H 
*/
#include <stdio.h>

int main() {
    // Define the letters A to H
    char letters[] = "ABCDEFGH";
    int n = 8; // Total number of letters

    // Define which letters to print on each line (1 for print, 0 for skip)
    int pattern[7][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 0, 0, 0, 0, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 0, 0, 0, 0, 1, 1},
        {1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };

    // Loop through each row in the pattern
    for (int i = 0; i < 7; i++) {
        // Loop through each letter in the row
        for (int j = 0; j < n; j++) {
            if (pattern[i][j] == 1) {
                printf("%c ", letters[j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
