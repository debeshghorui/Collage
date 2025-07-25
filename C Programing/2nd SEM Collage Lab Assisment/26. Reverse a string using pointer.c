#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], *p;

    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    p = s + strlen(s) - 1;
    
    while (p >= s)
        printf("%c", *p--);

    return 0;    
}