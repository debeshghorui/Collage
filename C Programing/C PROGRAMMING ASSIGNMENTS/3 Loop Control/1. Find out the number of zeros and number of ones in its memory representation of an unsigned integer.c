#include <stdio.h>

int main() {
    unsigned int n, count_ones = 0, count_zeros = 0;
    printf("Enter an unsigned integer: ");
    scanf("%u", &n);

    for (int i = 0; i < 32; i++) {
        if (n & (1 << i))
            count_ones++;
        else
            count_zeros++;
    }

    printf("Number of ones: %u\n", count_ones);
    printf("Number of zeros: %u\n", count_zeros);

    return 0;
}
