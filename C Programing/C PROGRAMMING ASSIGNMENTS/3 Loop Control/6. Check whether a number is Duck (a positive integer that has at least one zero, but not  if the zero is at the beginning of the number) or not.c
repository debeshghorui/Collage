#include <stdio.h>

int main() {
    int num, hasZero = 0, firstDigit = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // If the number starts with 0, it's not a Duck number
    if (num <= 0) {
        printf("%d is not a Duck number.\n", num);
        return 0;
    }

    // Process each digit of the number
    while (num > 0) {
        int digit = num % 10;  // Get the last digit

        // Check if the number starts with a zero (leading zero case)
        if (firstDigit && digit == 0) {
            printf("Not a Duck number.\n");
            return 0;
        }

        // If the digit is zero, mark that it contains a zero
        if (digit == 0) {
            hasZero = 1;
        }

        // Remove the last digit from the number
        num /= 10;

        // After the first iteration, the number's first digit has been checked
        firstDigit = 0;
    }

    // Check if the number had a zero
    if (hasZero) {
        printf("It is a Duck number.\n");
    } else {
        printf("It is not a Duck number.\n");
    }

    return 0;
}
