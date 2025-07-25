#include <stdio.h>

int slen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

void scpy(char *d, char *s)
{
    while (*d++ = *s++);
}

int scmp(char *a, char *b)
{
    while (*a && *a == *b)
        a++, b++;
    return *a - *b;
}

int main()
{
    char a[100], b[100];

    printf("Enter two strings:\n");
    scanf("%s%s", a, b);

    printf("Len=%d\n", slen(a));
    scpy(b, a);

    printf("Copy=%s\n", b);

    printf("Cmp=%d\n", scmp(a, b));

    return 0;
}