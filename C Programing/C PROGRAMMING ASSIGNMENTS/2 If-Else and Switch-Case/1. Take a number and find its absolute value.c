#include <stdio.h>

int main()
{
    int num, absoluteValue;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // If-Else to calculate the absolute value
    if (num < 0)
    {
        absoluteValue = -num;
    }
    else
    {
        absoluteValue = num;
    }

    // Output the result
    printf("The absolute value of %d is: %d\n", num, absoluteValue);

    return 0;
}