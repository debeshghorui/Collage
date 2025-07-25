#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i; // Add 1/i to the sum
    }

    // Print the result
    printf("The sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %.2f\n", n, sum);

    return 0;
}
