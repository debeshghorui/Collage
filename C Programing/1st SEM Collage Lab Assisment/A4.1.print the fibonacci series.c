#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2); // Printing the first two terms

    // Use a loop to calculate and print the next terms
    int i = 3; // Start from the 3rd term since the first two are printed
    while (i <= n)
    {
        nextTerm = t1 + t2; // Next term is the sum of the previous two terms
        printf(", %d", nextTerm);

        // Update the terms
        t1 = t2;
        t2 = nextTerm;

        i++;
    }

    printf("\n");

    return 0;
}
