#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, simpleInterest, compoundInterest;

    // Input principal, rate, and time
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Output the results
    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}