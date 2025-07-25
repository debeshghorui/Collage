#include <stdio.h>
int main()
{
    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area of the rectangle
    area = length * width;
    // Calculate the perimeter of the rectangle
    perimeter = 2 * (length + width);

    // Output the area of the rectangle
    printf("The area of the rectangle is: %.2f\n", area);
    // Output the perimeter of the rectangle
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}