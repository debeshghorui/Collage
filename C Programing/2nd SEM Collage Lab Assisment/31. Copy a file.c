#include <stdio.h>
int main()
{
    FILE *f1 = fopen("a.txt", "r"), *f2 = fopen("b.txt", "w");
    char c;
    while ((c = fgetc(f1)) != EOF)
        fputc(c, f2);
    fclose(f1);
    fclose(f2);
    return 0;
}