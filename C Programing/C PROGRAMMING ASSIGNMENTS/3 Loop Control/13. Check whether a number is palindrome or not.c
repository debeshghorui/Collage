#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + digit;  // Build the reversed number
        num = num / 10;  // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
