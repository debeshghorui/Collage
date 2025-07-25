#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    double sum = 0.0;
    unsigned long long factorial = 1; // Variable to hold the factorial value

    // Input the value of x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 0; i <= n; i++)
    {
        if (i > 0)
        {
            factorial *= i; // Calculate i! iteratively
        }
        sum += (pow(x, i) / factorial); // Add x^i / i! to the sum
    }

    // Print the result
    printf("The sum of the series x + x^2/2! + x^3/3! + ... + x^n/n! is: %.6f\n", sum);

    return 0;
}
