#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number for output

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + digit;  // Build the reversed number
        num = num / 10;  // Remove the last digit
    }

    // Output the reversed number
    printf("The reversed number of %d is: %d\n", originalNum, reversedNum);

    return 0;
}
