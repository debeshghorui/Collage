#include <stdio.h>
int main()
{
    FILE *f = fopen("a.txt", "a");
    char s[100];
    scanf(" %[^\n]", s);
    fputs(s, f);
    fclose(f);
    return 0;
}