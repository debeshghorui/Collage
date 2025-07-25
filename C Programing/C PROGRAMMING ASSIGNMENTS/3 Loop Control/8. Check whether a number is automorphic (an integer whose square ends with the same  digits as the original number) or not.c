#include <stdio.h>

int main() {
    int num, square, temp, lastDigits;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the square of the number
    square = num * num;

    // Copy the original number to a temporary variable
    temp = num;

    // Find the last digits of the square equal to the length of the original number
    lastDigits = square % (int)pow(10, (int)log10(num) + 1);

    // Check if the last digits of the square are the same as the original number
    if (lastDigits == num) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}
