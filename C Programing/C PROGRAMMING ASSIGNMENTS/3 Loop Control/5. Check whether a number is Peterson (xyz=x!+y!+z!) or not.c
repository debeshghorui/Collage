#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, result = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Calculate the sum of factorials of each digit
    while (num > 0) {
        remainder = num % 10;  // Extract the last digit
        result += factorial(remainder);  // Add the factorial of the digit to the result
        num /= 10;  // Remove the last digit
    }

    // Check if the result is equal to the original number
    if (result == originalNum) {
        printf("%d is a Peterson number.\n", originalNum);
    } else {
        printf("%d is not a Peterson number.\n", originalNum);
    }

    return 0;
}
