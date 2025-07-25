#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients a, b, and c
    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, zero, or negative
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two real and distinct roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // One real and repeated root
        root1 = -b / (2 * a);
        printf("The equation has one real and repeated root: %.2f\n", root1);
    } else {
        // Discriminant is negative, no real roots
        printf("The equation has no real roots (imaginary roots).\n");
    }

    return 0;
}
