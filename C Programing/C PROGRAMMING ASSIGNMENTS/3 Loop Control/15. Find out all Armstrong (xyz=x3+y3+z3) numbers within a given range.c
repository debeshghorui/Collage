#include <stdio.h>

int main() {
    int lower, upper;

    // Input the range
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    // Loop through the range
    for (int num = lower; num <= upper; num++) {
        int originalNum = num;
        int sum = 0, remainder, digits = 0;

        // Find the number of digits
        int tempNum = num;
        while (tempNum != 0) {
            digits++;
            tempNum /= 10;
        }

        // Calculate the sum of the digits raised to the power of the number of digits
        tempNum = num;
        while (tempNum != 0) {
            remainder = tempNum % 10;
            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= remainder;  // Raising to the power
            }
            sum += power;
            tempNum /= 10;
        }

        // Check if sum of powers equals the original number
        if (sum == originalNum) {
            printf("%d ", originalNum);
        }
    }

    printf("\n"); // New line after the list of Armstrong numbers
    return 0;
}
