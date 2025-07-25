#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate the sum of proper divisors
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == num) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
