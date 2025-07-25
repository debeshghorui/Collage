#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;  // Using unsigned long long to handle large results

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Output the factorial
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
