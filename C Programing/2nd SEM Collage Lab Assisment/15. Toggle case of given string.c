#include <stdio.h>
int main() {
    char s[100]; 
    
    printf("Enter a string: ");
    scanf("%s",s);

    for(int i=0;s[i];i++)
        s[i]^=32*(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z');
    printf("%s\n",s);

    return 0;
}
