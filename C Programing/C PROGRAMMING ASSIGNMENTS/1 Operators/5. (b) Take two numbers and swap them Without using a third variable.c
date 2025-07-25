#include<stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap using arithmetic operations
    num1 = num1 + num2;  // Step 1: Add both numbers
    num2 = num1 - num2;  // Step 2: Subtract the new num2 from the sum
    num1 = num1 - num2;  // Step 3: Subtract the new num1 from the sum

    // Output the swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
