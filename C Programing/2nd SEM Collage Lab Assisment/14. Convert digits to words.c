#include <stdio.h>
int main() {
    char *w[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char s[100]; 
    
    printf("Enter a number: ");
    scanf("%s",s);

    for(int i=0;s[i];i++) {
        printf("%s ", w[s[i]-'0']);
    }

    return 0;
}
