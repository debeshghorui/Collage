#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%u", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int n;
    printf("Enter an integer: ");
    scanf("%u", &n);

    printf("Binary representation: ");
    printBinary(n);

    return 0;
}
