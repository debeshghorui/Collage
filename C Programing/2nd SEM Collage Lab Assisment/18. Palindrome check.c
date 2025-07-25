#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int f = 1, i, n;

    printf("Enter a string: ");
    scanf("%s", s);
    n = strlen(s);
    for (i = 0; i < n / 2; i++)
        if (s[i] != s[n - i - 1])
        {
            f = 0;
            break;
        }
    printf(f ? "Palindrome\n" : "Not Palindrome\n");

    return 0;
}