#include <stdio.h>
int main()
{
    char s[100];
    int c = 0, i;

    printf("Enter a string: ");
    gets(s);

    for (i = 0; s[i]; i++)
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            c++;
    printf("Words=%d\n", c);

    return 0;
}
