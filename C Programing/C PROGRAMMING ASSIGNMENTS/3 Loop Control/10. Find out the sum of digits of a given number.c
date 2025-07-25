#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Find the sum of digits
    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num = num / 10;    // Remove the last digit from the number
    }

    // Output the sum of digits
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
