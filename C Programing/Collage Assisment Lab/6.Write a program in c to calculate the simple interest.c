#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Prompt the user for input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the simple interest
    interest = (principal * rate * time) / 100;

    // Display the result
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}
