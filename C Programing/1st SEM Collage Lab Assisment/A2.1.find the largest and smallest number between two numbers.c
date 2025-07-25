#include <stdio.h>

int main() 
{
    int num1, num2, largest, smallest;

    /* Ask user for input */
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    /* Find largest and smallest numbers */
    if (num1 > num2) 
    {
        largest = num1;
        smallest = num2;
    } 
    else 
    {
        largest = num2;
        smallest = num1;
    }

    /* Print results */
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}