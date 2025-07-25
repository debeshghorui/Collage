#include <stdio.h>
int main()
{
    FILE *f1 = fopen("a.bin", "rb"), *f2 = fopen("b.bin", "wb");
    char buf[1000];
    size_t n;
    while ((n = fread(buf, 1, 1000, f1)) > 0)
        fwrite(buf, 1, n, f2);
    fclose(f1);
    fclose(f2);

    return 0;
}
