#include<stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap using XOR
    num1 = num1 ^ num2;  // Step 1: XOR both numbers
    num2 = num1 ^ num2;  // Step 2: XOR the result with num2
    num1 = num1 ^ num2;  // Step 3: XOR the result with num1

    // Output the swapped values
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
