#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Use bitwise AND with the sign bit to check if the number is negative
    if (num >> 31 & 1) {  // Shift right by 31 to isolate the sign bit
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is a positive number.\n", num);
    }

    return 0;
}
