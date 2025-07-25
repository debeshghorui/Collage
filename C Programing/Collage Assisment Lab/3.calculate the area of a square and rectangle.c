#include <stdio.h>

int main() {
    float side, length, width, areaSquare, areaRectangle;

    // Input for square
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate the area of the square
    areaSquare = side * side;

    // Output the area of the square
    printf("The area of the square is: %.2f\n", areaSquare);

    // Input for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    areaRectangle = length * width;

    // Output the area of the rectangle
    printf("The area of the rectangle is: %.2f\n", areaRectangle);

    return 0;
}
