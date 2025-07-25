#include <stdio.h>

int main() {
    char buffer[10];

    printf("Enter a line: ");
    gets(buffer); // Read from standard input
    puts("You entered: ");
    puts(buffer); // Write to standard output

    return 0;
}