#include <stdio.h>
int main()
{
    char s1[100], s2[100], *p = s1, *q = s2;

    printf("Enter a string: ");
    scanf("%s", s1);
    
    while ((*q++ = *p++));
    printf("%s\n", s2);

    return 0;
}
