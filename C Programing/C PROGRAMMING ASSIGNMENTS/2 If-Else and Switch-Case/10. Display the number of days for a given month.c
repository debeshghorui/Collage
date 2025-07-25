/*E.g.– User’s choice
1. January, Output– 31,
2. February– Output– 28 (Need not consider leap year)*/

#include <stdio.h>

int main() {
    int month;

    // Input month number from the user
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Display the number of days based on the month
    switch (month) {
        case 1: // January
            printf("January has 31 days.\n");
            break;
        case 2: // February
            printf("February has 28 days.\n"); // Not considering leap years
            break;
        case 3: // March
            printf("March has 31 days.\n");
            break;
        case 4: // April
            printf("April has 30 days.\n");
            break;
        case 5: // May
            printf("May has 31 days.\n");
            break;
        case 6: // June
            printf("June has 30 days.\n");
            break;
        case 7: // July
            printf("July has 31 days.\n");
            break;
        case 8: // August
            printf("August has 31 days.\n");
            break;
        case 9: // September
            printf("September has 30 days.\n");
            break;
        case 10: // October
            printf("October has 31 days.\n");
            break;
        case 11: // November
            printf("November has 30 days.\n");
            break;
        case 12: // December
            printf("December has 31 days.\n");
            break;
        default:
            printf("Error: Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
