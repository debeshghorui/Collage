#include <stdio.h>
int main()
{
    char s[100], *p = s;
    int l = 0;
    scanf("%s", s);
    while (*p++)
        l++;
    printf("%d\n", l);

    return 0;
}