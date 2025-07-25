#include <stdio.h>

int main()
{
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Determine if the number is odd or even using modulus operator
    const char *result[] = {"Even", "Odd"};
    printf("%d is %s.\n", number, result[number % 2]);

    return 0;
}