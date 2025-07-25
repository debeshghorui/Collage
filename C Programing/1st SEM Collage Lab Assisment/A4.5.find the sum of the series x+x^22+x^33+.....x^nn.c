#include <stdio.h>
#include <math.h> // For pow() function

int main()
{
    int x, n;
    double sum = 0.0;

    // Input the value of x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i) / i; // Add x^i / i to the sum
    }

    // Print the result
    printf("The sum of the series x + x^2/2 + x^3/3 + ... + x^n/n is: %.2f\n", sum);

    return 0;
}
