#include <stdio.h>
void copy(FILE *f, FILE *out)
{
    char c;
    while ((c = fgetc(f)) != EOF)
        fputc(c, out);
}
int main()
{
    FILE *f1 = fopen("a.txt", "r"), *f2 = fopen("b.txt", "r"), *f3 = fopen("c.txt", "w");
    copy(f1, f3);
    copy(f2, f3);
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
