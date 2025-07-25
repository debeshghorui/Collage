#include <stdio.h>
int main()
{
    char s[100];
    int v = 0, c = 0, d = 0, sp = 0, sc = 0;

    printf("Enter a string: ");
    gets(s);
    
    for (int i = 0; s[i]; i++)
    {
        if ((s[i] | 32) == 'a' || (s[i] | 32) == 'e' || (s[i] | 32) == 'i' || (s[i] | 32) == 'o' || (s[i] | 32) == 'u')
            v++;
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            c++;
        else if (s[i] >= '0' && s[i] <= '9')
            d++;
        else if (s[i] == ' ')
            sp++;
        else
            sc++;
    }
    printf("V=%d C=%d D=%d SP=%d SC=%d\n", v, c, d, sp, sc);
}
