#include <stdio.h>

int main()
{
    int lower, upper;

    // Input the range
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    // Loop through the range
    for (int num = lower; num <= upper; num++)
    {
        // Assume the number is prime
        int isPrime = 1;

        // Check if num is prime
        if (num <= 1)
        {
            isPrime = 0; // Numbers less than or equal to 1 are not prime
        }
        else
        {
            for (int i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    isPrime = 0; // num is divisible by i, so it's not prime
                    break;       // No need to check further
                }
            }
        }

        // If the number is prime, print it
        if (isPrime)
        {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
