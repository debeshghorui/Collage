#include <stdio.h>
int main()
{
    FILE *f = fopen("a.txt", "r");
    int c = 0, w = 0, l = 0;
    char ch, p = ' ';
    while ((ch = fgetc(f)) != EOF)
    {
        c++;
        if (ch == '\n')
            l++;
        if ((p == ' ' || p == '\n') && ch != ' ' && ch != '\n')
            w++;
        p = ch;
    }
    fclose(f);
    printf("Chars=%d Words=%d Lines=%d\n", c, w, l);
    
    return 0;
}