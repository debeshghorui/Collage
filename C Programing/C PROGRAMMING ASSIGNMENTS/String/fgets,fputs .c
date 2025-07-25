#include <stdio.h>

int main() {
    char buffer[10];

    printf("Enter a line: ");
    fgets(buffer, sizeof(buffer), stdin); // Read from standard input
    fputs("You entered: ", stdout);
    fputs(buffer, stdout); // Write to standard output

    return 0;
}