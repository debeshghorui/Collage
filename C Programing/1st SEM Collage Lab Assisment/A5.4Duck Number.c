#include <stdio.h>
#include <stdlib.h>

int main()
{
    int OrgnalNumber, DuckNumber, flg; // Variable declaration: OrgnalNumber stores the original number, DuckNumber stores the number for manipulation, r stores the remainder, flg is a flag for checking

    flg = 0; // Initializing flag to 0

    // Printing information about the program and asking for user input
    printf("\n\n    Check whether a number is a Duck Number or not: \n");
    printf(" ----------------------------------------------------\n");
    printf(" Input a number: ");
    scanf("%d", &DuckNumber); // Reading input from the user
    OrgnalNumber = DuckNumber;         // Storing the original number

    while (DuckNumber > 0) // Loop to check if the number is a Duck Number
    {
        if (DuckNumber % 10 == 0) // Checking if any digit of the number is zero
        {
            flg = 1; // Setting flag to 1 if zero is found
            break;   // Exiting the loop if zero is found
        }
        DuckNumber /= 10; // Moving to the next digit in the number
    }

    if (OrgnalNumber > 0 && flg == 1) // Checking if the original number is positive and a zero was found
    {
        printf(" The given number is a Duck Number.\n"); // Printing if the number is a Duck Number
    }
    else
    {
        printf(" The given number is not a Duck Number.\n"); // Printing if the number is not a Duck Number
    }

    return 0; // Returning 0 to indicate successful execution
}
