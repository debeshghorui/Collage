#include <stdio.h>

int main()
{
    float celsius_temperature, fahrenheit_temperature;

    printf("Temperature Conversion\n");

    // Celsius to Fahrenheit
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &celsius_temperature);
    float F_temperature = (celsius_temperature * 9 / 5) + 32; // Conversion formula
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius_temperature, F_temperature);

    // Fahrenheit to Celsius
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit_temperature);
    float C_temperature = (fahrenheit_temperature - 32) * 5 / 9; // Conversion formula
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit_temperature, C_temperature);

    return 0;
}