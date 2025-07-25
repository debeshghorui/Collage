#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    // Print the first two terms
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);  // First term is 0
        } else if (i == 1) {
            printf("%d ", second);  // Second term is 1
        } else {
            next = first + second;  // Calculate the next term
            printf("%d ", next);
            first = second;         // Move the sequence forward
            second = next;
        }
    }

    printf("\n"); // New line after the series
    return 0;
}