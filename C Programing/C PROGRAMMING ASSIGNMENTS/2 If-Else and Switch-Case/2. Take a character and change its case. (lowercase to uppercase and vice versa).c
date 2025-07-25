#include <stdio.h>

int main()
{
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase or uppercase, then change its case
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32; // Convert lowercase to uppercase
        printf("The uppercase character is: %c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32; // Convert uppercase to lowercase
        printf("The lowercase character is: %c\n", ch);
    }
    else
    {
        printf("The input is not an alphabetic character.\n");
    }

    return 0;
}
