#include <stdio.h>

int main() {
    int num, count = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the number is 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Count the digits by dividing the number by 10 repeatedly
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    // Output the number of digits
    printf("The number of digits is: %d\n", count);

    return 0;
}
