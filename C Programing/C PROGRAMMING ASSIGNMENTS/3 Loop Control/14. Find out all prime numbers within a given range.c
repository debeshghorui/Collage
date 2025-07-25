#include <stdio.h>

int main() {
    int lower, upper;

    // Input the range
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Loop through the range
    for (int num = lower; num <= upper; num++) {
        int isPrime = 1; // Flag to check if the number is prime

        // Check if num is less than 2 (not prime)
        if (num < 2) {
            continue;
        }

        // Check for factors from 2 to the square root of num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break; // No need to check further
            }
        }

        // If isPrime remains 1, num is prime
        if (isPrime) {
            printf("%d ", num);
        }
    }
    
    printf("\n"); // New line after the list of primes
    return 0;
}
