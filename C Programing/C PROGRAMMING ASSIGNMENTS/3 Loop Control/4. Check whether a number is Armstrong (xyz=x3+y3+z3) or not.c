#include <stdio.h>
#include <math.h>  // For the pow function

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Find the number of digits (n)
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate the sum of nth power of each digit
    while (num != 0) {
        remainder = num % 10;  // Extract the last digit
        result += pow(remainder, n);  // Add the nth power of the digit to the result
        num /= 10;  // Remove the last digit
    }

    // Check if the result is equal to the original number
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
