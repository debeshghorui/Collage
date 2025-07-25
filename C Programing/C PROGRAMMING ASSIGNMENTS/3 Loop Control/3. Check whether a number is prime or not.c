#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // isPrime will remain 1 if the number is prime

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases for 0 and 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Loop from 2 to the square root of num (no need to check beyond that)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {  // Check if num is divisible by i
            isPrime = 0;  // num is not prime
            break;  // No need to check further
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
