#include <stdio.h>

int main()
{
    float number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%f", &number);

    // Determine if the number is positive or negative
    const char *result[] = {"Negative", "Positive"};
    int index = (number >= 0) ? 1 : 0; // Using ternary operator to set index
    printf("%f is %s.\n", number, result[index]);

    return 0;
}
