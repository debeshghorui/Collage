#include <stdio.h>

int main() 
{
    float side, length, width, perimeterSquare, perimeterRectangle;

    // Input for square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate the perimeter of the square
    perimeterSquare = 4 * side;

    // Output the perimeter of the square
    printf("The perimeter of the square is: %.2f\n", perimeterSquare);

    // Input for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the perimeter of the rectangle
    perimeterRectangle = 2 * (length + width);

    // Output the perimeter of the rectangle
    printf("The perimeter of the rectangle is: %.2f\n", perimeterRectangle);

    return 0;
}
