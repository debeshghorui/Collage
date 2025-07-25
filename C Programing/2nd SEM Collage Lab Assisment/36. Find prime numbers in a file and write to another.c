#include <stdio.h>
int isP(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    FILE *f = fopen("a.txt", "r"), *g = fopen("b.txt", "w");
    int n;
    while (fscanf(f, "%d", &n) != EOF)
        if (isP(n))
            fprintf(g, "%d ", n);
    fclose(f);
    fclose(g);

    return 0;
}
