#include <stdio.h>

int main() {
    int a, b, temp;

    // Input the values of a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display the values before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the values using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display the values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
