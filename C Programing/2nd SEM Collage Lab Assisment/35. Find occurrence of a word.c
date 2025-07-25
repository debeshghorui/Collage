#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f = fopen("a.txt", "r");
    char w[20], t[20];
    int c = 0;
    scanf("%s", w);
    while (fscanf(f, "%s", t) != EOF)
        if (strcmp(w, t) == 0)
            c++;
    printf("Count=%d\n", c);
    fclose(f);

    return 0;
}
